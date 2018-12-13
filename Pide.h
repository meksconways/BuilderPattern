//
// Created by macbook  on 2018-12-13.
//

#ifndef BUILDER_PIDE_H
#define BUILDER_PIDE_H

#include <iostream>
#include <memory>
#include <iostream>

using namespace std;

class Pide {

private:
    string m_tur;
    string m_baharat;
    int m_porsiyon;

public:
    void setTur(const string &tur){
        m_tur = tur;
    }
    void setBaharat(const string &baharat){
        m_baharat = baharat;
    }
    void setPorsiyon(const int &porsiyon){
        m_porsiyon = porsiyon;
    }

    void ac() const {

        cout << m_porsiyon << " porsiyon, "<<m_baharat<<" baharatlı, "<<m_tur<<" pideniz hazır."<<endl;
    }


};


#endif //BUILDER_PIDE_H
