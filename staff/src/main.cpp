#include "job_position.hpp"

int main(int argc, char **argv){
  const char* uri = "assets/Staff";
  vector<JobPosition> jobPositionList;
  JobPositionSqlite job_position_sqlite(uri);
  cout << endl;
  if (job_position_sqlite.tableExists()){
    cout << endl << "Deleting the whole table.........................................."<<endl;
    job_position_sqlite.dropTable();
    cout << endl << "checking if table was effectively deleted.........................................."<<endl;
    if (!job_position_sqlite.tableExists()){
      cout << endl << "Creating the whole table.........................................."<<endl;
      job_position_sqlite.createTable();
      cout << endl << "Checking contents of the table at the moment.........................................."<<endl;
      job_position_sqlite.getAllJobPositions(&jobPositionList);
      cout << "nbr of records collected = " << jobPositionList.size() << std::endl;
      if (jobPositionList.size() == 0){
        cout << " Table is empty for now " << endl;
      }
      cout << endl << "Creating records in the table.........................................."<<endl;
      JobPosition job_p0(0,"manager","mon-tue-wed",300000);
      job_position_sqlite.createJobPosition(job_p0);
      JobPosition job_p1(0,"accountant","mon-tue-wed-thu-fri",200000);
      job_position_sqlite.createJobPosition(job_p1);
      JobPosition job_p2(0,"admin-assistant","mon-tue-wed-thu-fri",180000);
      job_position_sqlite.createJobPosition(job_p2);
      JobPosition job_p3(0,"cashier","mon-tue-wed-thu-fri",180000);
      job_position_sqlite.createJobPosition(job_p3);
      cout << endl << "Checking contents of the table at the moment.........................................."<<endl;
      job_position_sqlite.getAllJobPositions(&jobPositionList);
      cout << "nbr of records collected = " << jobPositionList.size() << std::endl;
      if (jobPositionList.size() > 0){
        cout << " Table is not empty !!!! " << endl;
        for (const auto& job_p :jobPositionList){
          cout << job_p;
        }
      }
      cout << endl << "Checking if the following JOB POSITION record is in the table at the moment..........."<<endl;
      job_position_sqlite.getJobPosition_by_Id(2, &job_p1);
      cout << job_p1 << endl;
      job_position_sqlite.tableContains(job_p1);
      cout << endl << "Checking if the following JOB POSITION record is in the table at the moment..........."<<endl;
      JobPosition job_p4(2,"accountant","mon-tue-wed-thu-fri",100000);
      cout << job_p4 << endl;
      job_position_sqlite.tableContains(job_p4);
      cout << endl << "Updating JOB POSITION record with ID = 2..........."<<endl;
      cout <<  "Before update..........."<<endl;
      job_position_sqlite.getJobPosition_by_Id(2, &job_p1);
      cout << job_p1 << endl;
      job_p1 = job_p4;
      job_position_sqlite.updateJobPosition(job_p1);
      cout <<  "After update..........."<<endl;
      job_position_sqlite.getJobPosition_by_Id(2, &job_p1);
      cout << job_p1 << endl;
      cout << endl << "Deleting JOB POSITION record with ID = 2..........."<<endl;
      cout << endl << "contents of the table before deletion.........................................."<<endl;
      jobPositionList.clear();
      job_position_sqlite.getAllJobPositions(&jobPositionList);
      cout << "nbr of records collected = " << jobPositionList.size() << std::endl;
      if (jobPositionList.size() > 0){
        cout << " Table is not empty !!!! " << endl;
        for (const auto& job_p :jobPositionList){
          cout << job_p;
        }
      }
      job_position_sqlite.deleteJobPosition(job_p1);
      cout << endl << "contents of the table after deletion.........................................."<<endl;
      jobPositionList.clear();
      job_position_sqlite.getAllJobPositions(&jobPositionList);
      cout << "nbr of records collected = " << jobPositionList.size() << std::endl;
      if (jobPositionList.size() > 0){
        cout << " Table is not empty !!!! " << endl;
        for (const auto& job_p :jobPositionList){
          cout << job_p;
        }
      }
    }else{
      cout << endl << "apparently deleting the whole table failed!!!!!................................."<<endl;
    }
  }
  
  return 0;
}
