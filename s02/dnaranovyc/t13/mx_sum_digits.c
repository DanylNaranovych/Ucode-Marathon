int mx_sum_digits(int num) {
    if (num < 0) {
        num = num * -1;
    }
	int temp = 0;
	while (num > 0)  {
        temp += num%10;
        num /= 10;
    }
    return temp;
}
