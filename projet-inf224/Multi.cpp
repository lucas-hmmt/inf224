//
//  multi.cpp
//  inf224
//
//  Created by Lucas HOMMET on 13/12/2022.
//

#include "Multi.hpp"

using namespace std;

Multi::Multi() :  name{ "" }, path{ "" } {}

Multi::Multi(string _name, string _path) : name(_name), path(_path) {}

void Multi::setName(string _name){
	name = _name;
}

void Multi::setPath(string _path){
	path = _path;
}

string Multi::getName() const{
    return name;
}

string Multi::getPath() const{
    return path;
}

void Multi::displayInfo(ostream& s) const {
    s << getName() << " " << getPath() << endl;
}
