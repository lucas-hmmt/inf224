//
//  Photo.hpp
//  projet-inf224
//
//  Created by Lucas HOMMET on 13/12/2022.
//

#include <iostream>
#include <string>

#include "Multi.hpp"
using namespace std;

class Photo : public Multi {
    float latitude;
    float longitude;
public:
    // Constructor
    Photo() : Multi("",""), latitude(0), longitude(0) {};
    Photo(string _name, string _path, float latitude, float longitude) : Multi(_name, _path), latitude( latitude ), longitude ( longitude ) {};
    
    //getters
    float getLatitude() const { return latitude; }
    
    float getLongitude() const { return longitude; }
    
    //setters
    void setLatitude(int _latitude) { latitude = _latitude; }

    void setLongitude(int _longitude) { longitude = _longitude; }

    //display
    void displayInfo(ostream& s) const override{
        Multi::displayInfo(s);
        s << "Class : 'Photo';\nName: " << getName() << "\nPath: " << getPath() << "\nLongitude: " << getLongitude() << "\nLatitude: " << getLatitude() << endl;
    }
    
    void play() const override {
        string out = "imagej " + getPath() + " &";
        system(out.c_str());
    };
};
