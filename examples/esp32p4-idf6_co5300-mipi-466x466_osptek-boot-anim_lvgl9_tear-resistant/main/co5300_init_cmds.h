#ifndef CO5300_INIT_CMDS_H
#define CO5300_INIT_CMDS_H

#include "esp_lcd_co5300.h"

#ifdef __cplusplus
extern "C" {
#endif

// ==================== CO5300 初始化命令数组 ====================
static co5300_lcd_init_cmd_t lcd_init_cmds[] = {
    //  {cmd, { data }, data_size, delay_ms}
    {0xFE, (uint8_t []){0x20}, 1, 0},
    {0xF4, (uint8_t []){0x5A}, 1, 0},
    {0xF5, (uint8_t []){0x59}, 1, 0},
    {0xFE, (uint8_t []){0x80}, 1, 0},
    {0x03, (uint8_t []){0x00}, 1, 0},

    {0xFE, (uint8_t []){0x00}, 1, 0},

    // {0x35, (uint8_t []){0x00}, 1, 0},
    {0x53, (uint8_t []){0x20}, 1, 0},
    {0x51, (uint8_t []){0xFF}, 1, 0},
    {0x63, (uint8_t []){0xAB}, 1, 0},
    {0x2A, (uint8_t []){0x00, 0x06, 0x01, 0xD7}, 4, 0},
    {0x2B, (uint8_t []){0x00, 0x00, 0x01, 0xD1}, 4, 0},
    {0x11, NULL, 0, 400},
    {0x29, NULL, 0, 0},
};

static const size_t lcd_init_cmds_size = sizeof(lcd_init_cmds) / sizeof(co5300_lcd_init_cmd_t);

#ifdef __cplusplus
}
#endif

#endif // CO5300_INIT_CMDS_H