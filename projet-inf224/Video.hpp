//
//  Video.hpp
//  projet-inf224
//
//  Created by Lucas HOMMET on 13/12/2022.
//

#include <iostream>
#include <string>

#include "Multi.hpp"
using namespace std;

class Video : public Multi {
    int duration;
public:
    // Constructor
	Video() : Mutli("",""), duration(0) {};
	Video(string _name, string _path, int _duration) : Multi(_name, _path) , duration(_duration) {};
    //getters
	int getDuration() const { return duration; };

    //setters
	void setDuration(int _duration) { duration = _duration; };
    
    //display
    void displayInfo(ostream& s) const override{
        s << "Class : 'Video';\nName: " << getName() << "\nPath: " << getPath() << "\nDuration: " << getDuration() << endl;
	};
    
    void play() const override{
		string out = "mpv " + getPath() + " &";
		system(out.c_str());
    };
};

