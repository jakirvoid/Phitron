#include<bits/stdc++.h>
using namespace std;

int main(){

    // string s;
    // while(getline(cin,s)){
    
    // sort(s.begin(),s.end());
    
    // cout<<s<<endl;

    // }
    char s[100001];
    while(cin.getline(s,100001)){

    int len = strlen(s);
    char a[100001];
    int idx =0;
    for(int i=0;i<len;i++){
        if(s[i]!=' '){
            a[idx++]=s[i];
        }
    }

    sort(a,a+idx);

    a[idx]='\0';

    cout<< a<< endl;
}
    
    return 0;
}
