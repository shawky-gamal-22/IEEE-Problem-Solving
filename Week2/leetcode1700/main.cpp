class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> s;
        queue<int> q;

        for (auto i : students) {
            q.push(i);
        }

        int siz = sandwiches.size();
        for (int i = siz - 1; i >= 0; i--) {
            s.push(sandwiches[i]);
        }

        int counter = 0;
        while (!q.empty()) {
            if (q.front() == s.top()) {
                q.pop();
                s.pop();
                counter = 0;
            }
            else {
                counter++;
                int x = q.front();
                q.pop();
                q.push(x);
                if (counter == q.size()) {
                    return counter;
                }
            }
        }

        return counter;
    }
};
