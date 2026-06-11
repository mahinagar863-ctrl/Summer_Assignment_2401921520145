class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) {
            return false;
        }

        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        // Frequency of s1
        for (char ch : s1) {
            freq1[ch - 'a']++;
        }

        int windowSize = s1.length();

        // First window
        for (int i = 0; i < windowSize; i++) {
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2) {
            return true;
        }

        // Sliding window
        for (int i = windowSize; i < s2.length(); i++) {

            freq2[s2[i] - 'a']++;  // add new character

            freq2[s2[i - windowSize] - 'a']--; // remove old character

            if (freq1 == freq2) {
                return true;
            }
        }

        return false;
    }
};
