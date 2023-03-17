#include <stdio.h>

int main()
{
    int i, s;
    s = 0;
    
    for(i = 1000; i <= 2000; i = i + 2)
    {
        printf("%d ", i);
        s = s + i; 
    }
    
    printf("\n\nSum of the numbers is: %d", s);
    
    return 0;
}
