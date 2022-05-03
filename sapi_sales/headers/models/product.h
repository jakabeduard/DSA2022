//
// Created by Last Gen Networks on 2/24/2022.
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "errors.h"
#include "constans.h"




#ifndef MAIN_C_PRODUCT_H
#define MAIN_C_PRODUCT_H

enum productType {
    VEGETABLE,
    FRUIT,
    SCHOOL,
    OBJECT

};

typedef struct {
    char id[10];
    char name[20];
    enum productType type;
    unsigned int amount;
    time_t creationDate;
} Product;


char * getProductType( enum productType type);
void createProduct(Product **product);
void setProductData(Product *product, char *name, enum productType type,unsigned int amount);
void printProduct (Product* product);
void deleteProduct(Product ** product);
#endif //MAIN_C_PRODUCT_H
