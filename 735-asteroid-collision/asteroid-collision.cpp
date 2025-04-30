class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
            int n = asteroids.size();
    stack<int> st;

    for (int i = 0; i < n; i++) {
        bool destroyed = false;

        while (!st.empty() && st.top() > 0 && asteroids[i] < 0) {
            if (abs(asteroids[i]) > abs(st.top())) {
                st.pop();
            }
            else if (abs(asteroids[i]) < abs(st.top())) {
                destroyed = true;
                break;
            }
            else { // equal magnitude
                st.pop();
                destroyed = true;
                break;
            }
        }

        if (!destroyed) {
            st.push(asteroids[i]);
        }
    }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};