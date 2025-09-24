/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once
// #define ORYX_CONFIGURATOR
#undef DEBOUNCE
#define DEBOUNCE 10

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "KvGQz/6aw7BB"
#define LAYER_STATE_8BIT

#define NO_MUSIC_MODE

// When idle, turn off Sentence Case after 2 seconds.
#define SENTENCE_CASE_TIMEOUT 2000

#define RGB_MATRIX_STARTUP_SPD 60
