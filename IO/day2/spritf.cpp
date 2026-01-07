#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    char buf[10]="";
    //sprintf(buf,"%s %d","hello",123456789);
    snprintf(buf,sizeof(buf),"%s %d","hello",123456789);
    printf("buf = %s\n",buf);
    return 0;
}
