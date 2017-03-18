#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}


void ofApp::drawZ(float x, float y, float width, float height){
    
    ofDrawLine(x,y,x + width, y);
    ofDrawLine(x + width, y, x, y + height);
    ofDrawLine(x, y + height, x + width, y + height);
    
}


//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    
    drawZ(100,100,10,600);
    drawZ(100,100,20,600);
    drawZ(100,100,30,600);
    drawZ(100,100,40,600);
    drawZ(100,100,50,600);
    drawZ(100,100,60,600);
    
    
    
    
    
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
