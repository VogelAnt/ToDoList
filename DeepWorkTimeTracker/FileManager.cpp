#include "FileManager.h"

FileManager::FileManager(){
}

void FileManager::WriteFile(QString fileName) {
	CheckIfDirectoryExists();
	CheckIfFileExists();
}

void FileManager::ReadFile(QString fileName) {
	CheckIfDirectoryExists();
	CheckIfFileExists();
}

void FileManager::CheckIfDirectoryExists() {
	QString directoryPath = "C:/Dokumente/ToDoListDirectory";
	QDir dir(directoryPath);
	if (dir.exists()) {
		std::cout << "directory " << directoryPath.toStdString() << " exists " << std::endl;
	}
	// open file containing skill list
	// check if directory exists
}

void FileManager::CheckIfFileExists() {
}

FileManager::~FileManager(){

}
