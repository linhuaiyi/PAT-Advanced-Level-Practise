/*
 * PAT1012.cpp
 *
 *  Created on: 2017Äê12ÔÂ28ÈÕ
 *      Author: Lin_90
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int count_of_num;
	cin >> count_of_num;
	int num;
	int a1, a2, a3, a4, a5;
	int a2_sign_flag = 1;
	int a2_count = 0, a4_count = 0;
	a1 = a2 = a3 = a4 = a5 = 0;
	for(int i = 0;i < count_of_num;++i){
		cin >> num;
		if(num % 5 == 0 && num % 2 == 0){
			a1 += num;
		} else if(num % 5 == 1){
			a2 += a2_sign_flag * num;
			a2_sign_flag = (-1) * a2_sign_flag;
			a2_count += 1;
		} else if(num % 5 == 2){
			a3 += 1;
		} else if(num % 5 == 3){
			a4_count += 1;
			a4 += num;
		} else if(num % 5 == 4){
			if(a5 < num){
				a5 = num;
			}
		}
	}


	a1 == 0?cout << "N ":cout << a1 << " ";
	a2_count == 0?cout << "N ":cout << a2 << " ";
	a3 == 0?cout << "N ":cout << a3 << " ";

	double a4_double;
	if(a4_count != 0) a4_double = (double)a4 / a4_count;
	a4 == 0?cout << "N ":cout << setiosflags(ios::fixed) << setprecision(1) << a4_double << " ";
	a5 == 0?cout << "N":cout << a5;

	return 0;
}


