#include "file_mic_recorder.hpp"

bool File_Mic_Recorder::onProcessSamples(const sf::Int16* samples, std::size_t sampleCount)
{
    m_file.write(samples, sampleCount);
    return true;
}

void File_Mic_Recorder::setProcessingInterval(sf::Time interval)
{
    sf::SoundRecorder::setProcessingInterval(interval);
}

void File_Mic_Recorder::start(const char* filename, unsigned int sampleRate)
{
    m_file.openFromFile(filename, sampleRate, sf::SoundRecorder::getChannelCount());
    sf::SoundRecorder::start(sampleRate);
}

void File_Mic_Recorder::stop()
{
    sf::SoundRecorder::stop();
}
