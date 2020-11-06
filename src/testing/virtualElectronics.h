#ifndef __VIRTUALELECTRONICS_H__
#define __VIRTUALELECTRONICS_H__

#include "virtualParts.h"

class virtualElectronics : public virtualParts{

protected:
float powerDraw;

public:
virtualElectronics(float, float, std::string, float, float);
float getDraw();

};

#endif // __VIRTUALELECTRONICS_H__
