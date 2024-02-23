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
    while(true){
        vTaskDelay(pdMS_TO_TICKS(1));
    }
}