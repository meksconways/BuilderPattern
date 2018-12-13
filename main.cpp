#include <iostream>
#include <memory>
#include <iostream>
#include "Pide.h"
#include "PideBuilder.h"
#include "KasarliPideBuilder.h"
#include "YumurtaliPideBuilder.h"
#include "Pisir.h"

using namespace std;



int main() {

    Pisir pisir;
    KasarliPideBuilder kpb;
    pisir.pideYap(&kpb);
    pisir.pideAc();

    YumurtaliPideBuilder ypb;
    pisir.pideYap(&ypb);
    pisir.pideAc();


    return 0;
}