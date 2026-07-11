class Solution {
public:
int cnt(int n) {
        int count =0;
        while(n){
            n = n&(n-1);
            count++;
        }
        return count;

    }
    vector<int> countBits(int n) {
        vector<int>ans;
           for( int i =0; i<=n;i++){
              int dingu = cnt( i);
              ans.push_back( dingu);
            
           }
           return ans;
        
    }
};
