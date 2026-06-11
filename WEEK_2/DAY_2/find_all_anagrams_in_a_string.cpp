class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.length();
        int m = p.length();

        if (m > n) {
            return ans;
        }

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        // Count frequency of p
        for (char ch : p) {
            freqP[ch - 'a']++;
        }

        // First window of size m
        for (int i = 0; i < m; i++) {
            freqS[s[i] - 'a']++;
        }

        if (freqP == freqS) {
            ans.push_back(0);
        }

        // Sliding window
        for (int i = m; i < n; i++) {

            freqS[s[i] - 'a']++;       // add new char
            freqS[s[i - m] - 'a']--;   // remove old char

            if (freqP == freqS) {
                ans.push_back(i - m + 1);
            }
        }

        return ans;
    }
};
