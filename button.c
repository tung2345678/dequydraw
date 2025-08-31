#include "button.h"
//	uint8_t button_current=1;// trạng thái hiện tại.
//	uint8_t button_last=1; // trạng thái cuối.
//	uint8_t button_filter=1; // Lọc nhiễu nút bấm rung phím
//	uint8_t is_debouncing;
//	uint32_t time_deboune;
//	uint32_t time_start_press;
//	uint8_t is_press_timeout; copy sang struct
	//__weak ý nghĩa là khi trong project ko có hàm nào có tên dưới thì mặc định gọi hàm ra
	__weak void button_pressing_callback(Button_Typdef *ButtonX)
	{

	}
	__weak void button_press_sort_callback(Button_Typdef *ButtonX)// nhấn nhả ra nhanh liền.
		{
			//		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);
		}
	__weak void button_release_callback(Button_Typdef *ButtonX)// (GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin)
		{

		}
		//---------------------------Nhấn Giữ------------------------------------
	__weak void button_press_timeout_callback(Button_Typdef *ButtonX)
		{
		//	HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);

		}

	void button_handle(Button_Typdef *ButtonX)
		{
			uint8_t sta= HAL_GPIO_ReadPin(ButtonX->GPIOx,ButtonX->GPIO_Pin);
			// --------------------Lọc Nhiễu--------------
			if(sta!=ButtonX->button_filter)
			{
				ButtonX->button_filter = sta;
				ButtonX->is_debouncing=1;     //đánh dấu là hết có nhiễu rồi mới thực hiện gán button_current=button_filter
				ButtonX->time_deboune =	HAL_GetTick(); // đánh dấu sự thay đổi thời gian.
			}
			//---------------Tín hiệu đã xác lập------------
			if(ButtonX->is_debouncing&& (HAL_GetTick()- ButtonX->time_deboune>=15))
			{
				ButtonX->button_current=ButtonX->button_filter;
				ButtonX->is_debouncing=0;
			}
			//--------------- Xử Lý --------------
			if(ButtonX->button_current!=ButtonX->button_last) // Kiểm tra sự thay đổi nút nhấn
			{
				if(ButtonX->button_current==0) //nhấn nút xuống
				{
					ButtonX->is_press_timeout=1;	 // đánh dấu là lúc nhấn để nếu có giữ lâu thì xuống dưới if kia
					button_pressing_callback(ButtonX); //(GPIO_TypeDef *GPIOx,uint16_t GPIO_Pin) : nguyên mẫu hàm
					ButtonX->time_start_press=HAL_GetTick();
				}
				else // nhả nút ra
				{
					if(HAL_GetTick()-ButtonX->time_start_press<=1000)
					{
						button_press_sort_callback(ButtonX);
					}
					button_release_callback(ButtonX);
					ButtonX->is_press_timeout=0;

				}
				ButtonX->button_last=ButtonX->button_current;
			}
			//-------------Xử Lý Nhấn Giữ----------------
			if(ButtonX->is_press_timeout&&HAL_GetTick()-ButtonX->time_start_press>=3000)
			{
				button_press_timeout_callback(ButtonX);
				ButtonX->is_press_timeout=0; // cập nhật lại nếu thả ra.
			}
		}
	void button_init(Button_Typdef *ButtonX, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
	{
	    ButtonX->GPIOx = GPIOx;
	    ButtonX->GPIO_Pin = GPIO_Pin;
	}
