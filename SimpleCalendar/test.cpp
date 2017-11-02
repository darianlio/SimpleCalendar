/*
 * test.cpp
 *
 *  Created on: Nov 1, 2017
 *      Author: durian
 */

#include "SimpleCalendar.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	SimpleCalendar calendar;

	try {
		calendar.initialize();
		calendar.format(calendar.startDate);
		calendar.format(calendar.endDate);
	} catch (FileException& e) {
		cout << e.what() << endl;
		return 1;
	}

	for (unsigned int i = 0; i < calendar.startDate.size(); i++){
		if (calendar.byDay[i] == "MO"){
			cout << calendar.byDay[i] << endl;
			if (calendar.startDate[i].find("08:30:00") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "8:30 to " << 8+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("09:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "9:30 to " << 9+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("10:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "10:30 to " << 10+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("11:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "11:30 to " << 11+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("12:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "12:30 to " << 12+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("13:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "13:30 to " << 13+calendar.math << ":30" << endl;;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("14:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "14:30 to " << 14+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("15:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "15:30 to " << 15+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("16:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "16:30 to " << 16+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("17:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "17:30 to " << 17+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("18:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "18:30 to " << 18+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("19:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "19:30 to " << 19+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("20:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "20:30 to " << 20+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			}
			cout << "" << endl;
		} if (calendar.byDay[i] == "TU"){
			cout << calendar.byDay[i] << endl;
			if (calendar.startDate[i].find("08:30:00") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "8:30 to " << 8+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("09:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "9:30 to " << 9+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("10:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "10:30 to " << 10+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("11:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "11:30 to " << 11+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("12:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "12:30 to " << 12+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("13:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "13:30 to " << 13+calendar.math << ":30" << endl;;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("14:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "14:30 to " << 14+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("15:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "15:30 to " << 15+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("16:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "16:30 to " << 16+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("17:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "17:30 to " << 17+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("18:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "18:30 to " << 18+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("19:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "19:30 to " << 19+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("20:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "20:30 to " << 20+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			}
			cout << "" << endl;
		} if (calendar.byDay[i] == "WE"){
			cout << calendar.byDay[i] << endl;
			if (calendar.startDate[i].find("08:30:00") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "8:30 to " << 8+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("09:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "9:30 to " << 9+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("10:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "10:30 to " << 10+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("11:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "11:30 to " << 11+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("12:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "12:30 to " << 12+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("13:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "13:30 to " << 13+calendar.math << ":30" << endl;;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("14:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "14:30 to " << 14+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("15:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "15:30 to " << 15+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("16:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "16:30 to " << 16+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("17:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "17:30 to " << 17+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("18:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "18:30 to " << 18+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("19:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "19:30 to " << 19+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("20:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "20:30 to " << 20+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			}
			cout << "" << endl;
		} if (calendar.byDay[i] == "TH"){
			cout << calendar.byDay[i] << endl;
			if (calendar.startDate[i].find("08:30:00") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "8:30 to " << 8+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("09:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "9:30 to " << 9+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("10:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "10:30 to " << 10+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("11:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "11:30 to " << 11+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("12:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "12:30 to " << 12+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("13:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "13:30 to " << 13+calendar.math << ":30" << endl;;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("14:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "14:30 to " << 14+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("15:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "15:30 to " << 15+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("16:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "16:30 to " << 16+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("17:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "17:30 to " << 17+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("18:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "18:30 to " << 18+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("19:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "19:30 to " << 19+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("20:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "20:30 to " << 20+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			}
			cout << "" << endl;
		} if (calendar.byDay[i] == "FR"){
			cout << calendar.byDay[i] << endl;
			if (calendar.startDate[i].find("08:30:00") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "8:30 to " << 8+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("09:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "9:30 to " << 9+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("10:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "10:30 to " << 10+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("11:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "11:30 to " << 11+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("12:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "12:30 to " << 12+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("13:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "13:30 to " << 13+calendar.math << ":30" << endl;;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("14:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "14:30 to " << 14+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("15:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "15:30 to " << 15+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("16:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "16:30 to " << 16+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("17:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "17:30 to " << 17+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("18:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "18:30 to " << 18+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("19:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "19:30 to " << 19+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			} else if (calendar.startDate[i].find("20:30") != string::npos){
				calendar.difference(calendar.startDate[i], calendar.endDate[i]);
				cout << "20:30 to " << 20+calendar.math << ":30" << endl;
				cout << calendar.course[i] << endl;
				cout << calendar.location[i] << endl;
			}
			cout << "" << endl;
		}
	}
}



