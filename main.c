#include <stdio.h>

int main(int argc, char *argv[]) {
    int second;
    int minute;

    scanf("%i", &second);

    minute = second / 60;
    second = second % 60;

    printf("%i:%02i", minute, second);
}