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
    //ofDrawRectangle(100, 100, 600, 600);
    
    if (mouseX < ofGetWidth()/2){
        if (mouseY < ofGetHeight()/2){
            ofDrawRectangle(100, 100, 600, 600);
        } else {
            ofDrawLine(0,0,800,800);
        }
    } else {
        ofDrawCircle(400,400,50);
    }
    
    
//    if (mouseX < ofGetWidth()/3){
//        ofBackground(0);
//    } else if (mouseX >= ofGetWidth()/3 &&
//               mouseX < 2*ofGetWidth()/3){
//        ofBackground(127);
//    } else {
//        ofBackground(255);
//    }
    
    
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
