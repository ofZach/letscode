#pragma once

#include "ofMain.h"


class dataPlayer {
    
public:
    
    void setup();
    void update();
    void draw();
    
    ofPoint currentFrame[24];
    
    ofPoint frames[30][24];         // 30 frames, 24 points per frame
    ofPoint frames2d[30][24];         // 30 frames, 24 points per frame
    
};