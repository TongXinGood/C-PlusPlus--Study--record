#include <stdio.h>


int main(){
    //如果缓冲区没有被使用，求出大小为0，只有至少被用了一次后，缓冲区大小就被分配了
    printf("输出行缓存的大小：%d\n",stdout->_IO_buf_end - stdout->_IO_buf_base);//输出为0
    printf("输出行缓存的大小：%d\n",stdout->_IO_buf_end - stdout->_IO_buf_base);//输出为1024
    //同理标准输入只有在使用过后，才会分配内存
    printf("输出行缓存的大小：%d\n",stdin->_IO_buf_end - stdin->_IO_buf_base);
    int num;
    scanf("%d",&num);
    printf("输出行缓存的大小：%d\n",stdin->_IO_buf_end - stdin->_IO_buf_base);//输出1024

    //全缓存
    FILE *fp=NULL;
    if((fp= fopen("./test.txt","r"))==NULL)
    {
        perror("fopen error");
        return -1;
    }
    //未使用大小为0
    printf("输出全缓存的大小：%d\n",fp->_IO_buf_end - fp->_IO_buf_base);
    //使用一次过后预计大小为4096
    fgetc(fp);
    printf("输出全缓存的大小：%d\n",fp->_IO_buf_end - fp->_IO_buf_base);
    fclose(fp);

    //不缓存大小为0
    //未使用的不缓存
    printf("输出不缓存的大小：%d\n",stderr->_IO_buf_end - stderr->_IO_buf_base);
    //使用过后
    perror("error");
    printf("输出不缓存的大小：%d\n",stderr->_IO_buf_end - stderr->_IO_buf_base);
    return 0;
}