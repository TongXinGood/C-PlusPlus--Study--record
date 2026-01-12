#include <myhead.h>

int main(int argc, char const *argv[])
{
    int fd = -1;
    if((fd = open("./test.txt",O_WRONLY|O_CREAT,0644))== -1)
    {
        perror("error");
        return -1;
    }
    printf("open success fd = %d\n",fd);

    char w[128]="hello world";
    write(fd,w,strlen(w));
    close(fd);

    if((fd=open("./test.txt",O_RDONLY|O_CREAT,0644))== -1)
    {
        perror("ERROR");
        return -1;
    }
    printf("open success fd = %d\n",fd);

    char w[5]="";
    int res=read(fd,w,sizeof(w));

    write(1,w,res);
    close(fd);
    
    return 0;
}
