#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // About Auto complete
    // Curretry vscode intelisense for C++ has limitation.
    // Try to type m.set and you will see tons of functions and variables includes "set" keyword
    // 
    // more info here https://github.com/Microsoft/vscode-cpptools/issues/13
    // You can use "Peek Definition" feature instead
    MyClass m;
    // m.set
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(20,200,100);
    ofSetColor(255);
    ofDrawRectangle(100,100,100,100);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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