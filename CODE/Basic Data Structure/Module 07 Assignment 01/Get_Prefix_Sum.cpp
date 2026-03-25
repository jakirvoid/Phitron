#include<bits/stdc++.h>
using namespace std;

long long int* prefix_sum(long long int a[],int n){
    long long int* ar = new long long int[n];

    ar[0]=a[0];
    for(int i=1;i<n;i++){
        ar[i] = ar[i-1]+a[i];
    }
    return ar;
}

int main(){

    int n;
    cin >> n;

    long long int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    long long int* p = prefix_sum(a,n);
    reverse(p,p+n);

    for(int i=0;i<n;i++){
        cout << p[i] <<" ";
    }


    return 0;
}