#pragma once

#include <IAgoraMediaEngine.h>
#include <stdio.h>

class AudioFrameObserver : public agora::media::IAudioFrameObserver
{
public:
	virtual bool onRecordAudioFrame(AudioFrame& audioFrame) 
	{
		//printf("%s: samples=%d, channel=%d, fs=%d\n", __FUNCTION__, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
		return true;
	}
	virtual bool onPlaybackAudioFrame(AudioFrame& audioFrame) 
	{
		printf("%s: samples=%d, channel=%d, fs=%d\n", __FUNCTION__, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
		return true;
	}
	virtual bool onMixedAudioFrame(AudioFrame& audioFrame)
	{
		//printf("%s: samples=%d, channel=%d, fs=%d\n", __FUNCTION__, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
		return true;
	}
	virtual bool onPlaybackAudioFrameBeforeMixing(unsigned int uid, AudioFrame& audioFrame) 
	{
	//	printf("%s: uid=%u, samples=%d, channel=%d, fs=%d\n", __FUNCTION__, uid, audioFrame.samples, audioFrame.channels, audioFrame.samplesPerSec);
		return true;
	}
};