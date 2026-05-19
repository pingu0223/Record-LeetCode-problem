#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    string cut="";//初始化一个字符串来记录一下要右旋的量
    string s;
    cin>>n>>s;
    int length=s.size();
    int i,j;
    for(i=length-n;i<length;i++){
        cut+=s[i];    //记录右旋值，注意i是length-n
    }
    i=length-n-1;j=length-1;
    while(i>=0){
        s[j]=s[i];//先从后往前挪动字符串
        i--;
        j--;
    }
    i=cut.size()-1;
    while(j>=0){
        s[j]=cut[i];//再把前面空缺的部分通过cut部分的拷贝补充上
        j--;i--;
    }
    cout<<s;
}
