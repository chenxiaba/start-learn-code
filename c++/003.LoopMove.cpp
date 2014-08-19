#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <iomanip>

using namespace std;

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

    cout << "Please enter the move array(len less then 99):" << endl;
    cin >> setw(99) >>test;
    
    int steps=0;
    cout << "Please enter the move steps:" << endl;
    cin >> steps;
  
    cout << "Your intput is:\nMove array=" << test \
        << "\nMove Steps=" << steps  << endl << endl;
    
    LoopMove(test, steps);

    cout << "After moved, result is:" << test << endl;
}

