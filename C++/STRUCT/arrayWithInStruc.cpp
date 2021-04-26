#include<bits/stdc++.h>
using namespace std;
struct school{

    char name[20];
    int roll;
    int submarks[4];
    
};
int main(){
    int a;
    cout<<"enter the no of student : ";
    cin>>a;
    struct school cone[3];
    for(int i=0;i<a;i++){
        cout<<"enter the name : ";
        scanf("%s",cone[i].name);
        cout<<"enter the Roll : ";
        scanf("%d",&cone[i].roll);
        cout<<"enter the Subjects Marks : ";
        for(int j=0;j<4;j++){
            scanf("%d",&cone[i].submarks[j]);
        }

    }
    
    for(int i=0;i<a;i++){
        cout<<"\n";
        cout<<"\n";
        cout<<"The info of student of cone is ---------"<<endl;
        printf("Name : %s ,Roll : %d \n Subjects Marks: ",cone[i].name,cone[i].roll);
        for(int j=0;j<4;j++){
            printf("%d ",cone[i].submarks[j]);
        }
        cout<<"\n";
    }



}