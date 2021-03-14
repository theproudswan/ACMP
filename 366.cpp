    #include <iostream>
    #include <vector>
    #include <stdlib.h>
     
    using namespace std;
     
    int n, s;
    vector<int> x(25);
    vector<char> sign(25);


    void out();
     
    void recursion(int curSum, int curIndex);
    
     
    int main(){
        cin>>n>>s;
        for (int i=0;i<n;i++)
            cin>>x[i];
        recursion(x[0],1);
        cout<<"No solution";
        return 0;
    }

void out()
    {
        cout<<x[0];
        for (int i=1;i<n;i++)
            cout<<sign[i]<<x[i];
        cout<<"="<<s;
     
        exit(0);
    }

    void recursion(int curSum, int curIndex)
    {
        if (curSum == s) out(); // ответ найден
        if (curIndex == n) return; // терминальное условие
     
        sign[curIndex] = '+';
        recursion(curSum + x[curIndex], curIndex+1);
       
        sign[curIndex] = '-';
        recursion(curSum - x[curIndex], curIndex+1);
    }