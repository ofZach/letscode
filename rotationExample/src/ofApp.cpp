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
    
    
//    (a) ----- this doesn't work that well since we rotate around 0,0
//
//
//    ofSetColor(255);
//    ofRotate( mouseX );
//    ofDrawRectangle(400,400, 100,50);

    
//    (b) ----- better! we translate out of to where the center of what we want to rotate is
//    than draw as if from 0,0
//
//
    
    ofPushMatrix();
    ofTranslate(400,400);
    ofRotate( mouseX );
    ofDrawRectangle(0,0, 100,50);
    ofPopMatrix();
    
    
    
    // (c)
    // push and pop embedded!
    // try moving mouseX and mouseY
    
    //    ofPushMatrix();
    //    
    //    ofTranslate(400,400);
    //    ofRotate( mouseX );
    //    ofDrawRectangle(0,0, 100,50);
    //    
    //        ofPushMatrix();
    //        ofTranslate(0,150);
    //        ofRotate( mouseY );
    //        ofDrawRectangle(0,0, 30,30);
    //        
    //            ofPushMatrix();
    //            ofTranslate(100,0);
    //            ofDrawRectangle(0,0, 10,10);
    //            ofPopMatrix();
    //        
    //        ofPopMatrix();
    //    
    //    ofPopMatrix();
    
    
    
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
