class Solution {
void backtrack(vector<string>&output,string &answer,vector<string>&letters,string &digits,int idx){
    if(idx>=digits.size()){
        output.push_back(answer);
        return;
    }
    string ltrs=letters[digits[idx]-'0'];
    for(int l : ltrs){
        answer.push_back(l);
        backtrack(output,answer,letters,digits,idx+1);
        answer.pop_back();
    }
    
}
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string>output;
        string ans;
        vector<string>letters{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        backtrack(output,ans,letters,digits,index);
        return output;
    }
};