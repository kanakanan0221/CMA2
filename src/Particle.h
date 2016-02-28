//
//  Particle.hpp
//  CMA2
//
//  Created by kanako on 2016/02/28.
//
//
#pragma once
#include "ofMain.h"

class Particle{
public:
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;
    float damping;
    
    Particle();
    virtual ~Particle(){};
    void resetForce();
    void addForce();
    void addDampingFoece();
    void setIntialCondition(float px, float py,float vx, float vy);
    void update();
    void draw();
    
protected:
private:
    
    
};
//
//#endif /* Particle_hpp */
