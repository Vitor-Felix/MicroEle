#include <genlib.h>

int main(){
    GENLIB_DEF_LOFIG("somador_1bit");
    GENLIB_LOCON("a",IN,"a");
    GENLIB_LOCON("b",IN,"b");
    GENLIB_LOCON("c",IN,"c");
    GENLIB_LOCON("s",OUT,"s");
    GENLIB_LOCON("r",OUT,"r");
    GENLIB_LOCON("vdd",IN,"vdd");
    GENLIB_LOCON("vss",IN,"vss");
    
    GENLIB_LOINS("inv_x1","inv1","a","sinv1","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv2","b","sinv2","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv3","c","sinv3","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv4","snand1","sinv4","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv5","snand2","sinv5","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv6","snand3","sinv6","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv7","snand4","sinv7","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv8","snand9","sinv8","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv9","snand10","sinv9","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv10","snand12","sinv10","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv11","snand13","sinv11","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv12","snand14","sinv12","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv13","snand15","sinv13","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv14","snand20","sinv14","vdd","vss",NULL);
    GENLIB_LOINS("inv_x1","inv15","snand21","sinv15","vdd","vss",NULL);

   
    GENLIB_LOINS("na2_x1","nand1","sinv2","c","snand1","vdd","vss",NULL); 
    GENLIB_LOINS("na2_x1","nand2","b","sinv3","snand2","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand3","sinv2","sinv3","snand3","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand4","b","c","snand4","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand5","sinv1","sinv4","snand5","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand6","sinv1","sinv5","snand6","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand7","a","sinv6","snand7","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand8","a","sinv7","snand8","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand9","snand5","snand6","snand9","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand10","snand7","snand8","snand10","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand11","sinv8","sinv9","s","vdd","vss",NULL);

    GENLIB_LOINS("na2_x1","nand12","b","c","snand12","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand13","sinv2","c","snand13","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand14","b","sinv3","snand14","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand15","b","c","snand15","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand16","sinv1","sinv10","snand16","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand17","a","sinv11","snand17","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand18","a","sinv12","snand18","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand19","a","sinv13","snand19","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand20","snand16","snand17","snand20","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand21","snand18","snand19","snand21","vdd","vss",NULL);
    GENLIB_LOINS("na2_x1","nand22","sinv14","sinv15","r","vdd","vss",NULL);

GENLIB_SAVE_LOFIG();
return 0;
}

