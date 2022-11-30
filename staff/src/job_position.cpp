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

JobPositionSqlite::JobPositionSqlite(string uri):
uri(uri){}

vector<JobPosition> JobPositionSqlite::getAllJobPositions(){
    vector<JobPosition> records;
    return records;
}

JobPosition JobPositionSqlite::getJobPosition_by_Id(int32_t job_id){
    JobPosition job;
    return job;
}

JobPosition JobPositionSqlite::getJobPosition_by_Title(string job_title){
    JobPosition job;
    return job;
}

int32_t JobPositionSqlite::createJobPosition(JobPosition job){
    return 0;
}

int32_t JobPositionSqlite::updateJobPosition(JobPosition job){
     return 0;
}

int32_t JobPositionSqlite::deleteJobPosition(JobPosition job){
     return 0;
}

JobPositionQtSqlite::JobPositionQtSqlite(string uri):
uri(uri){}

vector<JobPosition> JobPositionQtSqlite::getAllJobPositions(){
    vector<JobPosition> records;
    return records;
}

JobPosition JobPositionQtSqlite::getJobPosition_by_Id(int32_t job_id){
    JobPosition job;
    return job;
}

JobPosition JobPositionQtSqlite::getJobPosition_by_Title(string job_title){
    JobPosition job;
    return job;
}

int32_t JobPositionQtSqlite::createJobPosition(JobPosition job){
    return 0;
}

int32_t JobPositionQtSqlite::updateJobPosition(JobPosition job){
     return 0;
}

int32_t JobPositionQtSqlite::deleteJobPosition(JobPosition job){
     return 0;
}
