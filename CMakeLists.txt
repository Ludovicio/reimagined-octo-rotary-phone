cmake_minimum_required(VERSION 3.15)
project(ZBE)

# Opciones de compilación comunes
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

# Definir si estamos construyendo una DLL/SO
option(BUILD_SHARED_LIBS "Build shared libraries (.dll on Windows, .so on Linux)" ON)
# if(BUILD_SHARED_LIBS)
#     add_definitions(-DZBE_BUILD_DLL)
# endif()

# Incluir el directorio de encabezados
include_directories(include)

# Buscar archivos fuente
# file(GLOB_RECURSE ZBE_SOURCES src/*.cpp)

# Crear la librería
# add_library(zbe_core ${BUILD_SHARED_LIBS} ${ZBE_SOURCES})
add_library(zbe_core src/DLL.CPP)

IF (WIN32)
target_compile_definitions(zbe_core PRIVATE EXP_STL)
ENDIF()

# Establecer propiedades de la librería (nombre de salida, etc.)
set_target_properties(zbe_core PROPERTIES
    OUTPUT_NAME "zbe_core"
    WINDOWS_EXPORT_ALL_SYMBOLS ON # Para exportar todos los símbolos en Windows (puede ajustarse)
)

# Si BUILD_SHARED_LIBS está activado, se construirá una librería compartida
if(BUILD_SHARED_LIBS)
    target_link_libraries(zbe_core) # No es estrictamente necesario para la propia librería, pero útil si depende de otras
else()
    # Si no es una librería compartida, podría ser una estática
    set_target_properties(zbe_core PROPERTIES
        OUTPUT_NAME "zbe_core_static"
    )
endif()

add_executable(APIUSER 
  src/EXE.CPP
)
target_link_libraries(APIUSER
    PRIVATE zbe_core
)