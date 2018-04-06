#include <mruby.h>
#include <driver/gpio.h>

void mrb_esp32_gpio_gem_init(mrb_state* mrb) {
  struct RClass *mrb_esp32, *mrb_esp32_gpio;

  /* ESP32 */
  mrb_esp32 = mrb_define_module(mrb, "ESP32");

  /* ESP32::GPIO */
  mrb_esp32_gpio = mrb_define_class_under(mrb, mrb_esp32, "GPIO", mrb->object_class);

  /* gpio_num_t */
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_0", mrb_fixnum_value(GPIO_NUM_0));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_1", mrb_fixnum_value(GPIO_NUM_1));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_2", mrb_fixnum_value(GPIO_NUM_2));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_3", mrb_fixnum_value(GPIO_NUM_3));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_4", mrb_fixnum_value(GPIO_NUM_4));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_5", mrb_fixnum_value(GPIO_NUM_5));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_6", mrb_fixnum_value(GPIO_NUM_6));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_7", mrb_fixnum_value(GPIO_NUM_7));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_8", mrb_fixnum_value(GPIO_NUM_8));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_9", mrb_fixnum_value(GPIO_NUM_9));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_10", mrb_fixnum_value(GPIO_NUM_10));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_11", mrb_fixnum_value(GPIO_NUM_11));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_12", mrb_fixnum_value(GPIO_NUM_12));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_13", mrb_fixnum_value(GPIO_NUM_13));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_14", mrb_fixnum_value(GPIO_NUM_14));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_15", mrb_fixnum_value(GPIO_NUM_15));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_16", mrb_fixnum_value(GPIO_NUM_16));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_17", mrb_fixnum_value(GPIO_NUM_17));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_18", mrb_fixnum_value(GPIO_NUM_18));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_19", mrb_fixnum_value(GPIO_NUM_19));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_21", mrb_fixnum_value(GPIO_NUM_21));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_22", mrb_fixnum_value(GPIO_NUM_22));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_23", mrb_fixnum_value(GPIO_NUM_23));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_25", mrb_fixnum_value(GPIO_NUM_25));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_26", mrb_fixnum_value(GPIO_NUM_26));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_27", mrb_fixnum_value(GPIO_NUM_27));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_32", mrb_fixnum_value(GPIO_NUM_32));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_33", mrb_fixnum_value(GPIO_NUM_33));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_34", mrb_fixnum_value(GPIO_NUM_34));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_35", mrb_fixnum_value(GPIO_NUM_35));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_36", mrb_fixnum_value(GPIO_NUM_36));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_37", mrb_fixnum_value(GPIO_NUM_37));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_38", mrb_fixnum_value(GPIO_NUM_38));
  mrb_define_const(mrb, mrb_esp32_gpio, "NUM_39", mrb_fixnum_value(GPIO_NUM_39));

  /* gpio_pullup_t */
  mrb_define_const(mrb, mrb_esp32_gpio, "PULLUP_DISABLE", mrb_fixnum_value(GPIO_PULLUP_DISABLE));
  mrb_define_const(mrb, mrb_esp32_gpio, "PULLUP_ENABLE", mrb_fixnum_value(GPIO_PULLUP_ENABLE));
}

void mrb_esp32_gpio_gem_final(mrb_state* mrb) {
}
