 int lengthOfLongestSubstring(string s) {
        int sizeOfString = s.length();
        int left = 0;
        int right = 0;
        int maxLength = 0;
        unordered_set<char> charSet;

        while (right < sizeOfString) 
        {
            if(charSet.find(s[right]) == charSet.end())
            {
                charSet.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            } else {
                charSet.erase(s[left]);
                left++;
            }
        }
        return maxLength;

    }