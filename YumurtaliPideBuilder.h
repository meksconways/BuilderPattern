//
// Created by macbook  on 2018-12-13.
//

#ifndef BUILDER_YUMURTALIPIDEBUILDER_H
#define BUILDER_YUMURTALIPIDEBUILDER_H
#include <iostream>
#include <memory>
#include <iostream>
#include "PideBuilder.h"

using namespace std;

class YumurtaliPideBuilder : public PideBuilder{
public:
    virtual ~YumurtaliPideBuilder(){

    };
    virtual void buildTur(){
        m_pide->setTur("Yumurtali");
    }
    virtual void buildBaharat(){
        m_pide->setBaharat("Kirmizi Biber");
    }
    virtual void buildPorsiyon(){
        m_pide->setPorsiyon(2);
    }
};


#endif //BUILDER_YUMURTALIPIDEBUILDER_H
