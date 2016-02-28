#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    ofBackground(0, 0, 0);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    img.loadImage("名称未設定 6.png");
//    p.setIntialCondition(ofGetWidth()/2, ofGetHeight()/2, ofRandom(-10,10), ofRandom(-10,10));
//    
//    cam.setOrientation(ofPoint(-20,0,0));
//    
//    glEnable(GL_DEPTH_TEST);
//    glEnable(GL_NORMALIZE);
//    
//    leap.open();
    
//    manbo.loadImage("manbo.gif");


}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i<particles.size(); i++){
    particles[i].resetForce();
//        particles[i].addForce(0, 0.1);
    particles[i].addDampingFoece();
    particles[i].update();
    }
    
    
//    simpleHands = leap.getSimpleHands();
//    if (leap.isFrameNew() && simpleHands.size() ) {
//        fingerPos.clear();
//        
//        handPos.clear();
//
//        leap.setMappingX(-230, 230, -ofGetWidth()/2, ofGetWidth()/2);
//        leap.setMappingY(90, 490, -ofGetHeight()/2
//                         , ofGetHeight()/2);
//        leap.setMappingZ(-150,150,-200,200);
//        
//        fingerType fingerTypes[] = {THUMB, INDEX,MIDDLE,RING,PINKY};
//        
//        for (int i = 0; i < simpleHands.size(); i++) {
//            
//            handPos.push_back(simpleHands[i].handPos);
//
//            for (int f = 0; f<5 ; f++ ) {
//                
//                
//                
//                ofPoint mcp = simpleHands[i].fingers[ fingerTypes[f] ].mcp;
//                fingerPos.push_back(mcp);
//                
//                ofPoint pip = simpleHands[i].fingers[ fingerTypes[f] ].pip;
//                fingerPos.push_back(pip);
//                
//                ofPoint dip = simpleHands[i].fingers[ fingerTypes[f] ].dip;
//                fingerPos.push_back(dip);
//                
//                ofPoint tip = simpleHands[i].fingers[ fingerTypes[f] ].tip;
//                fingerPos.push_back(tip);
//                
//            }
//            
//        }
//        
//    }
//    leap.markFrameAsOld();


}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255,255);
    
    string message = "current particle num = "+ ofToString(particles.size(),0);
    ofDrawBitmapString(message, 20,20);
    
    for(int i = 0; i < particles.size(); i++){
        float posx = particles[i].pos.x - 16;
        float posy = particles[i].pos.y - 16;
        img.draw(posx,posy);
        
        
    }
    
    Particle myParticle;
    float vx = ofRandom(-1,1);
    float vy = ofRandom(-1,1);
    myParticle.setIntialCondition(x, y, vx, vy);
    
    particles.push_back(myParticle);
    

    
    
    
//       ofBackground(0);
//    cam.begin();
//
//    Particle myParticle;
//    float vx = ofRandom(-1,1);
//    float vy = ofRandom(-1,1);
////    ( fingerPos.at(7)  , img.getWidth(), img.getHeight());
//    particles.push_back(myParticle);
//    
//
   
        
        
        
    

    
//    manbo.draw(mouseX, mouseY, manbo.getWidth(), manbo.getHeight());
//
//    for (int i = 0; i <simpleHands.size(); i++) {
//        for (int f =0; f<5; f++) {
    
//            manbo.draw(ofPoint( fingerPos.at(7) ) , manbo.getWidth(), manbo.getHeight());
           
            
//            ofSetColor(0, 255, 0);
//            ofDrawSphere(handPos.at(i), 20);
//            
//            
//            ofSetColor(255);
//            ofDrawSphere(fingerPos.at(20*i+4*f+0),10);
//            cout << " 中心から0 : " << fingerPos.at(20*i+4*f+0) << endl;
//            
//            
//            ofSetColor(200);
//            ofDrawSphere(fingerPos.at(20*i+4*f+1),10);
//            cout << " 中心から1 : " << fingerPos.at(20*i+4*f+1) << endl;
//            
//            
//            ofSetColor(155);
//            ofDrawSphere(fingerPos.at(20*i+4*f+2),10);
//            cout << " 中心から2 : " << fingerPos.at(20*i+4*f+2) << endl;
//            
//            
//            ofSetColor(100);
//            ofDrawSphere(fingerPos.at(20*i+4*f+3),10);
//            
//            ofLine(fingerPos.at(20*i+4*f+0), fingerPos.at(20*i+4*f+1));
//            ofLine(fingerPos.at(20*i+4*f+1), fingerPos.at(20*i+4*f+2));
//            ofLine(fingerPos.at(20*i+4*f+2), fingerPos.at(20*i+4*f+3));
//        }
//    }
//    cam.end();
}

void ofApp::exit(){
    


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key =='c') {
        
        particles.clear();
    }
    if (key =='f') {
        ofToggleFullscreen();
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
    
//    Particle myParticle;
//    float vx = ofRandom(-1,1);
//        float vy = ofRandom(-1,1);
//     myParticle.setIntialCondition(x, y, vx, vy);
//     particles.push_back(myParticle);
//

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    particles.clear();
//    for(int i = 0; i<NUM; i++){
//        Particle myParticle;
//        
//        float vx = ofRandom(-10,10);
//        float vy = ofRandom(-10,10);
//        myParticle.setIntialCondition(x, y, vx, vy);
//        
//        particles.push_back(myParticle);
//        
//    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
