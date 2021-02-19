#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_array(double *array, int len)
{
	int i;
	
	i = -1;
	while (++i < len)
		printf("%.3f ", array[i]);
	printf("\n");

}

void	swap(double *first, double *second)
{
	double tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}

int	cnt_strings(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	partition(double *values, int i, int j)
{
	double x = values[j];
	int less = i;

	while (i < j)
	{
		if (values[i] <= x)
		{
			swap(&values[i], &values[less]);
			less++;
		}
		i++;
	}
	swap(&values[less], &values[j]);
	return (less);
}

void	quick_sort(double *values, int i, int j)
{
	if (i < j)
	{
		int p;

		p = partition(values, i, j);
		quick_sort(values, i, p - 1);
		quick_sort(values, p + 1, j);
	}

}

int	start_sorting(char **strings)
{
	int i;
	double *values;
	int len;

	len = cnt_strings(strings);
	values = (double *)malloc(sizeof(double) * len);
	if (values == NULL)
		return (-1);
	i = -1;
	while (++i < len)
		values[i] = atof(strings[i]);
	printf("Actual array: ");
	print_array(values, len);
	quick_sort(values, 0, len - 1);
	printf("Sorted array: ");
	print_array(values, len);
	free (values);
	return (0);
}

int main(int argc, char **argv)
{
	
	int ret;

	ret = 0;
	if (argc > 2)
		ret = start_sorting(argv + 1);
	else
		printf("Give me numbers and I'll sort them\n");
	return (ret);
}
