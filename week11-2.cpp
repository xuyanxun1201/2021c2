#include <bits/stdc++.h>

using namespace std;
char line[100];

int main()
{
    int T;
    FILE *fin=fopen("hardwood.txt","r");
    fscanf(fin,"%d",&T);
    cout<<"�AŪ��FT: "<<T<<endl;
    while(fgets(line,100,fin)){//fgets �|�O�d����, gets �h���|.
        printf("Ū��F= %s =\n",line);
    }
}
