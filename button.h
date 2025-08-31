#ifndef BUTTON_H
#define BUTTON_H

#include "main.h"

typedef struct
{
    uint8_t button_current;     // trạng thái hiện tại
    uint8_t button_last;        // trạng thái cuối
    uint8_t button_filter;      // lọc nhiễu nút bấm
    uint8_t is_debouncing;
    uint32_t time_deboune;
    uint32_t time_start_press;
    uint8_t is_press_timeout;
    GPIO_TypeDef *GPIOx;        // Port nào (A, B, C...)
    uint16_t GPIO_Pin;          // Pin nào

} Button_Typdef;

void button_handle(Button_Typdef *ButtonX);
void button_init(Button_Typdef *ButtonX, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);

#endif
