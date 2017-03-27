#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 15; i++){
        
        myImages[i].load("chaplin/out-" + ofToString(i) + ".png");
        
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    int whichOne = ofMap(mouseX, 0, ofGetWidth(), 0, 14, true);
    myImages[whichOne].draw(ofGetWidth()/2, ofGetHeight()/2);
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
