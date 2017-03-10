#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    
    // somtimes it's useful to remap a value
    // from one range into another
    
    // ofMap ( input, inputMin, inputMax, outputMin, outputMax)
    
    // is a function that does this.
    // for example:
    
    // ofMap(mouseX, 0, ofGetWidth(), 0, 1);
    
    // will return a number between 0 and 1 as you move the mouse from right to left
    // mouseX is a big number (it's in pixels) but if we map it from 0 to the width of the window,
    // we can remap it 0 - 1
    
    float mousePct = ofMap(mouseX, 0, ofGetWidth(), 0, 1);
    
    ofSetColor(255);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, mousePct * 300);
    
    // you'll notice that if you bring your mouse too far on the left, the circle gets big again
    // this is because we aren't "clamping" the results, and the input
    // is outside of the input range so the output is also outside of the output range.
 
    //  try ofMap(mouseX, 0, ofGetWidth(), 0, 1, true); above....
    //  also fun to try is:
    //  ofSetColor(255*mousePct);
    
    
    
    
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
