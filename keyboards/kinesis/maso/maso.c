#include "quantum.h"

void keyboard_pre_init_user(void) {

  uint8_t led_delay_ms = 80;

  /* LED pins setup */
  gpio_set_pin_output(LED_CAPS_LOCK_PIN);
  gpio_write_pin_low(LED_CAPS_LOCK_PIN);

  wait_ms(led_delay_ms);
  gpio_set_pin_output(LED_NUM_LOCK_PIN);   
  gpio_write_pin_low(LED_NUM_LOCK_PIN);
  wait_ms(led_delay_ms);

  gpio_set_pin_output(LED_SCROLL_LOCK_PIN);   
  gpio_write_pin_low(LED_SCROLL_LOCK_PIN);
  wait_ms(led_delay_ms);

  wait_ms(led_delay_ms);

  gpio_set_pin_output(LED_LAYER_PIN);
  gpio_write_pin_low(LED_LAYER_PIN);   

}
