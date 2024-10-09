#include<iostream>
using namespace std;
void get_stat(double a[], int size, double* p_avg, double* p_max, double* p_sum)
{
	
	double sum = 0;
	double max = a[0];
	double avg = 0;
	for (int i = 0; i < size; i++)
	{
		sum += i[a];
		if (a[i] > max) {
			max = a[i];
		}	
	}
	*p_sum = sum;
	*p_avg = sum / size;
	*p_max = max;

}

int main()
{
	double a[] = { 1.2, 2.3, 3.4, 4.5, 5.5 };
	int size = sizeof(a) / sizeof(a[0]);
	double avg=0, max=0, sum=0;
	get_stat(a, size, &avg, &max, &sum);
	cout << avg<<endl;
	cout << max << endl;
	cout << sum << endl;

	return 0;
}