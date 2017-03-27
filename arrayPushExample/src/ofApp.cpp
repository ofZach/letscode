#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    for (int i = 0; i < 5; i++){
        energy[i] = ofRandom(0,1);      // random amount of energy;
    }
    
    ofSetCircleResolution(100);
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    float width = ofGetWidth();
    float height = ofGetHeight();
    
    // find out the total energy:
    float totalEnergy = 0;
    for (int i = 0; i < 5; i++){
        totalEnergy += energy[i];
    }
    
    
    
    // now we can use pct to draw
    // step through using x...
    float x = 0;
    
    for (int i = 0; i < 5; i++){
        
        // calc pct
        float pct = energy[i]/totalEnergy;
        
        //pct times width gives us how much to move over
        float widthMe = width * pct;
        
        // ellipse is drawn from the center (like rect more center)
        // we are drawing the box x,y, widthMe, height
        // so the center is x + widthMe/2, height/2
        
        ofDrawEllipse(x + widthMe/2, height/2, widthMe, height);
        
        // advance x
        x += widthMe;
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    for (int i = 0; i < 5; i++){
        energy[i] = ofRandom(0,1);
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
