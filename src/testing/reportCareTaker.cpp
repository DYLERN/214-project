#include "reportCareTaker.h"

void reportCareTaker::addSimReport(report r){

    simulationReports.push_back(r);

}

report reportCareTaker::getSimReport(int i){

    return simulationReports.at(i);

}

void reportCareTaker::addWindReport(report r){

    windTunnelReports.push_back(r);

}

report reportCareTaker::getWindReport(int i){

    return simulationReports.at(i);

}