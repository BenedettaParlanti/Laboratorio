cmake_minimum_required(VERSION 3.10)
project(EsameLab2020)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

set(SOURCE_FILES Utente.cpp Utente.h Chat.cpp Chat.h NotificaMessaggio.cpp NotificaMessaggio.h MessaggioNonLetto.cpp MessaggioNonLetto.h Subject.h Observer.h Messaggio.h)
add_executable(EsameLab2020 main.cpp)
add_library(core ${SOURCE_FILES})
SET_TARGET_PROPERTIES(core PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(EsameLab2020 core)