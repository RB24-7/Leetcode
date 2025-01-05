string longestCommonPrefix(vector<string>& strs) 
{
    if (strs.empty()) return "";

    string commonPrefix = strs[0];

    for (int i = 1; i < strs.size(); i++) 
    {
        int j = 0;

        while (j < commonPrefix.size() && j < strs[i].size() && commonPrefix[j] == strs[i][j] ) {
            j++;
        }

        commonPrefix = commonPrefix.substr(0, j);
        
        if(commonPrefix.empty()) 
        {
            break;
        }
    }
    return commonPrefix;
}