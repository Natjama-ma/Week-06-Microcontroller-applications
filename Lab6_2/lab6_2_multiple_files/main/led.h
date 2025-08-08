#ifndef LED_H
#define LED_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize LED module
 */
void led_init(void);

/**
 * @brief Turn LED on
 */
void led_on(void);

/**
 * @brief Turn LED off
 */
void led_off(void);

/**
 * @brief Toggle LED state
 */
void led_toggle(void);

/**
 * @brief Get current LED state
 * @return true if LED is on, false if off
 */
bool led_get_state(void);

/**
 * @brief LED blink task (runs in separate task)
 * @param parameter Task parameter (not used)
 */
void led_blink_task(void *parameter);

/**
 * @brief Start LED blinking in background task
 */
void led_start_blinking(void);

#ifdef __cplusplus
}
#endif

#endif // LED_H