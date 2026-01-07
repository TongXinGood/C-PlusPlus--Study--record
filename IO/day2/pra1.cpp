#include <stdio.h>
#include <iostream>
using namespace std;

void mainmenu(){
    cout<<"-------------"<<endl;
    cout<<"1.登录"<<endl;
    cout<<"2.注册"<<endl;
    cout<<"0.退出"<<endl;    
}

void login(){
    
}

void registe(){
    FILE *fp=NULL;
    if((fp=fopen("./user.txt","w"))==NULL)
    {
        perror("error");
    }
    char a[10]="";
    cout<<"请输入用户名: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int num;
    cout<<"请输入密码: ";
    cin>>num;
    fprintf(fp,"%s %d",a,num);
    fclose(fp);

}

int main(){
    int num;
    while(1){
        mainmenu();
        cin>>num;
        switch (num)
        {
            case 1:login();break;
            case 2:registe();break;
            case 0:return 0;
            default:cout<<"Error Number"<<endl;
        }
    }

    return 0;
}