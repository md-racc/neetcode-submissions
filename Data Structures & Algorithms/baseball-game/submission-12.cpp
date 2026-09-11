class Solution {
public:
    int calPoints(vector<string>& operations) {
        int total{0};
        stack<int> points;
        for (string& s: operations){
            if (s != "+" && s != "D" && s != "C"){
                points.push(stoi(s));
            } else if (s == "+") {
                int num1 = points.top();
                points.pop();
                int num2 = points.top();
                points.push(num1);
                points.push(num1 + num2);
            } else if (s == "D"){
                int num1 = points.top();

                points.push(num1*2);
            } else if (s == "C"){
                points.pop();
            }
        }
        while (!points.empty()){
            total += points.top();
            points.pop();
        }
        return total;
    }
};