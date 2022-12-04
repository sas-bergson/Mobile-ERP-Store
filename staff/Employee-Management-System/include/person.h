class Person {
    private:
        int personalID;
        string firstName;
        string lastName;
        double salary;
        double workingHours;
        double costPerHour;

    public:
        Person() {} 

        Person(int id, string fName, string lName, double wHours, double cpHour) {
            personalID = id;
            firstName = fName;
            lastName = lName;
            workingHours = wHours;
            costPerHour = cpHour;
        }
        
        void Set_FirstName(string fName) {
            firstName = fName;
        }

        void Set_LastName(string lName) {
            lastName = lName;
        } 

        void Set_WorkingHours(double wHours) {
            workingHours = wHours;
        }

        void Set_CostPerHour(double cpHour) {
            costPerHour = cpHour;
        }

        int Get_PersonalID() {
            return personalID;
        }

        string Get_FirstName() {
            return firstName;
        }

        string Get_LastName() {
            return lastName;
        }

        double Get_SalaryPerYear(){
            return workingHours * costPerHour * 52;
        }

        double Get_WorkingHour() {
            return workingHours;
        }

        double Get_CostPerHour() {
            return costPerHour;
        }

};
