#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){


    DP.setup();
    
   

}

//--------------------------------------------------------------
void ofApp::update(){

    
    DP.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);

    
    for (int i = 0; i < 24; i++){
        ofPoint p = DP.currentFrame[i];
        ofCircle(p, 4);
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
