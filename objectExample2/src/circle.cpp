

#include "circle.h"

//---------------------------------------------------------------
void circle::setup(){
    
    pos.set( ofRandom(0, ofGetWidth()),
            ofRandom(0, ofGetHeight()));
    radius = ofRandom(1,10);
    color.set(ofRandom(255),
              ofRandom(255),
              ofRandom(255));
    
    vel.set(ofRandom(-10,10), ofRandom(-10,10));
    
    
}


//---------------------------------------------------------------
void circle::update(){
    
    pos = pos + vel;
    
    if (pos.x > ofGetWidth()){
        vel.x *= -1;
    }
    
    if (pos.x < 0){
        vel.x *= -1;
    }
    
    if (pos.y > ofGetHeight()){
        vel.y *= -1;
    }
    
    if (pos.y < 0){
        vel.y *= -1;
    }
    
}


//---------------------------------------------------------------
void circle::draw(){
    ofSetColor(color);
    ofCircle(pos.x, pos.y, radius);
}