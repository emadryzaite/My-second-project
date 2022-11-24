#ifndef FUNKCIJOS_LIST_H
#define FUNKCIJOS_LIST_H

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>
#include <chrono>
#include <list>

static std::chrono::steady_clock::time_point pradzia;


using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::ifstream;
using std::left;
using std::setprecision;
using std::setw;
using std::sort;
using std::stoi;
using std::string;
using std::stringstream;
using std::vector;
using std::ofstream;
using std::to_string;
using std::list;

class irasas {
  private:
  string vardas;
  string pavarde;
  vector<int> paz;
  int egzas;
  float galut;

  public:
  irasas() : egzas(0) {};
  string getVardas() const { return vardas;}
  void setVardas(string v) { vardas = v;}

  string getPavarde() const { return pavarde;}
  void setPavarde(string p) { pavarde = p;}
  
  int getEgz() const { return egzas;}
  void setEgz(int e) { egzas = e;}

  vector <int> getNd() const { return paz;}
  void setNd(vector <int> n) {paz =n;}

  float getGlt() const { return galut;}
  void setGlt(float g) { galut = g;}

  ~irasas() {};


};
struct lyginimasPavard{
    bool operator()(const irasas& a, const irasas& b){return(b.getPavarde().compare(a.getPavarde()));}
};

void nuskaitymas(list<irasas> &Stud, string failas);
bool vardInfo(string skai);
string vardIrasymas(string irasymas);
bool skaiInfo(string pazym);
bool skInfo(string pazym);
int skIrasymas(string irasymas, bool);
int suma(vector<int> paz);
float vidurkis(vector<int> paz);
float mediana(vector<int> paz);
void vidMed(list<irasas> &Stud);
float galutinis(float, int egzas);
int atsitiktiniai();
int pavardTvarka(list<irasas> Stud);
int vardTvarka(list<irasas> Stud);
void spausdinimas(list<irasas> Stud, string failas);
void papildoma(list<irasas> &Stud);
bool patvirtinimas();
void rikiavimas(list<irasas> &Stud);
void generavimas(int sk, string &failas);
int pasirinkimas();
int skIrasymas();
bool skGenTikrinimas(string pazym);
void skirstymas1(list <irasas> Stud, list <irasas> &Vargsiukai, list <irasas> &Kietiakai);
void skirstymas2(list <irasas> &Stud, list <irasas> &Kietiakai);
void skirstymas3(list <irasas> &Stud, list <irasas> &Kietiakai);

#endif
