#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    for (int i = 0; i < 50; i++){
        positions[i] = ofGetWidth()/2;
        speeds[i] = ofRandom(-10,10);
        colors[i].set(ofRandom(255), ofRandom(255),
                      ofRandom(255));
        radius[i] = ofRandom(1,20);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    for (int i = 0; i < 50; i++){
        positions[i] = positions[i] + speeds[i];
    
        if (positions[i] > ofGetWidth()){
            positions[i] = 0;
        }
        
        if (positions[i] < 0){
            positions[i] = ofGetWidth();
        }
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    for (int i = 0; i < 50; i++){
        ofSetColor(colors[i]);
        ofDrawCircle(positions[i], i*15, radius[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    if (key == ' '){
        for (int i = 0; i < 50; i++){
            positions[i] = ofGetWidth()/2;
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
