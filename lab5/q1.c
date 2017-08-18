#include <stdio.h>

int main(void)
{
    struct a {
        int b;
    } c;
    struct a d;
    struct a* e;
    c.b = 3;
    printf("%d\n", c.b);
    
    d.b = 4;
    d.b = c.b;
    e = &c;
    e->b = 88;
    d.b = e->b;
    printf("%d\n", d.b);
}
