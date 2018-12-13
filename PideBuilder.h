//
// Created by macbook  on 2018-12-13.
//

#ifndef BUILDER_PIDEBUILDER_H
#define BUILDER_PIDEBUILDER_H
#include <iostream>
#include <memory>
#include <iostream>
#include "Pide.h"

using namespace std;

class PideBuilder {
protected:
    unique_ptr<Pide> m_pide;

public:

    virtual ~PideBuilder(){};
    virtual void buildTur() = 0;
    virtual void buildBaharat() = 0;
    virtual void buildPorsiyon() = 0;

    void yeniPideOlustur(){
        m_pide = make_unique<Pide>();
    }
    Pide *getPide(){
        return m_pide.release();
    }
};


#endif //BUILDER_PIDEBUILDER_H
