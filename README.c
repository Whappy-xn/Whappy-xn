#include <stdio.h>

viod f(int *p);
viod g(int k);

int main(viod)
{
    int i =6;
    printf("&i=%p\n", &i);
    f(&i);
    g(k);

    return 0;
}

viod f(int *p);
{
    printf(" p=%p\n", p);
    printf("*p=%p\n", *p);
    *p = 26;
}

viod g(int k)
{
    printf("k=%d\n",k)
}
    
    
