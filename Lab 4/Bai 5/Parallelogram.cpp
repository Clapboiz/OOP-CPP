#include "Parallelogram.h"

Parallelogram::Parallelogram() {
	this->hight = 0;
	this->longEdge = 0;
	this->shortEdge = 0;
}

Parallelogram::Parallelogram(float hight, float longEdge, float shortEdge) {
	this->hight = hight;
	this->longEdge = longEdge;
	this->shortEdge = shortEdge;
}

float Parallelogram::Area() {
	return longEdge * hight;
}

void Parallelogram::setHight(float hight) {
	this->hight = hight;
}

void Parallelogram::setLongEdge(float longEdge) {
	this->longEdge = longEdge;
}

void Parallelogram::setShortEdge(float shortEdge) {
	this->shortEdge = shortEdge;
}

float Parallelogram::getHight() {
	return hight;
}

float Parallelogram::getLongEdge() {
	return longEdge;
}

float Parallelogram::getShortEdge() {
	return shortEdge;
}
