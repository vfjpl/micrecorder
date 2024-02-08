#ifndef FILE_MIC_RECORDER_HPP_INCLUDED
#define FILE_MIC_RECORDER_HPP_INCLUDED

#include <SFML/Audio/SoundRecorder.hpp>
#include <SFML/Audio/OutputSoundFile.hpp>

class File_Mic_Recorder final: private sf::SoundRecorder
{
    sf::OutputSoundFile m_file;

    bool onProcessSamples(const sf::Int16* samples, std::size_t sampleCount);

public:
    void setProcessingInterval(sf::Time interval);
    void start(const char* filename, unsigned int sampleRate = 48000);
    void stop();
};

#endif // FILE_MIC_RECORDER_HPP_INCLUDED
