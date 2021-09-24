#include <stdio.h>

#define PRINT(i, limit) do \
                        { \
                            if (i++ < limit) \
                            { \
                                printf("GeeksQuizn\n"); \
                                continue; \
                            } \
                            else \
                            { \
                                break; \
                            } \
                        }while(1)

int main()
{
    int count = 0;
    PRINT(count, 3);
    return 0;
}