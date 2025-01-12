//
//     Generated by private class-dump
//

@class NSNumber;

@interface RTVVoipPollingSettings : JSONModel {
    NSNumber *_videoGroupPollingBeforeAcceptIntervalValue;
    NSNumber *_audioGroupPollingBeforeAcceptIntervalValue;
    NSNumber *_video1v1PollingBeforeAcceptIntervalValue;
    NSNumber *_audio1v1PollingBeforeAcceptIntervalValue;
    NSNumber *_voipGroupRoomPollingIntervalValue;
}

@property (retain, nonatomic) NSNumber *videoGroupPollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *audioGroupPollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *video1v1PollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *audio1v1PollingBeforeAcceptIntervalValue;
@property (retain, nonatomic) NSNumber *voipGroupRoomPollingIntervalValue;

+ (id)keyMapper;

- (long long)videoGroupPollingIntervalBeforeAccept;
- (long long)audioGroupPollingIntervalBeforeAccept;
- (long long)video1v1PollingIntervalBeforeAccept;
- (long long)audio1v1PollingIntervalBeforeAccept;
- (long long)pollingPullGroupRoomInfoInterval;
- (id)videoGroupPollingBeforeAcceptIntervalValue;
- (id)audioGroupPollingBeforeAcceptIntervalValue;
- (id)video1v1PollingBeforeAcceptIntervalValue;
- (id)audio1v1PollingBeforeAcceptIntervalValue;
- (id)voipGroupRoomPollingIntervalValue;
- (void)setVideoGroupPollingBeforeAcceptIntervalValue:(id)arg0;
- (void)setAudioGroupPollingBeforeAcceptIntervalValue:(id)arg0;
- (void)setVideo1v1PollingBeforeAcceptIntervalValue:(id)arg0;
- (void)setAudio1v1PollingBeforeAcceptIntervalValue:(id)arg0;
- (void)setVoipGroupRoomPollingIntervalValue:(id)arg0;
- (void).cxx_destruct;

@end
