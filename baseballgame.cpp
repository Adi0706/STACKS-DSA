class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int sum = 0;

        for (const string& op : operations) {
            if (op == "C") {
                if (!s.empty()) {
                    sum -= s.top();
                    s.pop();
                }
            } else if (op == "D") {
                if (!s.empty()) {
                    int last = s.top();
                    s.push(last * 2);
                    sum += last * 2;
                }
            } else if (op == "+") {
                if (s.size() >= 2) {
                    int last1 = s.top();
                    s.pop();
                    int last2 = s.top();
                    int newScore = last1 + last2;
                    s.push(last1);
                    s.push(newScore);
                    sum += newScore;
                }
            } else {
                int score = stoi(op);
                s.push(score);
                sum += score;
            }
        }

        return sum;
    }
};
