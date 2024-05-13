#include <stdio.h>
#include <stdlib.h>

//Note:We will make the password 2001

int main()
{
    printf("\n   -----------------Welcome to Mrs.Lock System----------------");

    int password;
    int fakeInout;

    printf("\n\n Please type your password.");
    scanf("%d", &password);

    if (password <= 2001 && password >= 2001)
    {
        printf("\n   The password is correct :)");
        printf("\n   Hello my close friend :)");
    }
    else
    {
       printf("\n    The password is Worng");
       printf("\n    You still have two times.");


       printf("Try again..");
       scanf("%d",&password);

    if (password <= 2001 && password >= 2001)
    {
        printf("\n   The password is correct :)");
        printf("\n    Hello my close friend :)");
    }
    else
    {
        printf("\n    The password is Worng ^_^");
        printf("\n    You still have one times");

        printf("Try again..");
        scanf("%d",&password);

        if(password <= 2001 && password >= 2001)
        {
            printf("\n     The password is correct :)");
            printf("\n     Hello my close friend :)");
        }
        else
        {

            printf("\n          wrong ^_^");
            printf("\n          wrong ^_^");
            printf("\n        wrong ^_^");
            printf("\n        wrong ^_^");
            printf("\n        wrong ^_^");
            printf("\n        wrong ^_^");
            printf("\n        wrong ^_^");
            printf("\n        wrong ^_^");
            printf("\n        wrong ^_^");
        }
    }


    }
    scanf("\n%d", fakeInout);
 return 0;

}



