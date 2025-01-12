//
//     Generated by private class-dump
//

@class HMDThreadSafeDictionary;

@interface RTVVoipBillTracker : NSObject {
    HMDThreadSafeDictionary *_callVideoDescDict;
    HMDThreadSafeDictionary *_userVideoFrameDescDict;
    unsigned long long _videoUserCount;
    unsigned long long _audioUserCount;
    double _pureAudioStartTime;
    double _pureAudioTime;
    double _audioStartTime;
    double _audioAllTime;
    double _idleStartTime;
    double _idleTime;
    struct CGSize { double width; double height; } _localVideoEncodeSize;
}

@property (retain, nonatomic) HMDThreadSafeDictionary *callVideoDescDict;
@property (retain, nonatomic) HMDThreadSafeDictionary *userVideoFrameDescDict;
@property (nonatomic) unsigned long long videoUserCount;
@property (nonatomic) unsigned long long audioUserCount;
@property (nonatomic) double pureAudioStartTime;
@property (nonatomic) double pureAudioTime;
@property (nonatomic) double audioStartTime;
@property (nonatomic) double audioAllTime;
@property (nonatomic) double idleStartTime;
@property (nonatomic) double idleTime;
@property (nonatomic) struct CGSize { double width; double height; } localVideoEncodeSize;

- (void)setAudioStartTime:(double)arg0;
- (double)audioStartTime;
- (unsigned long long)audioUserCount;
- (void)setAudioUserCount:(unsigned long long)arg0;
- (void)addAudioDurationIfNeeded;
- (void)addPureAudioDuration;
- (unsigned long long)videoUserCount;
- (void)setVideoUserCount:(unsigned long long)arg0;
- (void)trackVideoCallEndWithUserID:(id)arg0 voipModel:(id)arg1 voipTracker:(id)arg2 needUpdate:(BOOL)arg3;
- (void)setPureAudioStartTime:(double)arg0;
- (id)callVideoDescDict;
- (void)addPureAudioDurationIfNeeded;
- (id)userVideoFrameDescDict;
- (void)setLocalVideoEncodeSize:(struct CGSize { double x0; double x1; })arg0;
- (void)trackOnVideoResolutionQualityChangeWithUserID:(id)arg0 voipModel:(id)arg1 voipTracker:(id)arg2;
- (void)trackVideoBillDurationWithVoipModel:(id)arg0 voipTracker:(id)arg1;
- (double)pureAudioStartTime;
- (double)pureAudioTime;
- (void)setPureAudioTime:(double)arg0;
- (double)audioAllTime;
- (void)setAudioAllTime:(double)arg0;
- (void)trackEventWithEventName:(id)arg0 voipModel:(id)arg1 voipTracker:(id)arg2 otherParams:(id)arg3;
- (struct CGSize { double x0; double x1; })localVideoEncodeSize;
- (void)onXrEngineUserUnpublishStream:(id)arg0 type:(unsigned long long)arg1 voipModel:(id)arg2 voipTracker:(id)arg3;
- (void)onXrEngineUserPublishStream:(id)arg0 type:(unsigned long long)arg1 voipModel:(id)arg2 voipTracker:(id)arg3;
- (void)onXrEngineFirstRemoteVideoFrameDecoded:(id)arg0 withFrameInfo:(id)arg1;
- (void)onXrEngine:(id)arg0 onLocalStreamVideoFrame:(struct CGSize { double x0; double x1; })arg1;
- (void)onXrEngine:(id)arg0 remoteVideoStats:(id)arg1 voipTracker:(id)arg2;
- (void)onXrEngineJoinRoom;
- (void)onXrEngineDidLeaveRoomWithVoipModel:(id)arg0 voipTracker:(id)arg1;
- (void)setCallVideoDescDict:(id)arg0;
- (void)setUserVideoFrameDescDict:(id)arg0;
- (void).cxx_destruct;
- (void)setIdleTime:(double)arg0;
- (double)idleTime;
- (double)idleStartTime;
- (void)setIdleStartTime:(double)arg0;

@end
