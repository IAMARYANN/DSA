class Solution {
public:
    string reverseWords(string s) {
       int n = s.size();
       string temp;
       int i = 0;
       while (i < n && s[i] == ' ') i++;

    while (i < n) {
        // Append non-space characters
        if (s[i] != ' ') {
            temp += s[i];
        }
        // Append a single space between words
        else if (!temp.empty() && temp.back() != ' ') {
            temp += ' ';
        }
        i++;
    }

    // Remove trailing space if present
    if (!temp.empty() && temp.back() == ' ') {
        temp.pop_back();
    }

    s = temp;
    n = s.size();

    // Step 2: Reverse the whole string
    int st = 0, e = n - 1;
    while (st <= e) {
        swap(s[st], s[e]);
        st++;
        e--;
    }

    // Step 3: Reverse each word
    int j = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || s[i] == ' ') {
            reverse(s.begin() + j, s.begin() + i);
            j = i + 1;
        }
    }

    return s;
    }
};