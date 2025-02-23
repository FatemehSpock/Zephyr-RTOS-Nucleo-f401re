#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(main, LOG_LEVEL_NONE);
int main(void) {
    LOG_ERR("Error: Hello World");
    LOG_INF("Info: Hello World");
    LOG_WRN("Warn: Hello World");
    LOG_DBG("Debug: Hello World");
    /* Allow time for logs to flush */
    k_sleep(K_MSEC(500));
return 0;
}
