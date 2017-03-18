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

    
//    for (int i = 0; i < 50; i++){
//        ofDrawLine(i*10,400, i*10, 100);
//    }
//    
//    
//    for (int i = 0; i < 50; i++){
//        ofDrawLine(0, i * 10, 500, i*10);
//    }


//    non ofMap()
    
//    for (int i = 0; i < 10; i++){
//        ofSetColor( i * 20 );
//        ofDrawCircle(400,400, 300 - i * 20);
//    }
    
    
//      ofMap(value, inputMin, inputMax, outputMin, outputMax);
    
        for (int i = 0; i < 10; i++){
            ofSetColor( ofMap(i, 0, 9, 10, 255) );
            ofDrawCircle(400,400,  ofMap(i, 0, 9, 300, 50));
        }
//
    
    
//    float time = ofGetElapsedTimef();
//    for (int i = 0; i < 1000; i++){
//    
//        ofSetColor( 127 + 127 * sin(time + i*0.1),
//                    127 + 127 * sin(time + i*0.101),
//                    127 + 127 * sin(time+ i*0.102));
//        ofDrawCircle(400 + 100 * sin(i*0.03 + time), ofMap(i, 0, 1000, 0, 800), sin(i*0.03 + time)*100);
//        
//        
//    }
    
//    
//    for (int i = 0; i < 100; i++ ){
//        for (int j = 0; j < 100; j++ ) {
//            
//            ofSetColor(i*2, j*2, mouseX);
//            ofDrawRectangle(i * 5, j * 5, 5,5);
//        }
//    }
    
    
    
    
    
    
    
    
    
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
