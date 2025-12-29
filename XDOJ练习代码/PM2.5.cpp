#include<stdio.h>

int main()
{
	int n;//天数
	scanf("%d",&n);
	int pm[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &pm[i]);
	}
	double sum=0;//pm2.5的和
	for (int c = 0; c < n; c++) { sum += pm[c]; }
	double arrange;
    arrange =(double)sum / n;

	int lva=0, lvb=0, lvc=0, lvd=0, lve=0, lvf=0;//表示从一到六的六个等级
	for (int c = 0; c < n; c++) {
		if (pm[c] >= 0 && pm[c] <= 50) {
			lva++;
		}
		else if (pm[c] >= 51 && pm[c] <= 100) {
			lvb++;
		}
		else if (pm[c] >= 101 && pm[c] <= 150) {
			lvc++;
		}
		else if (pm[c] >= 151 && pm[c] <= 200) {
			lvd++;
		}
		else if (pm[c] >= 201 && pm[c] <= 300) {
			lve++;
		}
		else if (pm[c] > 300) {
			lvf++;
		}
	}

	printf("%.2lf\n",arrange);
	printf("%d %d %d %d %d %d", lva, lvb, lvc, lvd, lve, lvf);

}
