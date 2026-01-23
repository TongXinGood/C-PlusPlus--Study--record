#include <myhead.h>

int main(int argc, char const *argv[])
{
    pid_t pid = -1;

    pid = fork();

    if(pid > 0)
    {
          while(1)
        {
            printf("我是子进程");
            sleep(1);
        }
    }else if(pid == 0)
    {
      
        sleep(5);
        exit(EXIT_SUCCESS);
    }else
    {
        perror("error");
        return -1;
    }
    return 0;
}