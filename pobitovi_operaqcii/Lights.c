#include <stdio.h>

unsigned char light = 0;

void switchLights(int room) {
  if (room < 1 || room > 8) {
    printf("Invalid room number. Please enter a number between 1 and 8.\n");
    return;
  }

  light = light ^ (1 << (room - 1));
}

void printState() {
  printf("The light is on in rooms:");

  for (int i = 0; i < 8; i++) {
    if (light & (1 << i)) {
      printf(" %d", i + 1);
    }
  }

  printf("\n");
}

int main() {
  int choice, room;

  do {
    printf("\nMenu:\n");
    printf("1. Switch lights\n");
    printf("2. Print state\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter room number (1-8): ");
        scanf("%d", &room);
        switchLights(room);
        break;
      case 2:
        printState();
        break;
      case 0:
        printf("Goodbye!\n");
        break;
      default:
        printf("Invalid choice. Please enter a valid option.\n");
    }
  } while (choice != 0);

  return 0;
}

