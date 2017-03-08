#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    // the letter z is 3 lines
    // one at the top, one from top right to bottom left
    // and one at the bottom
    
    
    float x = 300;
    float y = 300;
    float width = 30;
    float height = 200;
    
    ofDrawLine(x,y, x+width, y);              // the line at the top
    ofDrawLine(x+width, y, x, y+ height);     // top right to bottom left
    ofDrawLine(x, y+height, x+width, y+height);   // the line at the bottom
    
    // now we can do it again!  change the variables:
    
    x = 350;
    y = 300;
    width = 80;
    height = 200;
    
    ofDrawLine(x,y, x+width, y);              // the line at the top
    ofDrawLine(x+width, y, x, y+ height);     // top right to bottom left
    ofDrawLine(x, y+height, x+width, y+height);   // the line at the bottom
    
    
    // one more time:
    
    x = 450;
    y = 300;
    width = 130;
    height = 200;
    
    ofDrawLine(x,y, x+width, y);              // the line at the top
    ofDrawLine(x+width, y, x, y+ height);     // top right to bottom left
    ofDrawLine(x, y+height, x+width, y+height);   // the line at the bottom
    

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
