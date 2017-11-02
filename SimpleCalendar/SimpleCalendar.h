/*
 * SimpleCalendar.h
 *
 *  Created on: Nov 1, 2017
 *      Author: durian
 */

#ifndef SIMPLECALENDAR_H_
#define SIMPLECALENDAR_H_

#include <string>
#include <vector>

using namespace std;

class FileException{
public:
	FileException(const string&);							//FileException constructor method to display error
	string what() const;									//method to be called when thrown

private:
	string message;											//message to be called and displayed
};

class SimpleCalendar {
public:
	SimpleCalendar();
	void initialize();
	void format(vector<string> &date);
	void difference(string &date1, string &date2);
	vector<string> startDate;
	vector<string> endDate;
	vector<string> course;
	vector<string> location;
	vector<string> byDay;
	int math = 0;
};



#endif /* SIMPLECALENDAR_H_ */
