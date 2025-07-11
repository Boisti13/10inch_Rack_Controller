#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"

void app_main(void) {
    while (1) {
        ESP_LOGI("MAIN", "Hello from ESP32-C6!");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
