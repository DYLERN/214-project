#include "FormulaOneInterface.h"

void FormulaOneInterface::demoBuildAndTest()
{
    std::array<std::shared_ptr<RacingCarConstructor>, numCars> blueprints;
    std::array<std::shared_ptr<Engineer>, numCars> engineers;
    std::array<std::string, numCars> names = {"Alan", "Connor", "Liam", "Dylan", "Nic", "Josh", "Alex", "Ben", "Billy", "Rob"};
    std::array<std::string, numCars> teams = {"RedBull", "Redbull", "Mercedez", "Mercedez", "Ford", "Ford", "Lamborghini", "Lamborghini", "Ferrari", "Ferrari"};
    std::array<std::string, numCars> models = {"FX04", "FX05", "FX06", "FX07", "FX08", "FX09", "FX10", "FX11", "FX12", "FX13"};

    for (size_t i = 0; i < numCars; i++)
    {
        blueprints[i] = std::make_shared<CurrentCarConstructor>();
        engineers[i] = std::make_shared<Engineer>(blueprints[i].get());
        allCars[i] = std::shared_ptr<FormulaOneCar>(engineers[i]->constructCar());
        allCars[i]->carModel = models[i];
        allCars[i]->driverName = names[i];
        allCars[i]->team = teams[i];
    }

    car = allCars[0];

    reportCareTaker caretaker;

    windTunnelTest test(allCars[0].get());

    caretaker.addWindReport(test.testAcceleration());
    caretaker.addWindReport(test.testBreaking());
}

void FormulaOneInterface::demoLogistics()
{
    std::shared_ptr<Plane> plane = std::make_shared<Plane>("AFO-903");
    std::vector<std::shared_ptr<Truck>> trucks = {std::make_shared<Truck>("KF 12 IF"), std::make_shared<Truck>("PO 85 TB")};
    LogisticsManager manager(plane, trucks);

    manager.addCar(car);
    manager.addInventoryItem(std::make_shared<Equipment>("Flood Lights", 200, 20));
    manager.addInventoryItem(std::make_shared<Equipment>("Fuel Canisters", 270, 0.37));
    manager.addInventoryItem(std::make_shared<Equipment>("Fire Extinguishers", 40, 1));

    Destination *australia = new Destination{
        "Australia",
        INTERNATIONAL};
    manager.setDestination(std::shared_ptr<Destination>(australia), "Brighton");
    manager.dispatch();
}

void FormulaOneInterface::demoRacingStrategy()
{
    Context *Australia = new Context("Mercedes");
    Australia->setStateAndStrategy(new Soft("Soft"), new TyreBlast);
    Australia->takeAction();
    Australia->changeTyreState("Hard");

    Context *Dubai = new Context("Ferrarie");
    Dubai->setStateAndStrategy(new Medium("Medium"), new HighTemperature);
    Dubai->takeAction();
    Dubai->changeTyreState("Soft");
    delete Australia;
    delete Dubai;
}

void FormulaOneInterface::demoRacing()
{
    FormulaOneCar** rawArray = new FormulaOneCar*[numCars];
    int index = 0;
    for(auto car : allCars)
    {
        rawArray[index++] = car.get();
    }

    Race race(rawArray, "Australian Grand Prix", "Australia");
    race.testTimes();
    race.testTimes();
    race.testTimes();

    race.testTimes();
    race.testTimes();
    race.testTimes();

    std::array<std::shared_ptr<results>,10> reports = race.commenceRace();

    for(int i = 0; i < 10; i++){
        reports[i]->print();
    }
}