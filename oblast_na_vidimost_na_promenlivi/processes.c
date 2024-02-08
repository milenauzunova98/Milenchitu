#include "processes.h"
#include <stdio.h>
#include <string.h>

struct Process processes[5];
int processescount = 0;

int nextprocessid(void) {
  return (processescount >= 5) ? 0 : processescount + 1;
}

int createnewprocess(const char name[30]) {
  if (processescount >= 5) {
    printf("Error: Maximum number of processes reached. Cannot create a new process.\n");
    return 0;
  }

  int newID = nextprocessid();
  processes[processescount].id = newID;
  strncpy(processes[processescount].name, name, 30);
  processes[processescount].name[30] = '\0';

  processescount++;

  return newID;
}

void stopprocess(int processID) {
  for (int i = 0; i < processescount; ++i) {
    if (processes[i].id == processID) {
      processescount--;

      if (i != processescount) {
          processes[i] = processes[processescount];
      }

      return;
    }
  }

  printf("Error: Process with ID %d not found.\n", processID);
}
