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