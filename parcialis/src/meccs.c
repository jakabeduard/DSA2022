//
// Created by Last Gen Networks on 4/4/2022.
//

#include "../headers/meccs.h"

//#include "meccs.h"
char *getType(Type tipus) {
    switch (tipus) {
        case BAJNOK: return "BAJNOK";
        case KUPA: return "KUPA";

    }
    return 0;
}


void createMeccs(Meccs **meccs) {
    (*meccs)=(Meccs*)malloc(sizeof (Meccs));

    if (!meccs){printf("sikertelen helyfoglalas");}


}

void setDataMeccs(Meccs *meccs, int id, Datum datum, Kezdes kezdes, int belepo, Type type, int nezok) {

    if (!meccs){printf("NUllpointer  exception");}

    meccs->id=id;
    meccs->datum=datum;
    meccs->kezdes=kezdes;
    meccs->belepo=belepo;
    meccs->type=type;
    meccs->nezok=nezok;



}

void printMeccs(Meccs *meccs  , char *destination) {

    if (!meccs){printf("Null pointer  exception");}
    freopen(destination, "w", stdout);

    printf( "ID:%i \n "
            "Date:%i %i %i \n"
            "Kezdes: %i%i \n"
            "Belepo: %i\n"
            "Tipus %s\n"
            "Nezok: %d",
            meccs->id,
            meccs->datum.ev , meccs->datum.ho, meccs->datum.nap,
            meccs->kezdes.ora, meccs->kezdes.perc,

            meccs->belepo,getType(meccs->type) , meccs->nezok);




}

void deleteMeccs(Meccs **meccs) {
    free(*meccs);
    *meccs=NULL;

}

