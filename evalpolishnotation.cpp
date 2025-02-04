class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;
        for(auto x : tokens){
            if(x == "+" || x == "-" || x == "*" || x == "/"){
                int number2 = numbers.top(); numbers.pop();
                int number1 = numbers.top(); numbers.pop();
                if (x == "+")
                    numbers.push(number1 + number2);
                else if (x == "-")
                    numbers.push(number1 - number2);
                else if (x == "*")
                    numbers.push(number1 * number2);
                else if (x == "/")
                    numbers.push(number1 / number2);
            }
            else
                numbers.push(stoi(x));
        }
        return numbers.top();
    }
};