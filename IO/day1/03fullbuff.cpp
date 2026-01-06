#include <stdio.h>

int main(){
    FILE *fp=NULL;
    if((fp=fopen("./test.txt","r+"))==NULL)
    {
        perror("error");
        return -1;
    }
    //与行缓存的区别是 当遇到换行的时候并不会刷新全缓存
    fputc('Hello world\n',fp);
    while(1);
    
    return 0;
}