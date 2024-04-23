class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int indices[26];
        memset(indices, -1, sizeof(indices));
        int n = s.size(), mx = -1;
        for (int i = 0; i < n; i++) {
            if (indices[s[i]-'a'] == -1) {
                indices[s[i]-'a'] = i;
            } else {
                mx = max(mx, i - indices[s[i]-'a'] - 1);
            }
        }
        return mx;
    }
};
