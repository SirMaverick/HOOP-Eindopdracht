#include "ofApp.h"

void ofApp::setup() {
	ofBackground(ofColor::black);
	emitter = ParticleEmitter::instance();
	emitter->setOrigin(512, 384);
	emitter->setColours(ofColor(ofRandom(255), ofRandom(255), ofRandom(255), 125), ofColor(ofRandom(255), ofRandom(255), ofRandom(255), 15));
	emitter->setCurvingParticleRatio(0.1);
}

void ofApp::update() {
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->move();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = emitter->emit();
		particles.push_back(freshParticle);
	}

	reaper.cleanup(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
	for (unsigned int i = 0; i < particles.size(); ++i) {
		emitter->setColours(ofColor(ofRandom(255), ofRandom(255), ofRandom(255), 125), ofColor(ofRandom(255), ofRandom(255), ofRandom(255), 15));
		particles[i]->draw();
	}
}

void ofApp::keyPressed(int key) {
}