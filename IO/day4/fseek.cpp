#include <iostream>
#include <stdio.h>
using namespace std;

class Stu{
public:
    char name[20];
    int age;
    int score;
};

int main(){
    FILE *fp=NULL;
    if((fp=fopen("./test.txt","w+"))==NULL)
    {
        perror("error");
        return -1;
    }
    Stu s[3]={ {"张三",18,98} , {"李四",20,88} , {"王五",16,95} };
    //将三个学生信息写入文件当中
    fwrite(s,sizeof(Stu),3,fp);
    //求出文件的大小
    printf("当前的文件大小为：%ld\n",ftell(fp));
    //将光标移动到开头的位置
    //fseek(fp,0,SEEK_SET);
    
    //将光标直接定位到第二个学生的位置
    fseek(fp,sizeof(Stu),SEEK_SET);//将光标从开头后移动一个学生的内容

    Stu temp;
    //光标移动读取下个人的内容
    fread(&temp,sizeof(Stu),1,fp);

    cout<<temp.name<<" "<<temp.age<<" "<<temp.score<<endl;
    fclose(fp);
    return 0;
}