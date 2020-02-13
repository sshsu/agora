#pragma once
#include "AudioFrameObserver.h"
#include <unistd.h>

bool AudioFrameObserver::onRecordAudioFrame(AudioFrame& audioFrame) 
{
	//printf("%s: samples=%d, channel=%d, fs=%d\n", __FUNCTION__, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
return true;
}

bool AudioFrameObserver::onPlaybackAudioFrame(AudioFrame& audioFrame) 
{
	printf("%s: samples=%d, channel=%d, fs=%d\n", __FUNCTION__, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
    FILE *fd = fopen("record.pcm", "ab+");
    fputs(audioFrame.buffer, fd);
    fclose(fd);
	return true;
}

bool AudioFrameObserver::onMixedAudioFrame(AudioFrame& audioFrame)
{
	//printf("%s: samples=%d, channel=%d, fs=%d\n", __FUNCTION__, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
	return true;
}

bool AudioFrameObserver::onPlaybackAudioFrameBeforeMixing(unsigned int uid, AudioFrame& audioFrame) 
{
//	printf("%s: uid=%u, samples=%d, channel=%d, fs=%d\n", __FUNCTION__, uid, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
	return true;
}