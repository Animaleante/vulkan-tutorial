#include "ComputeApp.h"

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;

int main() {
    ComputeApp app;

    try {
        app.run(WIDTH, HEIGHT);
    } catch(const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}