#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    // this is the draw function, it gets called 60 times per second
    // at the start we can set the background color
    // (note that the background gets cleared automatically,
    // this can be disabled if we want...)
    
    ofBackground(255,255,255);
    
    // draw a green rectangle from 100,100 with a width and height of 100
    
    ofSetColor(127,127,127);
    ofDrawRectangle(100,100,100,100);
    
    // draw a white line through the rectangle
    
    ofSetColor(255);            // this is for grayscale (could also be ofSetcolor(255,255,255);
    
    ofDrawLine(100,100,200,200);
    
    // draw a series of circles
    // circles are made out of triangles, by default we have
    // a resolution of 20, but you can change how many triangles there
    // are using ofSetCircleResolution()
    // try commenting this out or changing it (ofSetCircleResolution(4) for example)
    
    ofSetCircleResolution(100);
    
    
    ofSetColor(0);  // black
    ofDrawCircle(500,300,200);          // at 500,500 radius of 200
    ofSetColor(255*0.1);  // 10% gray
    ofDrawCircle(500,300,180);          // at 500,500 radius of 180
    ofSetColor(255*0.2);  // 20% gray
    ofDrawCircle(500,300,160);          // at 500,500 radius of 160
    ofSetColor(255*0.3);  // 30% gray
    ofDrawCircle(500,300,140);          // at 500,500 radius of 140
    ofSetColor(255*0.4);  // 40% gray
    ofDrawCircle(500,300,120);          // at 500,500 radius of 120
    ofSetColor(255*0.5);  // 50% gray
    ofDrawCircle(500,300,100);          // at 500,500 radius of 100
    ofSetColor(255*0.6);  // 60% gray
    ofDrawCircle(500,300,80);          // at 500,500 radius of 80
    ofSetColor(255*0.7);  // 70% gray
    ofDrawCircle(500,300,60);          // at 500,500 radius of 60
    ofSetColor(255*0.8);  // 80% gray
    ofDrawCircle(500,300,40);          // at 500,500 radius of 40
    ofSetColor(255*0.9);  // 90% gray
    ofDrawCircle(500,300,20);          // at 500,500 radius of 20
    ofSetColor(255*1.0);  // 100% gray
    ofDrawCircle(500,300,1);          // at 500,500 radius of 1
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
