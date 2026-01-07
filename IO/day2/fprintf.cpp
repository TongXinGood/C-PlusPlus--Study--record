#include <stdio.h>

int main(){
    //向标准输出文件指针中写入数据
    fprintf(stdout,"%d %s %lf\n",520,"I love you",3.14);
    //从标准输入中读取数据到程序中
    int num;
    fscanf(stdin,"%d",&num);
    printf("num = %d\n",num);

    //对外部文件进行格式化书写
    FILE *fp=NULL;
    if((fp=fopen("./test.txt","w"))==NULL)
    {
        perror("error");
        return -1;
    }
    fprintf(fp,"%s %d","hello world",1314);
    fclose(fp);

    if((fp=fopen("./test.txt","r"))==NULL)
    {
        perror("error");
        return -1;
    }

    char t[20]="";
    int a=0;
    fscanf(fp,"%s %d",t,&a);
    fclose(fp);

    printf("test = %s,a = %d\n",t,a);

    return 0;
}