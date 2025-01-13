int lengthOfLastWord(string s)
{
    int sizeOfS = s.size();
    int wordSize = 0;
    for (int i = sizeOfS - 1; i >= 0; i--)
    {
        if (isalpha(s[i]))
        {
            wordSize++;
        }
        else if (wordSize > 0)
        {
            break;
        }
    }
    return wordSize;
}