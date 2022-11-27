

#ifndef ATTENDANCE_H
#define ATTENDANCE_H


public:
	Attendance_list();               
    Attendance_list(string _info);   
    ~Attendance_list();

	
	string Name();
	int Display(int Date, int ID, int Start_hour, int Close_hour);
	 
     
	
