#include <iostream>
#include <cmath>

using namespace std;

bool f = 0;

void simple(int n){
    for (int i = 2; i <= sqrt(n); ++i){
        if(n%i == 0){
            return;
        }
    }
    cout<<n<<endl;
    f = 1;
    return;
}

int main(){
    int m, n;
    cin>>m>>n;
    for (int i = min(m, n); i<=max(m, n); ++i) simple(i);
    if(!f) cout<<"Absent";
    return 0;
}