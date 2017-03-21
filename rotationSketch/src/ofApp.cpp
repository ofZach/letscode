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
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    

    // (a) simple
    
    float x = 300;
    float y = 300;
    
    float diffx = mouseX - x;
    float diffy = mouseY - y;
    
    float angle = atan2(diffy, diffx);  // radians
    
    
    ofPushMatrix();
    ofTranslate(x, y);
    ofRotate(angle * RAD_TO_DEG);
    ofDrawRectangle(0,0, 50, 10);
    ofPushMatrix();

    

// (b) for loop
//    for (int i = 0; i < 10; i++){
//        for (int j = 0; j < 10; j++){
//            
//            
//            float x = i * 50;
//            float y = j * 50;
//            
//            float diffx = mouseX - x;
//            float diffy = mouseY - y;
//            
//            float angle = atan2(diffy, diffx);  // radians
//            
//            
//            ofPushMatrix();
//            ofTranslate(x, y);
//            ofRotate(angle * RAD_TO_DEG);
//            ofDrawRectangle(0,0, 50, 10);
//            ofPopMatrix();
//            
//            
//            
//            
//        }
//    }
    
    
    // (c) with ofPoint
    
//    ofPoint pos(300,300);
//    ofPoint mouse(mouseX, mouseY);
//    ofPoint diff = mouse - pos;
//    float angle = atan2(diff.y, diff.x);
//    ofPushMatrix();
//    ofTranslate(pos);
//    ofRotate(angle * RAD_TO_DEG);
//    ofDrawRectangle(0,0, 50, 10);
//    ofPushMatrix();
    
    
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
