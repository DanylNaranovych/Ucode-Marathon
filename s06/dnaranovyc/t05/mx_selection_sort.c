int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
    int i;
    int j;
    int min_idx = 0;
    int count = 0;
    char *minStr;
    for (i = 0; i < size - 1; i++) {
        int min_idx = i;
        minStr = arr[i];
        for (j = i + 1; j < size; j++) {
            if (mx_strcmp(minStr, arr[j]) > 0) {
                minStr = arr[j];
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            char *temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            count++;
        }
    }
    min_idx++;
    return count;
}

