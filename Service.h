#pragma once
#include <iostream>
using namespace std;
class Service {
public:
	std::string date;
	int Cost;
	Service(std::string temp_date, int temp_Cost) {
		date = temp_date;
		Cost = temp_Cost;
		std::cout << "Service has been created";
	}
	void PrintService() {
		std::cout << "Date:" << date << " Cost:" << Cost << std::endl;
	}
};