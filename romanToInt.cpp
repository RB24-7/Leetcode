int romanToInt(string s)
{
    int romanIntegers[26] = {};
    romanIntegers['I' - 'A'] = 1;
    romanIntegers['V' - 'A'] = 5;
    romanIntegers['X' - 'A'] = 10;
    romanIntegers['L' - 'A'] = 50;
    romanIntegers['C' - 'A'] = 100;
    romanIntegers['D' - 'A'] = 500;
    romanIntegers['M' - 'A'] = 1000;

    int result = 0;
    int stringLength = s.length();

    for (int i = 0; i < stringLength - 1; i++)
    {
        if (romanIntegers[s[i] - 'A'] < romanIntegers[s[i + 1] - 'A'])
        {
            result -= romanIntegers[s[i] - 'A'];
        }
        else
        {
            result += romanIntegers[s[i] - 'A'];
        }
    }

    result += romanIntegers[s[stringLength - 1] - 'A'];
    return result;
}