#include <myhead.h>

int main(){
    //分别输出标准输入、输出、出错文件指针对应的文件描述符
    //test
    printf("stdin->_fileno = %d\n",stdin->_fileno); 
    printf("stdout->_fileno = %d\n",stdout->_fileno); 
    printf("stderr->_fileno = %d\n",stderr->_fileno); 
    return 0;
}
