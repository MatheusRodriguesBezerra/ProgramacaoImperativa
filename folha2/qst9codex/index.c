#include <stdio.h>

//possui algmas excessões

int bissexto(int n){
    if ((n % 4 = 0) && (n % 100 != 0))
    {
        printf("&d", n);
    }

    else{
        if (n % 4 = 1)
        {
            printf("&d", n + 3);
        }

        if (n % 4 = 2)
        {
            printf("&d", n + 2);
        }

        if (n % 4 = 3)
        {
            printf("&d", n + 1);
        }
        
    }
    
    return 0;
}