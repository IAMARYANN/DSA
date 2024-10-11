class Solution {
public:
    int romanToInt(string s) 
    {
        unordered_map<char, int> m;
m.insert({'I', 1});
m.insert({'V', 5});
m.insert({'X', 10});
m.insert({'L', 50});
m.insert({'C', 100});
m.insert({'D', 500});
m.insert({'M', 1000});

int value = 0;
int check = 0;

for (int i = 0; i < s.size(); i++) {
    int a = m.find(s[i])->second;

    // Ensure i + 1 is within bounds and correct precedence for the conditions
    if (i + 1 < s.size() && 
        ((s[i] == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')) || 
         (s[i] == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')) || 
         (s[i] == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')))) {
        
        auto a_next = m.find(s[i+1]);
        auto a_current = m.find(s[i]);
        value += a_next->second - a_current->second;
        
        cout << "Special case: value = " << value << ", a_next = " << a_next->second 
             << ", a_current = " << a_current->second << endl;
        
        check = 1;  // Skip the next character since it's already processed
        continue;
    }

    // If no special case, add the current value
    if (check == 0) {
        value += a;
    }
    
    check = 0;  // Reset check for the next iteration
    cout << "Final value: " << value << endl;
}

return value;
    }
};