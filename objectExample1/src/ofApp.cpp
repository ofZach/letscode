#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    for (int i = 0; i < 100; i++){
        myCircles[i].x = ofRandom(0, ofGetWidth());
        myCircles[i].y = ofRandom(0, ofGetHeight());
        myCircles[i].radius = ofRandom(5,10);
        myCircles[i].color.set( ofRandom(255), ofRandom(255), ofRandom(255));
        
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    for (int i = 0; i < 100; i++){
        ofSetColor(myCircles[i].color);
        ofDrawCircle(myCircles[i].x, myCircles[i].y, myCircles[i].radius);
    }
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
