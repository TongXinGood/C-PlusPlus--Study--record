#include <stdio.h>

int main(){
    /*
    //验证缓冲区如果没有达到刷新时机，则不会将数据进行刷新
    printf("hello world\n");//理论上在终端上面打印一个hello world，但是缓冲区没有到达刷新时机，就不会输出数据

    perror("error");//没有缓冲区直接输出

    while(1);
    */
    /*2.当程序结束，会刷新行缓存区
    printf("hello world");
    ps:当遇到换行时，会刷新行缓存
    */
    
    /*4当输入输出发生切换时，也会刷新行缓存
    int num;
    printf("请输入：");
    scanf("%d",&num);
    */
    
    /*5当关闭行缓存对应的文件指针时，也会刷新行缓存
    printf("hello world");
    fclose(stdout);
    while(1);
    */

    /*6.使用 fflush 函数手动刷新缓存区的时候，行缓存会被刷新
    printf("Hello world");
    fflush(stdout);
    while(1);
    */
    
    //7.缓冲区满了以后，会刷新行缓存，行缓存大小：1024
    for(int i=0;i<1025;i++)
    {
        printf("A");
    }
    while(1);
    
    return 0;
}