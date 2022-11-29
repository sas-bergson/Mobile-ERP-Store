# Database module for ERP-Store

### Wed Nov 16, 14:10 initialized the structure of the database module
 - created all static repositories(assets, build, docs, include, lib, obj, src, tests ...)
 - initialized configuration for doxygen

 ### Wed Nov 16 16:00 initialized the API interface of the module
 - created abstract classes for generic databases, tables, fields 
 - created databaseTypes, FieldTypes, Fieldsconstraints

  ### Wed Nov 16 16:20 initialized implementation of the API for SQLite
 - created classes for sqlite databases
 - created integerField, textField, numericField 