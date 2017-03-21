#include "ofApp.h"
#include "data.h"

//--------------------------------------------------------------
void ofApp::setup(){


    
    //----------------------------------------------------------------
    // the data is stored in a big flat array, let's copy it into something more managable
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data3d[ i * 24 * 3  + j * 3 + 0 ];
            float y = data3d[ i * 24 * 3  + j * 3 + 1 ];
            float z = data3d[ i * 24 * 3  + j * 3 + 2 ];
            frames[i][j].set(x,y,z);
        }
    }
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 24; j++){
            float x = data2d[ i * 24 * 2  + j * 2 + 0 ];
            float y = data2d[ i * 24 * 2  + j * 2 + 1 ];
            frames2d[i][j].set(x,y);
        }
    }
    //----------------------------------------------------------------

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);

    
    //----------------------------- copy data into array
    ofPoint data3d[24];
    ofPoint data2d[24];

    for (int i = 0; i < 24; i++){
        data3d[i] = frames[ (int)(ofGetFrameNum()*0.5) % 30][i];
        data2d[i] = frames2d[ (int)(ofGetFrameNum()*0.5) % 30][i];
    }
    
//----------------------------- 3d
    
//    cam.begin();
//    for (int i = 0; i < 24; i++){
//        ofDrawSphere(data3d[i], 5);
//    }
//    cam.end();
//
    ofSetColor(255,255,255,30);
    for (int i = 0; i < 24; i++){
        
        ofDrawCircle(data2d[i].x, data2d[i].y, 4);
//        ofDrawLine(data2d[i].x, data2d[i].y,
//                   data2d[i+1].x, data2d[i+1].y);
        //ofDrawRectangle(data2d[i].x, data2d[i].y, data2d[i].y, data2d[i].y);
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
