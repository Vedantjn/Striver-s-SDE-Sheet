string longestCommonPrefix(vector<string>&arr, int n){
    // For traversing all characters of first string
    string ans = "";
    for(int i = 0; i < arr[0].length(); i++){
        char ch = arr[0][i];
        bool match = true;

        // For comparing ch with rest of the strings
        for(int j = 0; i < n; j++){
            // Not match
            if(arr[j].size() < i || ch != arr[j][i]){
                match = false;
                break;
            }
        }
        if(match == false){
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}