 int myAtoi(string s) 
 {
    int index = 0;
    int sign = 1; //Positive assumtion
    int sizeOfS = s.length();

    while(index < sizeOfS && s[index] == ' ')
    {
        index++;
    }

    if (index < sizeOfS && (s[index] == '-' || s[index] == '+'))
    {
        sign = (s[index] == '-') ? -1 : 1;
        index++;
    }

    long long result = 0;
    while (index < sizeOfS && isdigit(s[index]))
    {
        result *= 10 + (s[index] - '0');

        if (result * sign > INT_MAX)
        {
            return INT_MAX;
        }

        if (result * sign < INT_MIN)
        {
            return INT_MIN;
        }
        index++;
    }

    return static_cast<int>(result * sign);
}