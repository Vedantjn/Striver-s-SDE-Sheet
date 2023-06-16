#include<bits/stdc++.h>

string build(string num){
    int frq = 1;
    char curNum = num[0];
    string result = "";

    for(int i = 1; i < num.length(); i++){
        if(curNum == num[i]){
            frq++;
        }
        else{
            char freq = (char)('0'+frq);
            result.push_back(freq);
            result.push_back(curNum);

            curNum = num[i];
            frq = 1;
        }
    }

    char freq = (char)('0'+freq);
    result.push_back(freq);
    result.push_back(curNum);

    return result;
}

string countAndSay(int n){
    string initial = "1";

    for(int i = 0; i < n-1; i++){
        initial = build(initial);
    }

    return initial;
}