//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string str)
{
    // your code here
    unordered_map<char,int> mp;
    int ans = 0;
    int s = 0,e = 0;
    
    while(e < str.length()){
        mp[str[e]]++;
        if(mp.size() < e-s+1){
            mp[str[s]]--;
            if(mp[str[s]] == 0){
                mp.erase(str[s]);
            }
            s++;
        }
        ans = max(ans,e-s+1);
        e++;
    }
    return ans;
}