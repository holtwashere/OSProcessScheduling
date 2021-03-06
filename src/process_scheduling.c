#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "dyn_array.h"
#include "process_scheduling.h"

// private function
void virtual_cpu(ProcessControlBlock_t *process_control_block) {
  // decrement the burst time of the pcb
  --process_control_block->remaining_burst_time;
}

bool first_come_first_serve(dyn_array_t *ready_queue,
                            ScheduleResult_t *result) {
  if (!ready_queue || !result) {
    return false;
  }
  return true;
}

bool priority(dyn_array_t *ready_queue, ScheduleResult_t *result) {
  if (!ready_queue || !result) {
    return false;
  }
  return true;
}

#ifdef GRAD_TESTS
bool round_robin(dyn_array_t *ready_queue, ScheduleResult_t *result,
                 size_t quantum) {
  if (!ready_queue || !result || quantum <= 0) {
    return false;
  }
  return true;
}
#endif

dyn_array_t *load_process_control_blocks(const char *input_file) {
  if (!input_file) {
    return NULL;
  }
  return NULL;
}
