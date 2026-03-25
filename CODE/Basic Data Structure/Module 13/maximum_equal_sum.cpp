#include<bits/stdc++.h>
using namespace std;

int getSum(stack<int>st){
    int sum = 0;
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
}

class Solution{
    public:
        int insert_at_bottom(stack<int> st1,stack<int> st2,stack<int> st3){
            int sum1 = getSum(st1);
            int sum2 = getSum(st2);
            int sum3 = getSum(st3);

            while(true){
                if(sum1 == sum2 && sum2 == sum3){
                    break;
                }            
                if(sum1 >= sum2 && sum1 >= sum3){
                    sum1 -= st1.top();
                    st1.pop();
                }
                else if(sum2 >= sum1 && sum2 >= sum3){
                    sum2 -= st2.top();
                    st2.pop();
                }
                else{
                    sum3 -= st3.top();
                    st3.pop();
                }
            }
            return sum1;
        }

};

int main(){

    Solution ss;

    stack<int> myStack;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int val;
        cin >> val;
        myStack.push(val);
    }
    
    


    return 0;
}