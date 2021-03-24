#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    short int bulls = 0, cows = 0;
    cin>>a>>b;
    for(int i = 0; i<4; ++i){
        for(int j = 0; j<4; ++j){
            if((a[i] == b[j])&&(i==j)){
                bulls++;
            } else if((a[i] == b[j])&&(i!=j)){
                cows++;
            }
        }
    }
    cout<<bulls<<' '<<cows<<endl;

    return 0;
}