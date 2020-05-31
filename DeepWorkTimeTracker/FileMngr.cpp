#include "FileMngr.h"

FileMngr::FileMngr() {
	// Sync button
	// first time start up ask for a directory
	// after adding new skill pick a new directory
	// there should be a boolean variable "directory set ..." etc
	// 
}

FileMngr::FileMngr(QObject *parent) : QObject(parent){

}

void FileMngr::CheckDirectoryExists() {

}

void FileMngr::CheckFileExists() {
	m_directoryPath = "C:/Dokumente/ToDoListDirectory";
	QDir dir(m_directoryPath);
	if (dir.exists()) {
		std::cout << "directory " << m_directoryPath.toStdString() << " exists " << std::endl;
	}
	// open file containing skill list
	// check if directory exists
}

void FileMngr::on_LoadSkills() {

}

void FileMngr::WriteFile(QString fileName) {

}

void FileMngr::ReadFile(QString fileName) {

}

FileMngr::~FileMngr(){

}
