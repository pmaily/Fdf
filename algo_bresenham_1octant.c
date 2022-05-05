#include <unistd.h>
#include <stdlib.h>

void ft_tracersegment(int x1, int y1, int x2, int y2)
{
    int dx;
    int dy;
    int error;

    e = x2 -x1;
    dx = e * 2;
    dy = (y2 - y1) * 2;
    while (x1 <= x2)
    {
        putpixel(x1, y1);
        x1++;
        e -= dy;
        if (e <= 0)
        {    
            y1++;
            e += dx;
        }
    }
}