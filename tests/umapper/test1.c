
#include <stdio.h>
#include "../../umapper/main.h"

int main() {
  printf("Hi.\n");
  printf("\n");

  keyevent_t e1 = { .key = { .row = 3, .col = 1 }, .pressed = true, .time = 0 };
  umapper_action_exec(e1);

  keyevent_t e2 = { .key = { .row = 4, .col = 7 }, .pressed = true, .time = 0 };
  umapper_action_exec(e2);
}

