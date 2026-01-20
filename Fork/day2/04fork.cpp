#include <myhead.h>

int main(int argc, char const *argv[])
{
    pid_t pid=-1;
    
    pid = fork();  
    //判断Pid
    if(pid > 0)
    {
        while(1)
        {
        printf("我是父进程\n");
        sleep(1);
        }
    }else if(pid == 0)
    {
        //子进程
        while(1)
        {
        printf("我是子进程\n");
        sleep(1);
        }
    }else
    {
        perror("fork error");
        return -1;
    }

    while(1);

    return 0;
}
