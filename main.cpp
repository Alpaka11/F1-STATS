#include <iostream>
#include <vector>

class Team
{
private:
    std::string team_name, team_base, team_powerunit, team_chief;
    int team_firstentry, team_wccnumber, team_wins;
public:
    Team(){
    };
    ~Team(){
    };
    Team(const std::string &teamName, const std::string &teamBase, const std::string &teamPowerunit,
         const std::string &teamChief, int teamFirstentry, int teamWccnumber, int teamWins) : team_name(teamName),
                                                                                              team_base(teamBase),
                                                                                              team_powerunit(
                                                                                                      teamPowerunit),
                                                                                              team_chief(teamChief),
                                                                                              team_firstentry(
                                                                                                      teamFirstentry),
                                                                                              team_wccnumber(
                                                                                                      teamWccnumber),
                                                                                              team_wins(teamWins) {
    }

    const std::string &getTeamName() const {
        return team_name;
    }

    const std::string &getTeamBase() const {
        return team_base;
    }

    const std::string &getTeamPowerunit() const {
        return team_powerunit;
    }

    const std::string &getTeamChief() const {
        return team_chief;
    }

    int getTeamFirstentry() const {
        return team_firstentry;
    }

    int getTeamWccnumber() const {
        return team_wccnumber;
    }

    int getTeamWins() const {
        return team_wins;
    }
    Team(const Team &team)
    {
        this->team_name=team.team_name;
        this->team_base=team.team_base;
        this->team_powerunit=team.team_powerunit;
        this->team_chief=team.team_chief;
        this->team_firstentry=team.team_firstentry;
        this->team_wccnumber=team.team_wccnumber;
        this->team_wins=team.team_wins;
    }
    Team &operator=(const Team &team)
    {
        this->team_name=team.team_name;
        this->team_base=team.team_base;
        this->team_powerunit=team.team_powerunit;
        this->team_chief=team.team_chief;
        this->team_firstentry=team.team_firstentry;
        this->team_wccnumber=team.team_wccnumber;
        this->team_wins=team.team_wins;
        return *this;
    }
    friend std::ostream &operator<<(std::ostream &out, const Team &team) {
        out << "Nume: " << team.team_name << ", Baza in: " << team.team_base<<", Motorul este: "<<team.team_powerunit<<", Team Principal este: "<<team.team_chief<<", A intrat in competitie in: "<<team.team_firstentry<<", Numar campionate: "<<team.team_wccnumber<<", Numar victorii: "<<team.team_wins<<std::endl<<"---------"<<std::endl;
        return out;
    }
};

class Driver{
private:
    std::string driver_name, driver_team;
    int driver_wins, driver_podiums, driver_wdcnumber;

public:
    Driver(){
    };
    ~Driver(){
    };

    Driver(const std::string &driverName, const std::string &driverTeam, int driverWins, int driverPodiums,
           int driverWdcnumber) : driver_name(driverName), driver_team(driverTeam), driver_wins(driverWins),
                                  driver_podiums(driverPodiums), driver_wdcnumber(driverWdcnumber) {
    }

    const std::string &getDriverName() const {
        return driver_name;
    }

    const std::string &getDriverTeam() const {
        return driver_team;
    }

    int getDriverWins() const {
        return driver_wins;
    }

    int getDriverPodiums() const {
        return driver_podiums;
    }

    int getDriverWdcnumber() const {
        return driver_wdcnumber;
    }

    friend std::ostream &operator<<(std::ostream &out, const Driver &driver) {
        out << "Nume pilot: " << driver.driver_name << ", echipa: " << driver.driver_team<<", nr de victorii: "<<driver.driver_wins<<", nr de podiumuri: "<<driver.driver_podiums<<", nr de campionate "<<driver.driver_wdcnumber<<std::endl<<"---------"<<std::endl;
        return out;
    }
    Driver(const Driver &driver)
    {
        this->driver_name=driver.driver_name;
        this->driver_team=driver.driver_name;
        this->driver_wdcnumber=driver.driver_wdcnumber;
        this->driver_podiums=driver.driver_podiums;
        this->driver_wins=driver.driver_wins;
    }
    Driver &operator=(const Driver &driver) {
        this->driver_name = driver.driver_name;
        this->driver_team = driver.driver_name;
        this->driver_wdcnumber = driver.driver_wdcnumber;
        this->driver_podiums = driver.driver_podiums;
        this->driver_wins = driver.driver_wins;
        return *this;
    }

    void changeTeam(const std::string &newTeam)
    {
        this->driver_team = newTeam;
    }


    void addWin()
    {
        this->driver_wins+=1;
        this->driver_podiums+=1;
    }
    void swapDrivers(Driver &driver)
    {
        std::string aux;
        aux = this->driver_team;
        this->driver_team = driver.driver_team;
        driver.driver_team = aux;
    }

};

class Circuit{
private:
    std::string circuit_name, circuit_country;
    int circuit_corners;
public:
    Circuit(){
    };
    ~Circuit(){
    };

    Circuit(const std::string &circuitName, const std::string &circuitCountry, int circuitCorners) : circuit_name(
            circuitName), circuit_country(circuitCountry), circuit_corners(circuitCorners) {
    }

    const std::string &getCircuitName() const {
        return circuit_name;
    }

    const std::string &getCircuitCountry() const {
        return circuit_country;
    }

    int getCircuitCorners() const {
        return circuit_corners;
    }

    friend std::ostream &operator<<(std::ostream &out, const Circuit &circuit) {
        out << "Nume circuit: "<<circuit.circuit_name<<"si are un numar de "<<circuit.circuit_corners<<" viraje"<<std::endl<<"---------"<<std::endl;
        return out;
    }

    Circuit(const Circuit &circuit)
    {
        this->circuit_corners=circuit.circuit_corners;
        this->circuit_country=circuit.circuit_country;
        this->circuit_name=circuit.circuit_name;
    }
    Circuit &operator=(const Circuit &circuit) {
        this->circuit_corners=circuit.circuit_corners;
        this->circuit_country=circuit.circuit_country;
        this->circuit_name=circuit.circuit_name;
        return *this;
    }

    void newCorner()
    {
        this->circuit_corners+=1;
    }
};
int main() {
    Team RedBull("RedBull","Milton Keynes","Honda RBPT","Christian Horner",1997,6,115);
    Team Ferrari("Scuderia Ferrari", "Maranello","Ferrari","Frederic Vasseur",1950, 16,244);
    Team Mercedes("Mercedes-AMG PETRONAS","Brackley","Mercedes","Toto Wolff",1970,8,116);
    Team Aston("Aston Martin Aramco","Silverstone","Mercedes","Mike Krack",2018,0,1);
    std::cout<<"Numar victorii Redbull:" <<RedBull.getTeamWins()<<std::endl;
    std::cout<<"Mercedes are baza localizata in:" <<Mercedes.getTeamBase()<<std::endl;
    Team RB(RedBull);
    Team Haas;
    Haas.operator=(Ferrari);
    std::cout<<RB;
    std::cout<<Haas;

    Driver Max("Max Verstappen", "RedBull", 56, 100, 3);
    Driver Fernando("Fernando Alonso", "Aston Martin Aramco", 32, 106, 2);
    Driver Charles("Charles Leclerc", "Scuderia Ferrari", 5, 31, 0);
    Driver Lewis("Lewis Hamilton", "Mercedes-AMG PETRONAS", 103, 197, 7);
    Driver Carlos("Carlos Sainz", "Scuderia Ferrari", 2, 19, 0);

    std::cout<<Max<<std::endl;
    Lewis.changeTeam("Ferrari");
    std::cout<<Lewis;
    Lewis.addWin();
    std::cout<<Lewis;
    Lewis.changeTeam("Mercedes-AMG PETRONAS");
    Lewis.swapDrivers(Carlos);
    std::cout<<Carlos<<Lewis;

    Circuit Spa("Circuit de Spa-Francorchamps", "Belgia",19);
    Spa.newCorner();
    std::cout<<Spa;

    return 0;
}
