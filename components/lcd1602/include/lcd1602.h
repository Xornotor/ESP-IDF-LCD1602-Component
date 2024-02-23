#include <stdio.h>
#include <string.h>
#include <esp_err.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

esp_err_t lcd1602_init(uint16_t rs, uint16_t en,
                       uint16_t d4, uint16_t d5,
                       uint16_t d6, uint16_t d7);

esp_err_t lcd1602_write(char* string);

esp_err_t lcd1602_clear();

esp_err_t lcd1602_set_behavior(bool cursor, bool blink);

esp_err_t lcd1602_set_cursor(uint8_t line, uint8_t column);