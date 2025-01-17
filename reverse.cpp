int reverse(x) {
    long long int remainder = 0;
    while (x)
    {
        if (remainder > (INT_MAX / 10) || remainder < (INT_MIN / 10))
        {
            return 0;
        }

        remainder = remainder * 10 + x % 10;
        x = x/10;
    }
}