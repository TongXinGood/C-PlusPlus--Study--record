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
    close(fd);
    
    return 0;
}
