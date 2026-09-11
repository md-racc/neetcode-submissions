class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> rpn;
        unordered_set<string> operands = {"+","-","/","*"};
        int out{0};
        for (string c : tokens){
            if (!operands.contains(c)){
                rpn.push(stoi(c));
            } else {
                if (c == "+"){
                    int num1 = rpn.top();
                    rpn.pop();
                    int num2 = rpn.top();
                    rpn.pop();
                    rpn.push(num1 + num2);
                } else if (c == "-"){
                    int num1 = rpn.top();
                    rpn.pop();
                    int num2 = rpn.top();
                    rpn.pop();
                    rpn.push(num2-num1);
                } else if (c == "*"){
                    int num1 = rpn.top();
                    rpn.pop();
                    int num2 = rpn.top();
                    rpn.pop();
                    rpn.push(num1 * num2);
                } else if (c == "/") {
                    int num1 = rpn.top();
                    rpn.pop();
                    int num2 = rpn.top();
                    rpn.pop();
                    rpn.push(num2/num1);
                }
            }
        }
        return rpn.top();
    }
};
