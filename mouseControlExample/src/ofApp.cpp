#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofBackground(0,0,0);    // black
    
    // mouseX and mouseY are variables that we can access that are where the mouse is
    // we can use them to control points of things:
    
    ofSetColor(255);
    
    ofDrawLine(0,0,mouseX, mouseY);
    ofDrawLine(800,0, mouseX, mouseY);
    ofDrawLine(800,800, mouseX, mouseY);
    ofDrawLine(0,800, mouseX, mouseY);
    
    // we can also use them wherever we have a number:
    
    
    ofSetColor(mouseX, mouseY, 0);
    ofDrawCircle(400,400,30);
    

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
