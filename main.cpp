#include <iostream>
#include <memory>
#include <iostream>

using namespace std;

class Pide{

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

class PideBuilder{

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

class KasarliPideBuilder : public PideBuilder{

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

class YumurtaliPideBuilder : public PideBuilder {

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

class Pisir{

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