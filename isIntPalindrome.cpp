bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    long int reversedNumber = 0;
    int originalNumber = x;

    while (x != 0)
    {
        reversedNumber *= 10;
        reversedNumber += x % 10;
        x /= 10;
    }

    if (originalNumber == reversedNumber)
    {
        return true;
    }

    return false;
}