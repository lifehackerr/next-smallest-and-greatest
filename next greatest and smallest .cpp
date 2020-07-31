#include <bits/stdc++.h>
using namespace std;
void nextSmallest(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    for(int i=1;i<n;i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(!s.empty() && arr[i]<s.top()){
            cout<<s.top()<<"->"<<arr[i]<<endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while(!s.empty()){
        cout<<s.top()<<"->"<<-1<<endl;
        s.pop();
    }
}
void nextGreatest(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    for(int i=1;i<n;i++){
        if(s.empty()){
            s.push(arr[i]);
            continue;
        }
        while(s.empty() == false && arr[i]>s.top()){
            cout<<s.top()<<"->"<<arr[i]<<endl;
            s.pop();
        }
        s.push(arr[i]);
    }
    while(!s.empty()){
        cout<<s.top()<<"->"<<-1<<endl;
        s.pop();
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"next greatest elements for every individual elements :"<<endl;
    nextGreatest(arr,n);
    cout<<endl;
    cout<<"next smallest elements for every individual elements :"<<endl;

    nextSmallest(arr,n);
}
