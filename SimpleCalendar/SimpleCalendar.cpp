/*
 * SimpleCalendar.cpp
 *
 *  Created on: Nov 1, 2017
 *      Author: durian
 */
#include "SimpleCalendar.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

FileException::FileException(const string& message) : message(message) {}

string FileException::what() const{
	return message;
}

SimpleCalendar::SimpleCalendar(){}

//parse date into better format
void SimpleCalendar::format(vector<string> &date){
	string getDate, year, month, day, hour, minute, second;

	for (unsigned int i = 0; i < date.size(); i++){
		getDate = date[i];
		year = getDate.substr(0, 4);
		month = getDate.substr(4, 2);
		day = getDate.substr(6, 2);
		hour = getDate.substr(9, 2);
		minute = getDate.substr(11, 2);
		second = getDate.substr(13, 2);
		date[i] = year + "/" + month + "/" + day + " " + hour + ":" + minute + ":" + second;
	}
}

//hour difference
void SimpleCalendar::difference(string &date1 , string &date2){
	int getDate1, getDate2;
	getDate1 = stoi(date1.substr(11, 2));
	getDate2 = stoi(date2.substr(11, 2));
	math = getDate2 - getDate1;
}

//load file into vectors
void SimpleCalendar::initialize(){
	string getLine;
	ifstream readFile;
	readFile.open("14dl50-FNM7CZNGUOJMGXDBSV6EOTCZW2GPAQYX6YTQYARSCCHDIODUGLSA.ics");

	if(readFile.fail()){
		throw FileException("Error! Cannot open the file.");
	}
	while (getline(readFile, getLine)) {
		if (getLine == "BEGIN:VEVENT"){
			while (getLine != "END:VEVENT"){
				getline(readFile,getLine);
				size_t summ = getLine.find("SUMMARY;LANGUAGE=en-ca:");
				size_t loc = getLine.find("LOCATION:");
				size_t start = getLine.find("DTSTART;TZID=Eastern Standard Time:");
				size_t end = getLine.find("DTEND;TZID=Eastern Standard Time:");
				size_t day = getLine.find("BYDAY=");
				if (summ != string::npos){
					course.push_back(getLine.substr(summ + sizeof "SUMMARY;LANGUAGE=en-ca:" - 1));
				} else if (loc != string::npos){
					location.push_back(getLine.substr(loc + sizeof "LOCATION:" - 1));
				} else if (start != string::npos){
					startDate.push_back(getLine.substr(start + sizeof "DTSTART;TZID=Eastern Standard Time:" - 1));
				} else if (end != string::npos){
					endDate.push_back(getLine.substr(end + sizeof "DTEND;TZID=Eastern Standard Time:" - 1));
				} else if (day != string::npos){
					byDay.push_back(getLine.substr(sizeof "RRULE:FREQ=WEEKLY;UNTIL=20171126T235959;BYDAY=" - 1));
				}
			}
		}
	}

}

