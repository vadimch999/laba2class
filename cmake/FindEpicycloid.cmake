set(FIND_EPICYCLOID_PATHS
        ~/Library/epicycloid)

find_path(EPICYCLOID_INCLUDE_DIR library.h
        PATH_SUFFIXES include
        PATHS ${FIND_EPICYCLOID_PATHS})

find_library(EPICYCLOID_LIBRARY
        NAMES epicycloid
        PATH_SUFFIXES lib
        PATHS ${FIND_EPICYCLOID_PATHS})