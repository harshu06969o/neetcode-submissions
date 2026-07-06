class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {\
    vector<vector<string>>ans;
    vector<int>visited( strs.size(),0);
         int vecsize = strs.size();
         for( int i =0;i<vecsize;i++){
            
            vector<string>temp;
            if(!visited[i]){
                 visited[i]=1;
            temp.push_back( strs[i]);}
            for ( int j =i;j<vecsize;j++){
                 if( !visited[j]){
                    string let = strs[j];
                    sort( let.begin(),let.end());
                    sort( strs[i].begin(),strs[i].end());
                    if( strs[i]==let){
                        temp.push_back( strs[j]);
                        visited[j]=1;
                    }
                 }



            }
             if( !temp.empty())
            ans.push_back( temp);

         }
         return  ans;

        
    }
};
