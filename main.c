/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "button.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */


/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

//uint8_t a;// kieu du lieu 8 bit = 1 byte unsign: ko dau

//uint16_b;// 16 bit = 2 byte

//uint32 c;

//int8_t a; // 1 byte : -128 -> 127 -2^(n-1) - 2^(n-1)-1

//	uint32_t time_curent;
//	uint32_t time_curent2;
//	uint8_t sta_button;
//	uint8_t sta_led;
//	uint8_t cnt;
// ----------------var button--------------------
//	uint8_t button_current=1;// trạng thái hiện tại.
//	uint8_t button_last=1; // trạng thái cuối.
//	uint8_t button_filter=1; // L�?c nhiễu nút bấm rung phím
//	uint8_t is_debouncing;
//	uint32_t time_deboune;
//	uint32_t time_start_press;
//	uint8_t is_press_timeout;
//-----------------var Led--------------
Button_Typdef button1;
Button_Typdef button2;


	typedef enum
	{
		LED_OFF=0,
		LED1_BLINK_1HZ, // biến tiếp theo bằng biến trước +1
		LED2_BLINK_5HZ,
		LED3_BLINK_2HZ,
		LED4_BLINK_3HZ,

//------------tên hằng-------------
	}LedStatus;//tên kiểu

	LedStatus led_status;

//	void button_press_sort_callback()// nhấn nhả ra nhanh li�?n.
//	{
//		//		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);
//	}

	void button_pressing_callback(Button_Typdef *ButtonX) // nhấn nút
	{
		//HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);
		//(GPIOx==GPIOA)&&(GPIO_Pin==GPIO_PIN_1||GPIO_PIN_0)
		if(ButtonX==&button1)
		{
		switch(led_status)
		{
		case LED_OFF:
			led_status=LED1_BLINK_1HZ;
			break;
		case LED1_BLINK_1HZ:
			led_status=LED2_BLINK_5HZ;
			break;
		case LED2_BLINK_5HZ:
			led_status=LED3_BLINK_2HZ;
			break;
		case LED3_BLINK_2HZ:
			led_status=LED4_BLINK_3HZ;
			break;
		case LED4_BLINK_3HZ:
			led_status=LED_OFF;
			break;
			default:
			break;
		}
		}
		else if(ButtonX==&button2)
		{



		}
	}
	//------------------------nhả nút nó sẽ vào hàm này---------------------------
//	void button_release_callback()
//	{
//
//	}
//	//---------------------------Nhấn Giữ------------------------------------
//	void button_press_timeout_callback()
//	{
//	//	HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);
//
//	}
//	void button_handle()
//	{
//		uint8_t sta= HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0);
//		// --------------------L�?c Nhiễu--------------
//		if(sta!=button_filter)
//		{
//			button_filter = sta;
//			is_debouncing=1;     //đánh dấu là có nhiễu rồi mới thực hiện gán button_current=button_filter
//			time_deboune =	HAL_GetTick(); // đánh dấu sự thay đổi th�?i gian.
//		}
//		//---------------Tín hiệu đã xác lập------------
//		if(is_debouncing&& (HAL_GetTick()-time_deboune>=15))
//		{
//			button_current=button_filter;
//			is_debouncing=0;
//		}
//		//--------------- Xử Lý --------------
//		if(button_current!=button_last) // Kiểm tra sự thay đổi nút nhấn
//		{
//			if(button_current==0) //nhấn nút xuống
//			{
//				is_press_timeout=1;	 // đánh dấu là lúc nhấn để nếu có giữ lâu thì xuống dưới if kia
//				button_pressing_callback();
//				time_start_press=HAL_GetTick();
//			}
//			else // nhả nút ra
//			{
//				if(HAL_GetTick()-time_start_press<=1000)
//				{
//					button_press_sort_callback();
//				}
//				button_release_callback();
//				is_press_timeout=0;
//
//			}
//			button_last=button_current;
//		}
//		//-------------Xử Lý Nhấn Giữ----------------
//		if(is_press_timeout&&HAL_GetTick()-time_start_press>=3000)
//		{
//			button_press_timeout_callback();
//			is_press_timeout=0; // cập nhật lại nếu thả ra.
//		}
//	}
void led1_blink_1hz()
	{
		static uint32_t tled1_blink; // ko lm mất giá trị khi gán lại hàm.
		// khai báo biến cục bộ bên trong hàm này .
		//static: là biến tĩnh tương đương biến toàn cục.
		if(HAL_GetTick()-tled1_blink>=500)
		{
			HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_13);
			tled1_blink=HAL_GetTick();
		}
	}
void led2_blink_5hz()
	{
		static uint32_t tled2_blink;
		if(HAL_GetTick()-tled2_blink >= 100)
		{
			HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_14);
			tled2_blink=HAL_GetTick();
		}
	}
void led3_blink_2hz()
{
	static uint32_t tled3_blink;
	if(HAL_GetTick()-tled3_blink>=250)
	{
		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_15);
		tled3_blink=HAL_GetTick();
	}
}
void led4_blink_3hz()
{
	static uint32_t tled4_blink;
	if(HAL_GetTick()-tled4_blink>=160)
	{
		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_12);
		tled4_blink=HAL_GetTick();
	}
}
void led_off()
	{
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_13,0);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_14,0);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_15,0);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_12,0);

	}
void led_handle()
{
	switch(led_status)
			{
			case LED_OFF:
//				led_status=LED1_BLINK_1HZ;
				led_off();
				break;
			case LED1_BLINK_1HZ:
//				led_status=LED2_BLINK_5HZ;
				led1_blink_1hz();
				break;
			case LED2_BLINK_5HZ:
//				led_status=LED3_BLINK_2HZ;
				led2_blink_5hz();
			break;
			case LED3_BLINK_2HZ:
//				led_status=LED_OFF;
				led3_blink_2hz();
				break;
			case LED4_BLINK_3HZ:
				led4_blink_3hz();
				break;
			}

}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  led_status =LED_OFF;
  button_init(&button1, GPIOA, GPIO_PIN_0);
  button_init(&button2, GPIOA, GPIO_PIN_1);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
//	  sta_button=HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0);
//	  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,sta_button); có thể sử dụng dòng này mà ko cần dùng if dưới.
//	  if(sta_button==0)
//	  {
//		  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,0);
//	  }
//	  else
//	  {
//		  HAL_GPIO_WritePin(GPIOC,GPIO_PIN_13,1);
//
//
//	  }
//	if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0==0))
//	{
//			HAL_Delay(20);// chống rung phím.
//		if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0==0))
//		{
//			HAL_GPIO_TogglePin(GPIO,GPIO_PIN_13);
//			while(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0==0));
//		}
//
//	}
	  button_handle(&button1);
	  button_handle(&button2);
	  led_handle();
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI_DIV2;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL16;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_8|GPIO_PIN_9, GPIO_PIN_RESET);

  /*Configure GPIO pins : PA0 PA1 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB12 PB13 PB14 PB15
                           PB8 PB9 */
  GPIO_InitStruct.Pin = GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_8|GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
