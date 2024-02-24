#include <lcd1602.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#define RS 15
#define EN 16
#define D4 4
#define D5 5
#define D6 6
#define D7 7

void app_main() {
    lcd1602_init(RS, EN, D4, D5, D6, D7);
    lcd1602_write("Isto e um teste!");
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Teste embaixo.");
    lcd1602_set_cursor(0, 0);
    vTaskDelay(pdMS_TO_TICKS(5000));
    lcd1602_clear();
    lcd1602_write("Testando de novo.");
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Isto e um teste");
    lcd1602_set_behavior(1, 1);
    vTaskDelay(pdMS_TO_TICKS(5000));
    lcd1602_clear();
    lcd1602_write("Terceiro teste.");
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Vamos la!");
    vTaskDelay(pdMS_TO_TICKS(5000));
    lcd1602_clear();
    lcd1602_set_cursor(0, 0);
    lcd1602_write("Teste final.");
    lcd1602_set_cursor(1, 0);
    lcd1602_write("Terminando.");
    lcd1602_set_cursor(0, 0);
    lcd1602_set_behavior(0, 0);
    while(true){
        lcd1602_shift_left();
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}