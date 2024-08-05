#include <bits/stdc++.h>
using namespace std;

// Print linearly from 1 to N

void f(int i,int N) {
    if(i>N)
    return;
    cout<<i<<endl;
    f(i+1,N);
}

int main() {
    int N;
    cin>>N;
    f(1,N);
}