#include<stack> 
class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stk;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='{'||s[i]=='('||s[i]=='['||s[i]=='}'||s[i]==')'||s[i]==']'){
                if(s[i]=='{'||s[i]=='('||s[i]=='['){
                    stk.push(s[i]);
                }else {
                    if(stk.empty()){
                        return false;
                    }else if (stk.top() == '('&&s[i]==')'||stk.top() == '['&&s[i]==']'||stk.top() == '{'&&s[i]=='}'){
                        stk.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        return stk.empty()?true:false;
    }
};
