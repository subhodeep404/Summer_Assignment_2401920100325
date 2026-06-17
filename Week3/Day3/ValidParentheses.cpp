class Solution {
public:
    bool isValid(string s) {
        stack<char> st1;
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st1.push(ch);
            }
            else{
                if(st1.empty()) return false;
                char top=st1.top();
                st1.pop();
                if(ch==')' && top!='(') return false;
                if(ch=='}' && top!='{') return false;
                if(ch==']' && top!='[') return false;
            }
        }
        return(st1.empty());
    }
};