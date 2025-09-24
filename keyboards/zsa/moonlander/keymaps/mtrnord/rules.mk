# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = yes
AUDIO_ENABLE = no
MOUSEKEY_ENABLE = no
ORYX_ENABLE = yes
RGB_MATRIX_CUSTOM_KB = yes
SPACE_CADET_ENABLE = no
LTO_ENABLE = yes

# https://docs.qmk.fm/features/leader_key interesting
LEADER_ENABLE = no

SRC += features/sentence_case.c
