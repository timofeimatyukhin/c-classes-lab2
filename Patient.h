#pragma once
#include <iostream>
#include "service.h"
#include "Data.h"
#include "Doctor.h"
class Patient {
public:
	Service Service;
	Data Data;
	Doctor Doctor;
	
	Patient(Service Service, Data Data) {
		Patient->Service = Service;
		Patient->Data = Data;
		std::cout << "Person has been created";
	}
	void print_Patient() {
		std::cout << "NumberPas:" << NumberPas << " Height:" << Height << " Weight:" << Weight << "  Age:" << Age << " Date:" << Service.Date << " Cost:" << Service.Cost << std::endl;
	}
	void SetDoctor(Patient* Patient, Doctor Doctor) {
		Data->Doctor = Doctor;
	}
	
};