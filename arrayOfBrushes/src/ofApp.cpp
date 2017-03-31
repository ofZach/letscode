#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    for (int i = 0; i < 10; i++){
        myImages[i].load("Brush-BM-13" + ofToString(i) +  ".jpg");
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofScale(0.5, 0.5);
    
    //cout << ofGetFrameNum() << endl;
    //cout << ofGetFrameNum() % 10 << endl;
    

    // ------ what's happening in english
    // get the elapsed time (ofGetElapsedTimef())
    // divide it by 15 so it's 15 x slower (ie, goes up by 1 every 15 seconds)
    // turn it into an integer  (cast operator)  (int)
    // get the remainder if you were to divide by 10 and use that
    // to access the element of the array   (%10)
    
    
    myImages[
             
             
             (int)(ofGetElapsedTimef()/15.) % 3
             
             ].draw(0,0);
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
