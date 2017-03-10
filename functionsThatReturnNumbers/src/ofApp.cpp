#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    // here's a few useful functions in OF that return numbers:
    
    // ofGetWidth()        <--- gets the width of the screen
    // ofGetHeight()        <--- gets the height of the screen
    // ofGetElapsedTimef()  <--- get the elapsed time in seconds

    // I really like using sin(ofGetElapsedTimef()) because it goes between -1 and 1 every 6.28 seconds;
    // you can do stuff like:
    
    ofBackground( sin(ofGetElapsedTimef()) * 127 + 127);
    
    ofSetColor( sin(ofGetElapsedTimef() + PI) * 127 + 127);

    float w = ofGetWidth();
    float h = ofGetHeight();
    float time = ofGetElapsedTimef();
    
    // this rectangle will be 33% over in x and y and have a width and height of 33%
    // of whatever the window is.  Try resizing!
    
    ofDrawRectangle( 0 + w*0.33, 0+h*0.33,w*0.33, h*0.33 );
    
    
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
