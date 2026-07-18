class Solution {
public:

    string encode(vector<string>& strs) {
        string encoder = "";
        for(string s: strs){
            encoder += to_string(s.size()) + "#"+s;
        }
        return encoder;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while(i<s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            j++;
            ans.push_back(s.substr(j,len));
            i = len+ j;
        }
        return ans;
    }
};
