#include <stdio.h>
int main()
{
    int line = 0;
    while (line < 6667)
    {
        printf("快速加载中:%d\n",line);
        line++;
    }
    if (line == 6667)
    {
        printf("原神启动\n");
    }
    return 0;
}
