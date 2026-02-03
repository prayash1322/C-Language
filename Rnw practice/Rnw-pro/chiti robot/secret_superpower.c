#include <stdio.h>

void superPower(int level) {
    if (level == 10) {
        printf("Emergency! Flying Mode ON!\n");
    } else if (level < 10) {
        printf("Energy too low for flight.\n");
    }
    else {
        printf("You are already too overpower!!!");
    }
}

int main() {
    int level;
    printf("Enter energy level: ");
    scanf("%d", &level);
    superPower(level);
    return 0;
}
