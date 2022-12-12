![Screenshot (146)](https://user-images.githubusercontent.com/100780969/207173073-ac927951-bd61-4292-929a-76ac436fc30c.png)




# Staff module for ERP-Store
# Staff Attendance Team Directory:
# STAFF ATTENDANCE MANAGEMENT SYSTEM
# *TEAM MEMBERS:
# KERNYUY FOMO
# FONYA BRANDONE
# NYEANGO ASHLEY
# NOUKO JAYSON WHITE
# LESLIE
# ARIAN
# BELLA
# LARISA
CONTENT OUTLINE
# Chapter 1
 Project Introduction
 Objectives and Description
 Scope and Limitations
 Technologies Used
 Overview
# Chapter 2
 Project Methodology
 The Agile Development Process
 Architectural Design
# Chapter 3
 Concept of Operations
 Activity Diagram
 Data Flow Diagram
 Scenarios
 Use Cases
 Data Dictionary
 Entity Relationship Diagram
# Chapter 4
 Results and Discussion
 Advantages
 Disadvantages
 Project Limitations
 Conclusions


#       Chapter 1
Project Introduction:
Staff Attendance is a baseline factor in determining a business success. The attendance is important because employees are more likely to take their jobs more seriously with this system in place.
The system facilitates the management and tracking of employees at their job site.
The system is managed and sorted by an Administrator who can be a Systems manager or human resource manager. Employees through the administrator get enrolled and their attendance is tracked by the said administrator.
Objectives and Descriptions
Develop a Cross platform application to be used in place of old paper based Employee/Staff Attendance management processes and tracking.
Use SQLite and Server side technology to create a secured database connectivity.
Incorporate the server software within the code.
Runtime package and deployment instructions are given.
Eliminate duplicate data entry and errors in time and attendance entries
Eliminate paperwork and save time.
Automatic calculation of attendance
Increase Data security.
Record staff Leave records.
Generate computerized reports.
Scope of the project
The scope of the project is the computer system on which the software is installed, i.e. the project is developed as a laptop or mobile application, and it will work for a particular Store business. But later on the project can be modified to operate it online, as client requires.
Technologies Used
Programming Languages: C++, QT Framework
Database: SQLite
Other concepts: API, Object Oriented Programming(OOP)
System Requirements:
Minimum RAM: 256MB
Hard-Disk: >20GB
Operating System: Windows, Linux, Android,iOS
Overview
Staff Attendance Management system has two main modules:
- First is the Administrator who controls, updates and monitors the system for proper management. He/she is in charge of Enrolling, editing, updating and manipulating staff records, attendance, absences and leave reports.
- Second is the System, which checks entries, restricts duplicates, errors and performs authentications using provided algorithms.
- 
#       Chapter 2
Staff Attendance Management Methodology
The methodologies used here in acquiring data, analyzing and systems building is the Agile Software development methodology. This methodology enables the team to adapt to clients constantly changing demands. It also enabled the team to stay flexible in the development of the project.
Architectural Design:
Architectural Diagram shows the network interface of the system that will be used for the Staff Attendance management. The process starts by registering or enrolling the employees from the server workstation, which is the system on which the application is installed and automatically saved the data into the database (SQLite in this case). After registration, the Administrator can record the daily attendance of various employees from his client computer. The staff information will retrieve from the database and process their attendance recording. The attendance record is also automatically saved in the database and backup database for a higher level security.
Staff Attendance Management System Classes and Class Diagram:

                            CLASS DIAGRAM IMAGE HERE!!


#       Chapter 3
Concept of Operations
Having manual operations in a Store business or in a company brings a lot of work and sometimes this method causes errors in inputting data that results to another sets of work. In other words, the manual operation takes also a lot of time and effort, with risks of losing data records. In manual staff attendance monitoring, the employees are using time sheets in their attendance, attendance log and attendance sheets. These are all paper works and these can easily get damaged and worst is that these can be tampered or modified. Security is a key priority in the development of this system.
Activity Diagram

![IMG-20221122-WA0017](https://user-images.githubusercontent.com/100780969/207158990-4f02a104-5c5b-4acb-8398-f5c7bca1fd39.jpg)


The figure above shows the activity diagram of the staff attendance management system. An administrator accesses the system with an authentication before performing staff management operations. After permission check, he has the decision control on whether to perform Staff enrollment, Manage Permissions/Leave, Manage Attendance or generate reports. After the control options, comes logout from the system which removes authentication privileges.
#           Data Flow Diagram

![IMG-20221122-WA0015_1](https://user-images.githubusercontent.com/100780969/207159049-3461daaa-6f9b-4e00-bd5c-6bf04850f769.jpg)


The diagram above represents a First level view of the UML Data flow diagram(DFD) of the staff attendance management system. In order for a staff’s data to be managed, he/she has to provide
them to the Systems administrator. The administrator proceeds to manage the staff’s records, including daily attendance. The system generates reports which can be viewed by the staffs.
This form of management though not the best, helps in managing store employee data and attendance report more efficiently than manual paper works can do.
#           Use Cases


![IMG-20221122-WA0009](https://user-images.githubusercontent.com/100780969/207158877-22517f26-b52f-4e95-b8ee-3e5cae14c8f4.jpg)



The Figure above shows how the proposed system works and interacts with the actors. First, the staff will enroll his details trough the administrator and after enrollment, the administrator will able to record the daily attendance of the staffs using the provided identification number and Name to the system. The administrator and staffs can view attendance reports, leave or permission reports and also absences, all generated by the system. Staffs must request the administrator to view their personal detailed records.


#       *Scenarios description
The tables below describe all the functions, conditions and alternative flow to be met by all the entities used in the use case diagram of the proposed solution.

* Table 1: Enroll new staff
Actors
Pre-condition
Post-condition
Main scenarios
System Administrator, staff, system
Staff should not already exist in the system
Verify that staff appears on the list of all employees/staffs.
-request staff’s details
-open form
-fill in staff details
-submit form
-systems verification
-Staff data enrolled successfully.

* Table 2: Record Attendance
Actors
Pre-condition
Post-condition
Main scenarios
System Administrator, staff
- The staff must have already been enrolled
- Staff attendance record for that day should not already exist in the system
-open form
-fill in ID, name, day and working hours
- save attendance
- view staff attendance .


* Table 3: Attendance Report
Actors
Pre-condition
Post-condition
Main scenarios
The Sytem, administrator
- The staff must have already been enrolled
- Administrator should confirm report generation
- Open the system
- Go to Reports.
- Search for an employee
- View all his reports.
-Export the reports

* Table 4: Lookout a Staff
Actors
Pre-condition
Post-condition
Main scenarios
System administrator
- Must be logged in
- The staff must have already been enrolled
- Open the system
- Go to ‘Lookout a Satff’
-Enter Staff name
-click search
-see search results
Table 5: Quit System
Actors
Pre-condition
Post-condition
Main scenarios
System administrator, system
- Must be logged in
-Must be on the welcome page
- Click on ‘Quit’ button
- Windows app closes.

#           ER Diagram
The ER Diagram below shows the various entities and attributes plus their various relationships that exist between each of them. The entities and attributes show bellow are also represented in our system database as Tables and their entries.

![IMG-20221122-WA0019](https://user-images.githubusercontent.com/100780969/207158713-3641164f-777e-4219-9b34-bc38ca98d18c.jpg)


#       Chapter 4
*Advantages of the system
• Reduce paperwork and save time and money with mobile and AI-based staff attendance management system
• Eliminate duplicate data entry and errors in time and attendance entries
• Improve visibility to track and manage staff’s attendance & absenteeism across multiple job positions within the store use case.
• Keep the company managers informed about the states of their employees at all times.
• Auto-generate various types of reports on staff attendance or absence
• Increased security and confidentiality with role-based permissions to users

*Disadvantages
• Automatic calculation of leave and risk of modifications
• Risk of data lost in case of security breach or failure of the platform on which the application is installed.
* Project Limitations:
 Automatically marking student attendance is a limitation and is rather done manually through the system by the system administrator.
 Staffs or employees do not have complete access to their data records.
 Access limited only to administrator and the system on which the app is installed.

*Conclusions
This cross platform application for the Store accounting, effectively fulfills its purpose by managing staff attendance, staff records and takes away traditional paper work management procedures.

