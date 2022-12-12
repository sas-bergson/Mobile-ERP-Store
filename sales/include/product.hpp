#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#endif // PRODUCT_HPP

#include <vector>
#include <string>

using namespace std;

class Product
{
    // Attributes
    private:
        int id;
        string code;
        string name;
        double price;
        string barcode;
        int minimum_stock;
        int maximum_stock;
        int product_family_id;

    // Methods
    public:
        int getId();
        void setId(int id);
        string getCode();
        void setCode(string code);
        string getName();
        void setName(string name);
        double getPrice();
        void setPrice(double price);
        string getBarcode();
        void setBarcode(string barcode);
        int getMinimumStock();
        void setMinimumStock(int minimum_stock);
        int getMaximumStock();
        void setMaximumStock(int maximum_stock);
        int getProductFamilyId();
        void setProductFamilyId(int product_family_id);
        // Class methods
        int getQuantityInStock();

        // Constructors
        Product();
        Product(int id, string code, string name, double price, string barcode,
                int minimum_stock, int maximum_stock, int product_family_id);
};

class ProductDAO
{
    // Attributes
    protected:
        vector<Product> records;

        // Methods
    public:
        virtual int createProduct(Product product) = 0;
        virtual int updateProduct(Product product) = 0;
        virtual int deleteProduct(Product product) = 0;
        virtual Product getProductById(int id) = 0;
        virtual vector<Product> getAllProducts(int product_family_id) = 0;
};

class ProductSqlite:ProductDAO
{
    // Attributes
    protected:
        string uri;

        // Methods
    public:
        vector<Product> getAllProducts(int product_family_id = NULL);
        vector<Product> getAllProductsByFamily(int product_family_id);
        Product getProductById(int id);
        int createProduct(Product product);
        int updateProduct(Product product);
        int deleteProduct(Product product);
        // Constructor
        ProductSqlite(string uri);
};
