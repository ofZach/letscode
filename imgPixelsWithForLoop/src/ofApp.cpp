#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    mouseImg.load("housemouse.jpg");
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0);
    
    mouseImg.draw(0,0);
    
    
    for (int i = 0; i < 300; i+=10){
        for (int j = 0; j < 300; j+=10){
            //ofSetColor(mouseImg.getColor(i, j));
            //ofDrawRectangle(300 + i, j, 10, 10);
            float brightness = mouseImg.getColor(i, j).getBrightness();
            //cout << brightness << endl;
            ofDrawCircle(300 + i,j, ofMap(brightness, 0, 255, 3.4, 4.3));
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
