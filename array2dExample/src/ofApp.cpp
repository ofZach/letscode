#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    for (int i = 0; i < 50; i++){
        for (int j = 0; j < 50; j++){
            positions[i][j] = ofPoint(i*10 + ofRandom(-3,3), j*10 + ofRandom(-3,3));
            radii[i][j] = ofRandom(1,3);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    for (int i = 0; i < 50; i++){
        for (int j = 0; j < 50; j++){
            ofDrawCircle(positions[i][j], radii[i][j]);
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    for (int i = 0; i < 50; i++){
        for (int j = 0; j < 50; j++){
            positions[i][j] = ofPoint(i*10 + ofRandom(-3,3), j*10 + ofRandom(-3,3));
            radii[i][j] = ofRandom(1,3);
        }
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
