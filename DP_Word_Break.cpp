// Recursion

int f(int i, string s, vector<string>&wordDict){
    if(i == s.size())
        return 1;

    string temp;

    for(int j = 1; j < s.size(); j++){
        temp += s[j];
        if(wordDict.find(temp) != wordDict.end()){
            if(j+1, s, wordDict){
                return 1;
            }
        }
    }
    return 0;
}

bool wordBreak(string s, vector<string>&wordDict){
    set<string>st;
    for(auto i : wordDict)
        st.inesrt(i);

    return f(0, s, st);
}

//======================================================================================================================================================================================

// Memoisation

int dp[301];
int f(int i, string s, vector<string>&wordDict){
    if(i == s.size())
        return 1;
    if(dp[i] != -1) return dp[i];

    string temp;

    for(int j = 1; j < s.size(); j++){
        temp += s[j];
        if(wordDict.find(temp) != wordDict.end()){
            if(j+1, s, wordDict){
                return dp[i] = 1;
            }
        }
    }
    return dp[i] = 0;
}

bool wordBreak(string s, vector<string>&wordDict){
    set<string>st;
    memset(dp, -1, sizeof(dp))
    for(auto i : wordDict)
        st.inesrt(i);

    return f(0, s, st);
}

//======================================================================================================================================================================================

// Tabulation

bool wordBreak(string s, vector<string>&wordDict){
    set<string>st;
    for(int i = s.size()-1; i >= 0; i--){
        string temp;
        for(int j = i; j < n; j++){
            temp += s[j];
            if(st.find(temp)!= st.end())
                dp[i] = (dp[i] | dp[j]);
        }
        dp[i] = 0;
    }
    return dp[0];
}

















