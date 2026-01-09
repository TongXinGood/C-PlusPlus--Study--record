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
    if((fp=fopen("./test.txt","w"))==NULL)
    {
        perror("error");
        return -1;
    }
    Stu s[3]={ {"张三",18,98} , {"李四",20,88} , {"王五",16,95} };
    //将三个学生信息写入文件当中
    fwrite(s,sizeof(Stu),3,fp);
    fclose(fp);

    if((fp=fopen("./test.txt","r"))==NULL)
    {
        perror("error");
        return -1;
    }
    Stu temp;
    //光标移动读取下个人的内容
    fread(&temp,sizeof(Stu),1,fp);
    fread(&temp,sizeof(Stu),1,fp);
    fread(&temp,sizeof(Stu),1,fp);

    cout<<temp.name<<" "<<temp.age<<" "<<temp.score<<endl;
    fclose(fp);
    return 0;
}