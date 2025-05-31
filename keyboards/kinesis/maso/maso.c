#include "quantum.h"

void keyboard_pre_init_user(void) {

  gpio_set_pin_output(LED_LAYER_PIN);
  gpio_write_pin_low(LED_LAYER_PIN);   

}
