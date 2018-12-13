//
// Created by macbook  on 2018-12-13.
//

#ifndef BUILDER_KASARLIPIDEBUILDER_H
#define BUILDER_KASARLIPIDEBUILDER_H

#include <iostream>
#include <memory>
#include <iostream>
#include "PideBuilder.h"

using namespace std;

class KasarliPideBuilder : public PideBuilder {
public:
    virtual ~KasarliPideBuilder(){

    };

    virtual void buildTur(){
        m_pide->setTur("Kasarlı");
    }
    virtual void buildBaharat(){
        m_pide->setBaharat("Nane");
    }
    virtual void buildPorsiyon(){
        m_pide->setPorsiyon(4);
    }
};


#endif //BUILDER_KASARLIPIDEBUILDER_H
