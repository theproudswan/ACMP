#include <iostream>
#include <vector>

using namespace std;

int main(){
    char r[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    char inp;
    cin>>inp;
    if(inp == 'm'){
        cout<<'q'<<endl;
        return 0;
    }

    for(int i = 0; i<26; ++i){
        if(inp == r[i]){
            cout<<r[i+1]<<endl;
            return 0;
        }
    }
    return 0;
}