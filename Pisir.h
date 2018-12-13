//
// Created by macbook  on 2018-12-13.
//

#ifndef BUILDER_PISIR_H
#define BUILDER_PISIR_H

#include <iostream>
#include <memory>
#include <iostream>
#include "PideBuilder.h"

using namespace std;

class Pisir {
public:
    void pideAc(){
        m_pideBuilder->getPide()->ac();
    }
    void pideYap(PideBuilder *pb){
        m_pideBuilder = pb;
        m_pideBuilder->yeniPideOlustur();
        m_pideBuilder->buildBaharat();
        m_pideBuilder->buildPorsiyon();
        m_pideBuilder->buildTur();
    }

private:
    PideBuilder *m_pideBuilder;
};


#endif //BUILDER_PISIR_H
