#include "FileManager.h"

FileManager::FileManager(){
	CheckIfDirectoryExists();
}

void FileManager::CheckIfDirectoryExists() {

}

void FileManager::WriteFile(QString fileName) {

}

void FileManager::ReadFile(QString fileName) {

}

void FileManager::CheckIfFileExists() {
	QString directoryPath = "C:/Dokumente/ToDoListDirectory";
	QDir dir(directoryPath);
	if (dir.exists()) {
		std::cout << "directory " << directoryPath.toStdString() << " exists " << std::endl;
	}
	// open file containing skill list
	// check if directory exists
}

FileManager::~FileManager(){

}
