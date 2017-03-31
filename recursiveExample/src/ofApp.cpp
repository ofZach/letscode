#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}


void ofApp::drawRectangle( float x, float y, float w, float h){
    
    ofNoFill();
    ofDrawRectangle(x, y, w, h);
    
    if (w/2 > 2){
        if (ofRandom(0,1) > 0.5) drawRectangle(x,y,w/2, h/2);
        if (ofRandom(0,1) > 0.5) drawRectangle(x+w/2,y,w/2, h/2);
        if (ofRandom(0,1) > 0.5) drawRectangle(x+w/2,y+h/2,w/2, h/2);
        if (ofRandom(0,1) > 0.5) drawRectangle(x,y+h/2,w/2, h/2);

        
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSeedRandom(mouseX);
    
    ofBackground(0);
    drawRectangle(100, 100, 400, 400);
    
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
