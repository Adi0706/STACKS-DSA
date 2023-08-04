
#include<stack>
class Solution {
public:
    int minOperations(const std::vector<std::string>& logs) {
        std::stack<std::string> folders;
        for (int i = 0; i < logs.size(); i++) {
            if (logs[i] == "../") {
                if (!folders.empty()) {
                    folders.pop();
                }
            } else if (logs[i] == "./") {
                // do nothing
                continue;
            } else {
                folders.push(logs[i]);
            }
        }
        return folders.size();
    }

};