#include <sqlite3.h>
#include <sstream>
#include <fstream>
#include "job_position.hpp"

JobPosition::JobPosition(string title, string  working_period, int32_t hourly_rate):
title(title), working_period(working_period), hourly_rate(hourly_rate){}

int32_t JobPosition::get_id(){return this->id;}

int32_t JobPosition::get_hourly_rate(){return this->hourly_rate;}

string JobPosition::get_title(){return this->title;}

string JobPosition::get_working_period(){return this->working_period;}