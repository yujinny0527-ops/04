#include <stdio.h>

int main(int argc, char *argv[]) {
    int second;
    int hour, minute;

    scanf("%i", &second);

    hour = second / 3600;
    second = second % 3600;

    minute = second / 60;
    second = second % 60;

    printf("%i:%02i:%02i", hour, minute, second);

    return 0;
}