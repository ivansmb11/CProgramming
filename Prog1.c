#include <stdio.h>
#include <stdlib.h>

#define CURR_SPEED_PARAM_POSITION 1
#define MAX_SPEED_PARAM_POSITION 2

int main(int argc, char **argv)
{
    float currSpeed, maxSpeed, arcOpening;
    currSpeed = atoi(argv[CURR_SPEED_PARAM_POSITION]);
    maxSpeed = atoi(argv[MAX_SPEED_PARAM_POSITION]);

    arcOpening = currSpeed/maxSpeed;
    printf("Arc opening(%f/%f) = %f%%\n" ,currSpeed, maxSpeed, arcOpening*100);

    return 0;
}
