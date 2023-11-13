#include <stdio.h>
#include <time.h>

int main() {
    // Get the current day of the week
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);
    int day = tm_info->tm_wday; // 0 = Sunday, 1 = Monday, ...

    if (day == 1) {
        printf("Happy Monday!\n");
    } else {
        printf("It's not Monday today.\n");
    }

    return 0;
}

