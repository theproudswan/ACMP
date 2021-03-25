#include <iostream>
#include <cmath>

using namespace std;

void simple(int n, int& k){
    for (int i = 2; i <= sqrt(n); ++i){
        if(n%i == 0){
            return;
        }
    }
    ++k;
    return;
}

int main(){
    int n, k = 0;
    cin>>n;

    for(int i = n+1; i<2*n; ++i){
        simple(i, k);
    }

    cout<<k<<endl;
    return 0;
}