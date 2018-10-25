#ifndef MVIA_H
#define MVIA_H

#include "element.h"

class Mvia : public Element {
private :
	long double m_d;
	std::string m_net1;
public :
	Mvia(std::string _label,
		std::string _type,
		short _mirrorx,
		short _r,
		short _nport,
		long double _d);
	~Mvia();
	long double getD(void);
	std::string getNet1(void);
	int setNet1(std::string _net1);
////////////////////////////////////////////////////////////////////////////////
	long double getW(void);
	long double getW1(void);
	long double getW2(void);
	long double getW3(void);
	long double getW4(void);
	long double getL(void);
	long double getS(void);
	long double getRi(void);
	long double getRo(void);
	short getAlpha(void);
	std::string getNet2(void);
	std::string getNet3(void);
	std::string getNet4(void);
	int setNet2(std::string _net2);
	int setNet3(std::string _net3);
	int setNet4(std::string _net4);
};

#endif

