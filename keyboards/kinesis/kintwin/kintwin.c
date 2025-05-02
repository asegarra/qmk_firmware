// Copyright 2023 Alex Stepanov (@alvicstep)
// SPDX-License-Identifier: GPL-2.0-or-later

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

  gpio_set_pin_output(LED_COMPOSE_PIN);   
  gpio_write_pin_low(LED_COMPOSE_PIN);
  wait_ms(led_delay_ms);
  gpio_write_pin_high(LED_COMPOSE_PIN);
}

bool led_update_user(led_t led_state) {
  gpio_write_pin(LED_NUM_LOCK_PIN, !led_state.num_lock);
  gpio_write_pin(LED_CAPS_LOCK_PIN, !led_state.caps_lock);
  gpio_write_pin(LED_SCROLL_LOCK_PIN, !led_state.scroll_lock);
  // Disable led_update_kb() so that layer indication code doesn't get overridden.
  return false;
}
