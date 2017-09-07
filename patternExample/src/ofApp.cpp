#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

void ofApp::drawZ(float x, float y, float w, float h){
    ofLine(x, y, x+w, y);
    ofLine(x+w, y, x, y+h);
    ofLine(x,y+h, x+w, y+h);
}


//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0,0);
    ofNoFill();
    float w = ofGetWidth()/5;
    float h = ofGetHeight()/2;
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 2; j++){
            ofRectangle rect(i * w, j*h, w, h);
            rect.scaleFromCenter(0.8);
            drawZ(rect.x, rect.y, rect.width, rect.height);
        }
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
