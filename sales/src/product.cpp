#include <vector>
#include <sqlite3.h>
#include <sstream>
#include <string>
#include <iostream>
#include "product.hpp"

using namespace std;

Product::Product()
{};

Product::Product(int id, string code, string name, double price, string barcode,
int minimum_stock, int maximum_stock, int product_family_id)
{
    this->id = id;
    this->code = code;
    this->name = name;
    this->price = price;
    this->barcode = barcode;
    this->minimum_stock = minimum_stock;
    this->maximum_stock = maximum_stock;
    this->product_family_id = product_family_id;
};

int Product::getId()
{
    return this->id;
}

void Product::setId(int id)
{
    this->id = id;
};

string Product::getCode()
{
    return this->code;
};

void Product::setCode(string code)
{
    this->code = code;
};

string Product::getName()
{
    return this->name;
};

void Product::setName(string name)
{
    this->name = name;
};

double Product::getPrice()
{
    return this->price;
};

void Product::setPrice(double price)
{
    this->price = price;
};

string Product::getBarcode()
{
    return this->barcode;
};

void Product::setBarcode(string barcode)
{
    this->barcode = barcode;
};

int Product::getMinimumStock()
{
    return this->minimum_stock;
};

void Product::setMinimumStock(int minimum_stock)
{
    this->minimum_stock = minimum_stock;
};

int Product::getMaximumStock()
{
    return this->maximum_stock;
};

void Product::setMaximumStock(int maximum_stock)
{
    this->maximum_stock = maximum_stock;
};

int Product::getProductFamilyId()
{
    return this->product_family_id;
};

void Product::setProductFamilyId(int product_family_id)
{
    this->product_family_id = product_family_id;
};

int Product::getQuantityInStock()
{
    return 0;
};

ProductSqlite::ProductSqlite(string uri)
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

vector<Product> ProductSqlite::getAllProducts(int product_family_id)
{
    sqlite3* db;
    sqlite3_stmt *stmt;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");
    vector<Product> records;

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    if (exit) {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return records;
    }
    else {
        cout << "Opened database successfully!";
    }

    if (product_family_id != -1)
    {
        ss << "SELECT * FROM product_family WHERE product_family_id = " << product_family_id << ";";
    }
    else
    {
        ss << "SELECT * FROM product_family;";
    }

    sql = ss.str().c_str();
    exit = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not fetch products from database." << sqlite3_errmsg(db) << endl;
        sqlite3_free(zErrMsg);
        return records;
    }

    while ((exit = sqlite3_step(stmt)) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        const char* code = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        const double price = sqlite3_column_double(stmt, 3);
        const char* barcode = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
        const int minimum_stock = reinterpret_cast<const int>(sqlite3_column_text(stmt, 5));
        const int maximum_stock = reinterpret_cast<const int>(sqlite3_column_text(stmt, 6));
        const int product_family_id = reinterpret_cast<const int>(sqlite3_column_text(stmt, 6));
        records.push_back(Product(id, code, name, price, barcode ? barcode : NULL, minimum_stock ? minimum_stock : NULL,
                        maximum_stock ? maximum_stock : NULL, product_family_id));
    }

    if (exit != SQLITE_DONE) {
        cerr << "Could not fetch products from database." << sqlite3_errmsg(db) << endl;
        // if you return/throw here, don't forget the finalize
    }

    sqlite3_finalize(stmt);

    sqlite3_close(db);

    return records;
};

vector<Product> ProductSqlite::getAllProductsByFamily(int product_family_id)
{
    return ProductSqlite::getAllProducts(product_family_id);
};

Product ProductSqlite::getProductById(int id)
{
    sqlite3* db;
    sqlite3_stmt *stmt;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");
    Product product;

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    if (exit) {
        cout << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return product;
    }
    else {
        cout << "Opened database successfully!";
    }

    ss << "SELECT * FROM product WHERE id = " << id << ";";
    sql = ss.str().c_str();
    exit = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not fetch product from database." << sqlite3_errmsg(db) << endl;
        sqlite3_free(zErrMsg);
        return product;
    }

    while ((exit = sqlite3_step(stmt)) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        const char* code = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        const double price = sqlite3_column_double(stmt, 3);
        const char* barcode = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
        const int minimum_stock = reinterpret_cast<const int>(sqlite3_column_text(stmt, 5));
        const int maximum_stock = reinterpret_cast<const int>(sqlite3_column_text(stmt, 6));
        const int product_family_id = reinterpret_cast<const int>(sqlite3_column_text(stmt, 7));

        product.setId(id);
        product.setCode(code);
        product.setName(name);
        product.setPrice(price);
        product.setBarcode(barcode ? barcode : NULL);
        product.setMinimumStock(minimum_stock ? minimum_stock : NULL);
        product.setMaximumStock(maximum_stock ? maximum_stock : NULL);
        product.setProductFamilyId(product_family_id);
    }

    if (exit != SQLITE_DONE) {
        cerr << "Could not fetch product from database." << sqlite3_errmsg(db) << endl;
        // if you return/throw here, don't forget the finalize
    }

    sqlite3_finalize(stmt);

    sqlite3_close(db);

    return product;
};

int ProductSqlite::createProduct(Product product)
{
    sqlite3* db;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    ss << "INSERT INTO product VALUES(" << NULL << ","
        << product.getCode() << ","
        << product.getName() << ","
        << product.getPrice() << ","
        << product.getBarcode() << ","
        << product.getMinimumStock() << ","
        << product.getMaximumStock() << ","
        << product.getProductFamilyId()
        << ");";
    sql = ss.str().c_str();
    exit = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not add new product in the database." << endl;
        sqlite3_free(zErrMsg);
        return SQLITE_ABORT;
    }
    else
        cout << "Product created Successfully!" << endl;

    sqlite3_close(db);

    return 0;
};

int ProductSqlite::updateProduct(Product product)
{
    sqlite3* db;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    ss << "UPDATE product SET code = " << product.getCode() << ","
        << "name = " << product.getName() << ","
        << "price = " << product.getName() << ","
        << "barcode = " << product.getName() << ","
        << "minimum_stock = " << product.getName() << ","
        << "maximum_stock = " << product.getName() << ","
        << "product_family_id = " << product.getName()
        << " WHERE id = " << product.getId()
        << ";";
    sql = ss.str().c_str();
    exit = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not update this product in the database." << endl;
        sqlite3_free(zErrMsg);
        return SQLITE_ABORT;
    }
    else
        cout << "Product updated Successfully!" << endl;

    sqlite3_close(db);

    return 0;
};

int ProductSqlite::deleteProduct(Product product)
{
    sqlite3* db;
    char* zErrMsg = 0;
    const char *sql;
    int exit;
    stringstream ss("");

    exit = sqlite3_open("Mobile-ERP-Store.db", &db);

    ss << "DELETE FROM product WHERE id = " << product.getId() << ";";
    sql = ss.str().c_str();
    exit = sqlite3_exec(db, sql, NULL, 0, &zErrMsg);

    if (exit != SQLITE_OK)
    {
        cerr << "Could not delete this product in the database." << endl;
        sqlite3_free(zErrMsg);
        return SQLITE_ABORT;
    }
    else
        cout << "Product deleted Successfully!" << endl;

    sqlite3_close(db);

    return 0;
};
