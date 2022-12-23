//
//  multi.hpp
//  inf224
//
//  Created by Lucas HOMMET on 13/12/2022.
//

#include <iostream>
#include <string>

#ifndef DEF_MULTI
#define DEF_MULTI

class Multi {
    std::string name, path;
    
public:
    Multi(std::string name, std::string path); // Constructor with parameters
    Multi(); // Constructor without parameters
    virtual ~Multi(); // Destructor
    void setName(std::string name);
    void setPath(std::string path);
    std::string getName() const;
    std::string getPath() const;
    virtual void displayInfo(std::ostream& s) const;
    virtual void play() const = 0; // la classe devient abstraite
                                   // plus possible d'intancier des objets Multi
};

#endif
