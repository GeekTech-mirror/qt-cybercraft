set(NETWORK_MODEL_SRCS
        network_delegate.cpp
        network_delegate.h
        network_enums.h
        network_item.cpp
        network_item.h
        network_model.cpp
        network_model.h
        network_model_p.h
        network_scan.cpp
        network_scan.h
        network_sort.cpp
        network_sort.h
)

add_library(Network_Model STATIC ${NETWORK_MODEL_SRCS})

target_link_libraries(Network_Model PRIVATE Qt${QT_VERSION_MAJOR}::Network)
target_link_libraries(Network_Model PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Network_Model PRIVATE NetworkManagerQt)

include_directories(${CMAKE_SOURCE_DIR}/styles)

