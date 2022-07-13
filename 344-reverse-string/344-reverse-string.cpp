class Solution {
public:
    void reverseString(vector<char>& string) {
        int s = 0;
        int e = string.size()-1;
    while(s<e){
        swap(string[s++],string[e--]);
    }
             
    }
};