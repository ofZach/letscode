#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

//    for (int i = 0; i < 100; i++){
//        myCircles[i].setup();
//    }
}

//--------------------------------------------------------------
void ofApp::update(){

    
    cout << myCircles.size() << endl;
    
    for (int i = 0; i < myCircles.size(); i++){
        myCircles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    for (int i = 0; i < myCircles.size(); i++){
        myCircles[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
    if (key == ' '){
        myCircles.clear();
        
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

    
    circle tempCircle;
    tempCircle.setup();
    tempCircle.pos.x = x;
    tempCircle.pos.y = y;
    tempCircle.vel.x = 0;
    tempCircle.vel.y = 0;
    
    myCircles.push_back( tempCircle );
    
    if (myCircles.size() > 50){
        myCircles.erase(myCircles.begin());
    }
    
    
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
