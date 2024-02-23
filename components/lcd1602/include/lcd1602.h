#include <stdio.h>
#include <string.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <driver/gpio.h>

void lcd1602_init(uint16_t rs, uint16_t en,
                  uint16_t d4, uint16_t d5,
                  uint16_t d6, uint16_t d7);

void lcd1602_write();