#include <iostream>

using namespace std;

int grade[10]={9,8,7,1,2,3,6,4,5,0};
int main()
{
    int n=10;
    while(1){
        int change=0;
        for(int j=0;j<n-1;j++){
            if(grade[j]>grade[j+1]){
                change++;
                int temp=grade[j];
                grade[j]=grade[j+1];
                grade[j+1]=temp;
            }
        }
        if(change==0)break;
        for(int i=0;i<10;i++)cout<<grade[i]<<' ';
        cout<<endl;
    }
    return 0;
}
