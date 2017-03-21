#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    for (int i = 0; i < 1000; i++){
        xpositions[i] = ofRandom(0, ofGetWidth());
        ypositions[i] = ofRandom(0, ofGetHeight());
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    
    for (int i = 0; i < 1000; i++){
        
        float dist = ofDist(mouseX, mouseY,xpositions[i], ypositions[i]);
        if (dist < 100){
            ofDrawLine(mouseX, mouseY, xpositions[i], ypositions[i]);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    for (int i = 0; i < 1000; i++){
        xpositions[i] = ofRandom(0, ofGetWidth());
        ypositions[i] = ofRandom(0, ofGetHeight());
    }
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
