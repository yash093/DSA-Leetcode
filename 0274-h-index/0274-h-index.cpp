class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int i = 0, n = citations.size();
        while(i < n && n-i > citations[i]){
            i++;
        }
        return n-i;
    }
};