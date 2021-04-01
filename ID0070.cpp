#include <iostream>
#include <string>

using namespace std;

int main(){
    string input = "abcdabcd"; cin>>input;
    int power = -2; cin>>power;
    if(power>0){
        string tmp = input;
        for(int i = 1; i<power; ++i){
            if(input.size()>1023){
                cout<<input.substr(0,1023)<<endl;
                return 0;
            } else {
                input+=tmp;
            }
        }
        cout<<input<<endl;
        return 0;
    } else{ // *
        power -= 2*power;
        //int size = static_cast<int>(input.size())/power;
        if(input.size() % power > 0){
            cout  << "NO SOLUTION";
            return 0;
        }
        else{
            int k = input.size()/power;
            int k1 = k;
            while(input.size() > k){
                if(input.substr(0,k1) == input.substr(k,k1))
                    k+=k;
                else{
                    cout << "NO SOLUTION";
                    return 0;
                }
            }
            cout << input.substr(0,k1);
            return 0;
        }
    }
    return 0;
}
/*

Далее предложено решение, которое следует вставить с места *,
но оно не проходит 12 тест. По сути оно копирует смысл функции substr
else{
        power -= 2*power;
        int size = static_cast<int>(input.size())/power;
        if(input.size()%power == 0){
            if(size > 0){
                string tmp;
                for(int i = 0; i<size; ++i){
                    tmp += input[i];
                }

                for(int k = 1; ; ++k){
                    for(int i = k*size - size; i<size*k; ++i){
                        //cout<<tmp[i-(k*size - size)]<<'\t'<<input[i]<<endl;
                        if(tmp[i-(k*size - size)]!=input[i]){
                            cout<<"NO SOLUTION";
                            return 0;
                        }
                    }
                    if(size*(k+1)>static_cast<int>(input.size())){
                        break;
                    }
                }
                
                cout<<tmp;
            } else {
                cout<<"NO SOLUTION";
            }
        } else {
                cout<<"NO SOLUTION";
        }
    }




*/