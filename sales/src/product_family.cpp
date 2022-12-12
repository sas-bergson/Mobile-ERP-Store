#include <vector>
#include <sqlite3.h>
#include <sstream>
#include <string>
#include <iostream>
#include "product_family.hpp"

using namespace std;

ProductFamily::ProductFamily()
{};

ProductFamily::ProductFamily(int id, string name)
{
    this->id = id;
    this->name = name;
};

int ProductFamily::getId()
{
    return this->id;
}

void ProductFamily::setId(int id)
{
    this->id = id;
};

string ProductFamily::getName()
{
    return this->name;
};

void ProductFamily::setName(string name)
{
    this->name = name;
};

ProductFamilySqlite::ProductFamilySqlite(string uri)
{
    sqlite3* db;
    int exit;

    exit = sqlite3_open(uri.c_str(), &db);

    if (exit)
    {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
    }
    else
    {
        cout << "Opened database successfully" << endl;
    }

    sqlite3_close(db);
};

/* static int callback(void *data, int argc, char **argv, char **azColName){
   int i;

   for (i = 0; i<argc; i++)
   {
        cout << azColName[i] << argv[i] << endl;
   }

   return 0;
} */

vector<ProductFamily> ProductFamilySqlite::getAllProductFamilies()
{
    sqlite3* db;
    sqlite3_stmt *stmt;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");
    vector<ProductFamily> records;

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    if (exit) {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return records;
    }
    else {
        cout << "Opened database successfully!";
    }

    ss << "SELECT * FROM product_family;";
    sql = ss.str().c_str();
    exit = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not fetch product families from database." << sqlite3_errmsg(db) << endl;
        sqlite3_free(zErrMsg);
        return records;
    }

    while ((exit = sqlite3_step(stmt)) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        records.push_back(ProductFamily(id, name));
    }

    if (exit != SQLITE_DONE) {
        cerr << "Could not fetch product families from database." << sqlite3_errmsg(db) << endl;
        // if you return/throw here, don't forget the finalize
    }

    sqlite3_finalize(stmt);

    sqlite3_close(db);

    return records;
};

ProductFamily ProductFamilySqlite::getProductFamilyById(int32_t id)
{
    sqlite3* db;
    sqlite3_stmt *stmt;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");
    ProductFamily product_family;

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    if (exit) {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return product_family;
    }
    else {
        cout << "Opened database successfully!";
    }

    ss << "SELECT * FROM product_family WHERE id = " << id << ";";
    sql = ss.str().c_str();
    exit = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not fetch product family from database." << sqlite3_errmsg(db) << endl;
        sqlite3_free(zErrMsg);
        return product_family;
    }

    while ((exit = sqlite3_step(stmt)) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        product_family.setId(id);
        product_family.setName(name);
    }

    if (exit != SQLITE_DONE) {
        cerr << "Could not fetch product family from database." << sqlite3_errmsg(db) << endl;
        // if you return/throw here, don't forget the finalize
    }

    sqlite3_finalize(stmt);

    sqlite3_close(db);

    return product_family;
};

int32_t ProductFamilySqlite::createProductFamily(ProductFamily product_family)
{
    sqlite3* db;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    ss << "INSERT INTO product_family VALUES(" << NULL << "," << product_family.getName() << ");";
    sql = ss.str().c_str();
    exit = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not add new product family in the database." << endl;
        sqlite3_free(zErrMsg);
        return SQLITE_ABORT;
    }
    else
        cout << "Product family created Successfully!" << endl;

    sqlite3_close(db);

    return 0;
};

int32_t ProductFamilySqlite::updateProductFamily(ProductFamily product_family)
{
    sqlite3* db;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    ss << "UPDATE product_family SET name = " << product_family.getName() << " WHERE id = " << product_family.getId() << ";";
    sql = ss.str().c_str();
    exit = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not update this product family in the database." << endl;
        sqlite3_free(zErrMsg);
        return SQLITE_ABORT;
    }
    else
        cout << "Product family updated Successfully!" << endl;

    sqlite3_close(db);

    return 0;
};

int32_t ProductFamilySqlite::deleteProductFamily(ProductFamily product_family)
{
    sqlite3* db;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    ss << "DELETE FROM product_family WHERE id = " << product_family.getId() << ";";
    sql = ss.str().c_str();
    exit = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not delete this product family in the database." << endl;
        sqlite3_free(zErrMsg);
        return SQLITE_ABORT;
    }
    else
        cout << "Product family deleted Successfully!" << endl;

    sqlite3_close(db);

    return 0;
};
