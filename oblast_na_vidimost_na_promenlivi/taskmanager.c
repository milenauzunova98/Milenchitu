#include <stdio.h>
#include <string.h>
#include "processes.h"

void printprocesses(void) {
  printf("Processes:\n");
  for (int i = 0; i < processescount; i++) {
    printf("ID: %d, Name: %s\n", processes[i].id, processes[i].name);
  }
}

int main(void) {
  int choice;
  char name[31];
  int processID;

  do {
    printf("\nOptions:\n1. Create a process\n2. Display all processes\n3. Stop a process\n4. Exit\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter the name of the process: ");
        scanf("%30s", name);
        int newID = createnewprocess(name);
        if (newID != 0) {
            printf("Process created successfully. ID: %d\n", newID);
        }
        break;

      case 2:
        printprocesses();
        break;

      case 3:
        printf("Enter the ID of the process to stop: ");
        scanf("%d", &processID);
        stopprocess(processID);
        break;

      case 4:
        printf("Exiting the program.\n");
        break;

      default:
        printf("Invalid choice. Try again.\n");
        break;
    }
  } while (choice != 4);

  return 0;
}
