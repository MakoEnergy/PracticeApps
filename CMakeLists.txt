project(PracticeApps)
cmake_minimum_required(VERSION 2.8)

set(PracticeApps_Sources
	"Src/main.cpp"
)
set(PracticeApps_Headers
	"Src/Common.h"

	"Src/FoundFactors.h"
	"Src/AddUp.h"
)

add_executable(PracticeApps ${PracticeApps_Sources} ${PracticeApps_Headers})

add_custom_target(${PROJECT_NAME}_IDE_Visibility DEPENDS ${PROJECT_NAME} SOURCES
	"Readme.md"
	"CMakeLists.txt"
)
