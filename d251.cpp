#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string hr, min;
	cin >> hr >> min;

	int hr_data[hr.length()], min_data[hr.length()];
	for (int i = 0; i < hr.length(); i++) {
		switch (hr[i]) {
			case 'I':
				hr_data[i] = 1; break;
			case 'V':
				hr_data[i] = 5; break;
			case 'X':
				hr_data[i] = 10; break;
		}
	}
	for (int i = 0; i < min.length(); i++) {
		switch (min[i]) {
			case 'I':
				min_data[i] = 1; break;
			case 'V':
				min_data[i] = 5; break;
			case 'X':
				min_data[i] = 10; break;
			case 'L':
				min_data[i] = 50; break;
		}
	}

	int rome_hr = 0;
	for (int i = 0; i < hr.length(); i++) {
		if (hr_data[i] < hr_data[i+1] && hr[i+1] != '\0') {
			rome_hr -= hr_data[i];
			continue;
		}
		rome_hr += hr_data[i];
	}

	int rome_min = 0;
	for (int i = 0; i < min.length(); i++) {
		if (min_data[i] < min_data[i+1] && min[i+1] != '\0') {
			rome_min -= min_data[i];
			continue;
		}
		rome_min += min_data[i];
	}

	int tw_hr = rome_hr + 7, tw_min = rome_min + 30;
	if (rome_min + 30 > 59) {
		tw_hr = rome_hr + 8;
		tw_min = rome_min - 30;
	}

	if (tw_hr > 23) {
		tw_hr -= 24;
	}

	int tmp_tw_hr = tw_hr, tmp_tw_min = tw_min;
	string tw_roman_hr = "", tw_roman_min = "";

	// TODO: 四個連續數化簡
	while (tmp_tw_hr >= 10) {
		tw_roman_hr.push_back('X');
		tmp_tw_hr -= 10;
	}
	if (tmp_tw_hr == 9) {
		tw_roman_hr.push_back('I');
		tw_roman_hr.push_back('X');
		tmp_tw_hr -= 9;
	}
	while (tmp_tw_hr >= 5) {
		tw_roman_hr.push_back('V');
		tmp_tw_hr -= 5;
	}
	if (tmp_tw_hr == 4) {
		tw_roman_hr.push_back('I');
		tw_roman_hr.push_back('V');
		tmp_tw_hr -= 4;
	}
	while (tmp_tw_hr >= 1) {
		tw_roman_hr.push_back('I');
		tmp_tw_hr -= 1;
	}

	while (tmp_tw_min >= 50) {
		tw_roman_min.push_back('L');
		tmp_tw_min -= 50;
	}
	if (tmp_tw_min == 40) {
		tw_roman_min.push_back('X');
		tw_roman_min.push_back('L');
		tmp_tw_min -= 40;
	}
	while (tmp_tw_min >= 10) {
		tw_roman_min.push_back('X');
		tmp_tw_min -= 10;
	}
	if (tmp_tw_min == 9) {
		tw_roman_min.push_back('I');
		tw_roman_min.push_back('X');
		tmp_tw_min -= 9;
	}
	while (tmp_tw_min >= 5) {
		tw_roman_min.push_back('V');
		tmp_tw_min -= 5;
	}
	if (tmp_tw_min == 4) {
		tw_roman_min.push_back('I');
		tw_roman_min.push_back('V');
		tmp_tw_min -= 4;
	}
	while (tmp_tw_min >= 1) {
		tw_roman_min.push_back('I');
		tmp_tw_min -= 1;
	}


	cout << tw_roman_hr << "\n";
	cout << tw_roman_min << "\n";
}
