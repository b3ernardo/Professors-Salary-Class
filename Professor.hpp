#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP
#include <string>
#include <vector>
using namespace std;

class Professor {
  private:
    string nome;
  public:
    Professor(string n) {this->nome = n;}
    string getName() const {return this->nome;}
    virtual double getSalario() = 0;
    virtual ~Professor() {};
};

class ProfHorista : public Professor {
  private:
    double nrNorasTrabalhadas;
    double valorHora;
  public:
    ProfHorista(string n, double nht, double vh) : Professor(n) {this->nrNorasTrabalhadas = nht; this->valorHora = vh;}
    double getSalario() {return this->nrNorasTrabalhadas * this->valorHora;}
    virtual ~ProfHorista() {};
};

class ProfIntegral : public Professor {
  private:
    double salarioMensal;
  public:
    ProfIntegral(string n, double sm) : Professor(n) {this->salarioMensal = sm;}
    double getSalario() {return this->salarioMensal;}
    virtual ~ProfIntegral() {};
};

#endif