#include <iostream>
#include <vector>

using namespace std;

int main(){
    short n;
    cin>>n;
    short buf;
    short sum = 0;
    short minimal = 10001, min_pos = -1;
    short maximal = -10001, max_pos = -1;
    int composition = 1;
    vector<short int> v;
    
    for(int i = 0; i<n; ++i){
        cin>>buf;
        v.push_back(buf);
        if(buf>0){
            sum+=buf;
        }
        if(buf>maximal){
            maximal = buf;
            max_pos = i;
        } 
        if (buf<minimal){
            minimal = buf;
            min_pos = i;
        }
    }
    if(min_pos>max_pos){
        short tmp = min_pos;
        min_pos = max_pos;
        max_pos = tmp;
    }
    for(int i = min_pos+1; i<max_pos; ++i){
        composition*=v[i];
    }
    cout<<sum<<' '<<composition<<endl;
    return 0;
}