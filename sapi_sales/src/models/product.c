//
// Created by Last Gen Networks on 2/24/2022.
//

#include "../../headers/models/product.h"

char *getProductType(enum productType type) {
    switch (type) {


        ////pl  lehetne -e  ugy a sector hogy 0,1,2 stb?


        case VEGETABLE:
            return "Vegetable";
        case FRUIT:
            return "Fruit";
        case SCHOOL:
            return "School";
        case OBJECT:
            return "Object";
        default:
            return "Undefined";

    }
}

//Product *createProduct(char *id, char *name, enum productType type, unsigned int amonunt) {
//
//}

    void createProduct(Product **product) {
        *product=malloc(sizeof (Product));
        if (!*product){
            printErrorMassage( MEMORY_ALLOCATION);

        }
       /// (*product)->id = ++numberOfProducts; //// ez igy hibas = jel alahuzva

    }


void setProductData(Product *product, char *name, enum productType type, unsigned int amount) {
    if(!product){
    printErrorMassage(NULL_POINTER_EXCEPTION);
    }
    strcpy(product->name, name);
    product->type=type;
    product->amount=amount;
    product->creationDate=time(0);


}

void printProduct(Product *product) {
    if (!product){
        printErrorMassage(NULL_POINTER_EXCEPTION);
    }
   // freopen(destination, "w", stdout);/// nem  tudom  hogy  mi az a destenation .... nem  kellene  dired eyg file neve oda ;/?
    printf(  "\t%s details:\n"
             "\t\t-ID: %i\n"
             "\t\t- Type: %s\n"
             "\t\t- Amout: %u\n"
             "\t\t- Creation date: %ld\n",
             product->name,
             product->id,
             getProductType(product->type),
             product->amount,
             product->creationDate);
    freopen(CON,"w", stdout);

}

void deleteProduct(Product **product) {
    free(*product);
    *product=NULL;/// miert  kelll  ezt?



}
