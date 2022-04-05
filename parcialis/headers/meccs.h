//
// Created by Last Gen Networks on 4/4/2022.
//

#ifndef DSA2022_MECCS_H
#define DSA2022_MECCS_H

#ifndef MECCS_MECCS_H
#define MECCS_MECCS_H

#include <stdlib.h>
#include <stdio.h>
typedef struct {
    int ora;
    int perc;
}Kezdes;

typedef struct {
    int nap ;
    int ho;
    int ev;
}Datum;

typedef enum {
    BAJNOK, KUPA
}Type;
typedef struct {
    int id;
    Datum datum;
    Kezdes kezdes;
    int belepo ;
    Type type;
    int nezok;

}Meccs;
char *getType(Type tipus);
void createMeccs(Meccs **zoldseg);
void setDataMeccs(Meccs  *meccs, int id, Datum datum, Kezdes kezdes, int belepo, Type type, int nezok);
void printMeccs( Meccs *meccs, char *destination);
void deleteMeccs(Meccs **meccs);

#endif //MECCS_MECCS_H

#endif //DSA2022_MECCS_H
