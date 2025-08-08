#ifndef DISPLAY_H
#define DISPLAY_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Initialize display module
 */
void display_init(void);

/**
 * @brief Show message on display
 * @param message Text message to display
 */
void display_show_message(const char* message);

/**
 * @brief Show numeric data on display
 * @param value1 First value to display
 * @param value2 Second value to display
 */
void display_show_data(float value1, float value2);

/**
 * @brief Clear display screen
 */
void display_clear_screen(void);

#ifdef __cplusplus
}
#endif

#endif // DISPLAY_H