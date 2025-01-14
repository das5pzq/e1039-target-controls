// MotorTestDll.cpp : Defines the exported functions for the DLL application.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include "MotorTracker.h"


int main(int argc, char *argv[])
{
	double position = atof(argv[1]);
	double fit[2];
	char *file = argv[2];

	MotorTracker(position, fit, file);

	return 0;
}