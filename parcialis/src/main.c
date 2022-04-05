#include "meccs.h"
int main() {
    Meccs  *meccs;

    createMeccs(&meccs);
    Datum datum={ 20 , 11,2022 };
    Kezdes  kezdes={20,30};
    setDataMeccs(meccs,1,datum, kezdes,150,BAJNOK,507);
    printMeccs(meccs,"CON");
    deleteMeccs(meccs);

    return 0;
}
