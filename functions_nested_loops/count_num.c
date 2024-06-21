

unsigned long int count_num(unsigned long int num)
{
        unsigned long int count = 0;

        if (num == 0)
        {
                return (1);
        }

        while (num != 0)
        {
                num /= 10;
                count++;
        }
        return (count);
}

