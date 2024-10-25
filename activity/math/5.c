#include <stdio.h>

int main() {
    int mynum = 10;
    int yournum = 30;

    if(yournum % mynum == 3)
    {
        yournum = 3;
        mynum = 1;
    }
    else if(yournum % mynum == 2)
    {
        yournum = 2;
        mynum = 2;
    } 
    else 
    {
        yournum = 1;
        mynum = 3;
    }
    printf("%d %d", mynum ,yournum);
    return 0;
}
