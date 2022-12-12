#ifndef PRODUCT_FAMILY_HPP
#define PRODUCT_FAMILY_HPP

#endif // PRODUCT_FAMILY_HPP

#include <vector>
#include <string>

using namespace std;

class ProductFamily
{
    // Attributes
    private:
        int id;
        string name;

    // Methods
    public:
        int getId();
        void setId(int id);
        string getName();
        void setName(string name);
        ProductFamily();
        ProductFamily(int id, string name);
};


class ProductFamilyDAO
{
    // Attributes
    private:
        vector<ProductFamily> records;

        // Methods
    public:
        virtual int createProductFamily(ProductFamily product_family) = 0;
        virtual int updateProductFamily(ProductFamily product_family) = 0;
        virtual int deleteProductFamily(ProductFamily product_family) = 0;
        virtual ProductFamily getProductFamilyById(int id) = 0;
        virtual vector<ProductFamily> getAllProductFamilies() = 0;
};

class ProductFamilySqlite:ProductFamilyDAO
{
    // Attributes
    protected:
        string uri;

        // Methods
    public:
        vector<ProductFamily> getAllProductFamilies();
        ProductFamily getProductFamilyById(int id);
        int createProductFamily(ProductFamily product_family);
        int updateProductFamily(ProductFamily product_family);
        int deleteProductFamily(ProductFamily product_family);
        // Constructor
        ProductFamilySqlite(string uri);
};
