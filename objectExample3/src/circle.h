#pragma once

#include "ofMain.h"

class circle {
    
public:
    
    void setup();
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    
    float radius;
    ofColor color;
    
};