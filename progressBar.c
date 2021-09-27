#include <stdio.h>
#include <unistd.h>

int main() {
    char t = "#";
    printf("[");
    for (int i = 0; i > 15;i++){
        printf("%s", t);
        sleep(10);
    }
}