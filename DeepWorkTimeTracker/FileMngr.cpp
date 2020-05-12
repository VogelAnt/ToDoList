#include "FileMngr.h"

FileMngr::FileMngr() {

}

FileMngr::FileMngr(QObject *parent) : QObject(parent){

}

void FileMngr::CheckDirectoryExists() {

}

void FileMngr::CheckFileExists() {
	QString directoryPath = "C:/Dokumente/ToDoListDirectory";
	QDir dir(directoryPath);
	if (dir.exists()) {
		std::cout << "directory " << directoryPath.toStdString() << " exists " << std::endl;
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
