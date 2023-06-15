#include<iostream>
using namespace std;

int ImplementATOI(string s){
    int sign = 0;
    int out = 0;
    for(int i = 0; i < s.length(); i++){
        if(i == 0 && s[i] == 45){
            sign = 1;
            continue;
        }
        if(s[i] >= '0' && s[i] <= '9'){
            if(i == 0){
                out = s[i] - 48;
            }
            else{
                out = out*10 + (s[i] - 48);
            }
        }
        else{
            return -1;
        }
    }
    if(sign == 1){
        out = 0 - out;
    }

    return out;
}

int main(){
    string s = "vedant";
    cout << ImplementATOI(s) << endl;
    return 0;
}