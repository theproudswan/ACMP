#include <iostream>

using namespace std;

int main(){
    short int n;
    cin>>n;
    bool **ways = new bool *[n];
    short int k = 0;
    for(char i = 0; i<n; ++i){
        ways[i] = new bool [n];
        for(char j = 0; j<n; ++j){
            cin>>ways[i][j];
            if((i!=j)&&(ways[i][j] == 1)){
                k++;
            }
        }
    }
    cout<<k/2<<endl;
    return 0;
}