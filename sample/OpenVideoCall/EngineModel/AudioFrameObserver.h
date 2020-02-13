#pragma once

#include <IAgoraMediaEngine.h>
#include <stdio.h>

class AudioFrameObserver : public agora::media::IAudioFrameObserver
{
public:
	virtual bool onRecordAudioFrame(AudioFrame& audioFrame) ;
	virtual bool onPlaybackAudioFrame(AudioFrame& audioFrame) ;

	virtual bool onMixedAudioFrame(AudioFrame& audioFrame);
	
	virtual bool onPlaybackAudioFrameBeforeMixing(unsigned int uid, AudioFrame& audioFrame) ;
	
};