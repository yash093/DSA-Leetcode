class Solution {
public:
    int firstBadVersion(int n) {
//         s = start index, e = end index
        int s = 1,e = n;
        while(s < e){
            int m = s + (e-s)/2;
            if(isBadVersion(m) == true){
                e = m;
            }else{
                s = m + 1;
            }
        }
        return s;
    }
};