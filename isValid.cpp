bool isValid(string s)
{
    stack<char> bracketSet;
    unordered_map<char, char> bracketMap = {
        {')', '('},
        {'}', '{'},
        {']', '['}};

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            bracketSet.push(c);
        }
        else
        {
            if (bracketSet.empty() || bracketSet.top() != bracketMap[c])
            {
                return false;
            }
            bracketSet.pop();
        }
    }
    return bracketSet.empty();
}