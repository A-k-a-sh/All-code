#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;
int main()
{
    FILE *file1,*file2;
    file1=fopen("input.txt","r");
    file2=fopen("output.txt","w");
    int t;
    map<pair<string,string>,vector<int >>m;
    fscanf(file1,"%d",&t);
    while(t--){
       char s1[100],s2[100];//can't use string data type here cz we're using fscanf
       int a;
       fscanf(file1," %s %s%d\n",s1,s2,&a);
       while(a--){
        int x;
        fscanf(file1,"%d",&x);
       m[{s1,s2}].push_back(x);
       }
    }
    for(auto &pr:m){
        auto &name=pr.first;
        auto &vec=pr.second;
        fprintf(file2,"%s %s %d\n",name.first.c_str(),name.second.c_str(),vec.size());
        //to print string correctly this ^ is the format
        for(auto &v:vec)fprintf(file2,"%d ",v);
        fprintf(file2, "\n");
    }
    fclose(file1);
    fclose(file2);
    return 0;


}
