#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    
    // give me a variable named x of the type "float"
    // and put the value of 100 into it
    
    float x = 100;
    
    // we can print the value out
    // cout is the "new school" way of printing things out
    // there's also printf() which is old school
    // endl is "new line" like hitting return
    
    cout << x << endl;
    
    // you can print out nicer like this -- adding text and variables
    
    cout << "x = " << x << endl;
    
    // now create a variable y of the type float
    // and set it equal to whatever x is plus 100
    // since x is 100, y should be 200...
    // note when you see the equals sign do what's on the right first
    // and put it into the left side.
    
    float y = x + 100;
    
    cout << "y = " << y << endl;
    
    // now what do you think x equals after this ?
    
    x = x + 1;
    
    // try cout after this line and find out.....
    
    
    
    // other types of variables:
    
    int counter = 0;
    char letter = 'd';
    bool doIhaveEnoughVariables = false;
    string name = "zach";
    
    
    cout << counter << " " << letter << " " << doIhaveEnoughVariables << " " << name << endl;
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    
    
    
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
