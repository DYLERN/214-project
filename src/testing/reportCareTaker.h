#ifndef __REPORTCARETAKER_H__
#define __REPORTCARETAKER_H__

#include "../pch.h"
#include "report.h"

class reportCareTaker{

private:
std::vector<report> simulationReports;
std::vector<report> windTunnelReports;

public:
void addSimReport(report);
report getSimReport(int);
void addWindReport(report);
report getWindReport(int);

};

#endif // __REPORTCARETAKER_H__
