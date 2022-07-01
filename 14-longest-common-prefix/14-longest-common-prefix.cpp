class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        
        if(strs.size()==1){        
            return strs[0];
        }
        if(strs.size()==0){
            return "";
        }
        
        for(int y=0;y<strs[0].size();y++){    
            int checkChar=strs[0][y];        
            for(int i=1;i<strs.size();i++){  
                if(strs[i][y]!=checkChar){     
                    return ans;                
                } 
                if(i==strs.size()-1) {          
                    ans.push_back(checkChar);   
                }
            }
        }
        return ans; 
    }
};