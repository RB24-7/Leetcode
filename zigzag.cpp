string convert(string s, int numRows) 
{
    if (numRows == 1 || numRows >= s.length()) {
        return s;
    }

    int cycleLength = 2 * numRows - 2;
    string result = "";

    for (int i = 0; i < numRows; i++) 
    {
        for (int j = 0; j + i < s.length(); j += cycleLength) 
        {
            result += s[j + i];
            if (i != 0 && i != numRows - 1 &&
                j + cycleLength - i < s.length()) {
                result += s[j + cycleLength - i];
            }
        }
    }
    return result;
}