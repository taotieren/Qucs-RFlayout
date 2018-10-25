#include "mstep.h"
using namespace std;

Mstep::Mstep(string _label,
			string _type,
			short _mirrorx,
			short _r,
			short _nport,
			long double _w1,
			long double _w2) :
	Element(_label, _type, _mirrorx, _r, _nport),
	m_w1(_w1),
	m_w2(_w2)
	{}

Mstep::~Mstep() {
	}

long double Mstep::getW1(void) {
	return(m_w1);
	}

long double Mstep::getW2(void) {
	return(m_w2);
	}

string Mstep::getNet1(void) {
	return(m_net1);
	}

string Mstep::getNet2(void) {
	return(m_net2);
	}

int Mstep::setNet1(string _net1) {
	m_net1=_net1;
	return(0);
	}

int Mstep::setNet2(string _net2) {
	m_net2=_net2;
	return(0);
	}

////////////////////////////////////////////////////////////////////////////////

long double Mstep::getW(void) {
	return(0);
	}
long double Mstep::getW3(void) {
	return(0);
	}
long double Mstep::getW4(void) {
	return(0);
	}
long double Mstep::getL(void) {
	return(0);
	}
long double Mstep::getD(void) {
	return(0);
	}
long double Mstep::getS(void) {
	return(0);
	}
long double Mstep::getRi(void) {
	return(0);
	}
long double Mstep::getRo(void) {
	return(0);
	}
short Mstep::getAlpha(void) {
	return(0);
	}
string Mstep::getNet3(void) {
	return("");
	}
string Mstep::getNet4(void) {
	return("");
	}
int Mstep::setNet3(string _net3) {
	return(1);
	}
int Mstep::setNet4(string _net4) {
	return(1);
	}
