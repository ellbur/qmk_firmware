
#include "../../tmk_core/common/report.h"
#include "../../umapper/debugging.h"
#include <stdio.h>


report_keyboard_t keyboard_report = { };

void add_key_to_report(report_keyboard_t* keyboard_report, uint8_t key) {
  printf("add_key_to_report(%s);\n", key_names[key]);
}

void del_key_from_report(report_keyboard_t* keyboard_report, uint8_t key) {
  printf("del_key_from_report(%s);\n", key_names[key]);
}

void send_keyboard_report(void) {
  printf("send_keyboard_report()\n");
}

