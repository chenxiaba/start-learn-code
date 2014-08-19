#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
**@Des  : Loop move a char array with steps
*/
void LoopMove(char *pstr, int steps)
{
    int ssize = strlen(pstr);
    int real = steps % ssize;

    //No need to move
    if (0 == real ) return;

    int n = ssize - real;

    char *temp=NULL;
    temp = (char *) malloc(real+1);

    //Backup data
    memcpy(temp, pstr+n, real);

    //Move data by seq
    memcpy(pstr + real, pstr, n);
    
    //Move tail to header
    memcpy(pstr, temp, real);    
  
    free(temp);
}

int main(int argc, char**argv)
{
    char test[100]="";

    printf("Please enter the move array(len less then 99):\n");
    scanf("%99s", test);
    
    int steps=0;
    printf("Please enter the move steps:\n");
    scanf("%d", &steps);
  
    printf("Your intput is:\nMove array=%s\nMove Steps=%d\n\n", test, steps);
    
    LoopMove(test, steps);

    printf("After moved, result is:%s\n", test);
}

