enum StringOperation
{
    startsWith = 1,
    endsWith,
    contains,
};
enum NumOperation
{
    equalTo = 1,
    notEqualTo,
    lessThan,
    greaterThan,
    lessThanEqualTo,
    greaterThanEqualTo,

};

class QuerySearch
{

public:
    map<int, Person> SearchByFieldNameString(map<int, Person> queryData, string fieldName, StringOperation operation, string substring)
    {
        map<int, Person> res;
        map<int, Person>::iterator itr;
        for (itr = queryData.begin(); itr != queryData.end(); itr++)
        {
            if (operation == startsWith)
            {

                if (fieldName == "FirstName")
                {
                    if (itr->second.Get_FirstName().rfind(substring, 0) == 0)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "LastName")
                {
                    if (itr->second.Get_LastName().rfind(substring, 0) == 0)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
            else if (operation == endsWith)
            {

                if (fieldName == "FirstName")
                {

                    if (itr->second.Get_FirstName().find(substring, itr->second.Get_FirstName().size() - substring.size()) != std::string::npos)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "LastName")
                {
                    if (itr->second.Get_LastName().find(substring, itr->second.Get_LastName().size() - substring.size()) != std::string::npos)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
            else if (operation == contains)
            {
                if (fieldName == "FirstName")
                {
                    if (itr->second.Get_FirstName().find(substring) != -1)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "LastName")
                {
                    if (itr->second.Get_LastName().find(substring) != -1)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
        }

        return res;
    }

    map<int, Person> SearchByFieldNameNumber(map<int, Person> queryData, string fieldName, NumOperation operation, double compareValue)
    {
        map<int, Person> res;

        map<int, Person>::iterator itr;
        for (itr = queryData.begin(); itr != queryData.end(); itr++)
        {

            if (operation == equalTo)
            {

                if (fieldName == "Salary")
                {
                    if (itr->second.Get_SalaryPerYear() == compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "PersonalID")
                {
                    if (itr->second.Get_PersonalID() == compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }

            else if (operation == notEqualTo)
            {

                if (fieldName == "Salary")
                {
                    if (itr->second.Get_SalaryPerYear() != compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "PersonalID")
                {
                    if (itr->second.Get_PersonalID() != compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
            else if (operation == lessThan)
            {

                if (fieldName == "Salary")
                {
                    if (itr->second.Get_SalaryPerYear() < compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "PersonalID")
                {
                    if (itr->second.Get_PersonalID() > compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
            else if (operation == greaterThan)
            {

                if (fieldName == "Salary")
                {
                    if (itr->second.Get_SalaryPerYear() > compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "PersonalID")
                {
                    if (itr->second.Get_PersonalID() > compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
            else if (operation == lessThanEqualTo)
            {

                if (fieldName == "Salary")
                {
                    if (itr->second.Get_SalaryPerYear() <= compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "PersonalID")
                {
                    if (itr->second.Get_PersonalID() <= compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
            else if (operation == greaterThanEqualTo)
            {

                if (fieldName == "Salary")
                {
                    if (itr->second.Get_SalaryPerYear() >= compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
                else if (fieldName == "PersonalID")
                {
                    if (itr->second.Get_PersonalID() >= compareValue)
                    {
                        res.insert(pair<int, Person>(itr->first, itr->second));
                    }
                }
            }
        }

        return res;
    }

    map<int, Person> AndOperation(map<int, Person> map1, map<int, Person> map2)
    {
        map<int, Person> res;

        map<int, Person>::iterator itr;

        for (itr = map1.begin(); itr != map1.end(); itr++)
        {
            if (map2.find(itr->second.Get_PersonalID()) != map2.end())
            {
                res.insert(pair<int, Person>(itr->first, itr->second));
            }
        }

        return res;
    }
    map<int, Person> OrOperation(map<int, Person> map1, map<int, Person> map2)
    {
        map<int, Person>::iterator itr;

        for (itr = map2.begin(); itr != map2.end(); itr++)
        {
            if (map1.find(itr->second.Get_PersonalID()) == map1.end())
            {
                map1.insert(pair<int, Person>(itr->first, itr->second));
            }
        }

        return map1;
    }
    map<int, Person> NotOperation(map<int, Person> map1, map<int, Person> original)
    {

        map<int, Person> res;

        map<int, Person>::iterator itr;

        for (itr = original.begin(); itr != original.end(); itr++)
        {
            if (map1.find(itr->second.Get_PersonalID()) == map1.end())
            {
                res.insert(pair<int, Person>(itr->first, itr->second));
            }
        }
        return res;
    }
};
