#include "file_mic_recorder.hpp"

int main(int argc, char* argv[])
{
    File_Mic_Recorder micrecorder;

    if(argc != 2)
        return EXIT_FAILURE;

    micrecorder.start(argv[1]);
    while(getwchar() != L'Q');
    micrecorder.stop();

    return EXIT_SUCCESS;
}
