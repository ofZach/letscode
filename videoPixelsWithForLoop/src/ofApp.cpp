#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    grabber.setup(640,480);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    ofSetRectMode(OF_RECTMODE_CORNER);
    
    grabber.draw(0,0);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    
    for (int i = 0; i < 640; i+=10){
        for (int j = 0; j < 480; j+=10){
            
            float brightness = grabber.getPixels().getColor(i,j).getBrightness();
            
            ofPushMatrix();
            ofTranslate(640 + i, 5 + j);
            ofRotate( ofMap(brightness, 0, 255, 0, mouseX));
            ofDrawRectangle(0,0, 10, 2);
            //ofDrawRectangle(0,0, brightness*0.3, 2);
            ofPopMatrix();
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
