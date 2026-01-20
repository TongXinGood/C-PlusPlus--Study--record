#include <myhead.h>

int main(int argc, char const *argv[])
{
    pid_t pid = -1;

    pid = fork();

    if(pid > 0)
    {
        printf("self pid=%d, child pid =%d, parent pid =%d\n",getpid(),pid,getppid());
    }else if(pid == 0)
    {
        printf("self pid=%d,parent pid =%d\n",getpid(),getppid());
        //exit(EXIT_SUCCESS); //刷新缓冲区并退出进程
        // _exit(EXIT_SUCCESS); //不刷新缓冲区
    }else
    {
        perror("error");
        return -1;
    }
    return 0;
}
