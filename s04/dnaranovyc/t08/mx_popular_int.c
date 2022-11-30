int mx_popular_int(const int *arr, int size)
{
    int common;
    int count = 0;
    int maxcount = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxcount)
        {
            maxcount = count;
            common = arr[i];
        }
    }
    return common;
}
