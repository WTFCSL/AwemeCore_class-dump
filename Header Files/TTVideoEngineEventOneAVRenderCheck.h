//
//     Generated by private class-dump
//

@class TTVideoEngineEventBase, NSDictionary, NSString;
@protocol TTVideoEngineEventLoggerDelegate;

@interface TTVideoEngineEventOneAVRenderCheck : NSObject <TTVideoEngineEventOneAVRenderCheckProtocol> {
    int _noRenderType;
    int _is_abr;
    id<TTVideoEngineEventLoggerDelegate> _delegate;
    TTVideoEngineEventBase *_eventBase;
    long long _startTime;
    long long _costTime;
    NSDictionary *_r_stage_errcs;
    long long _videoFormaterLenMS;
    long long _audioFormaterLenMS;
    long long _videoLenDecMs;
    long long _audioLenDecMs;
    long long _videoLenBaseMs;
    long long _audioLenBaseMs;
    long long _mIndex;
    long long _isAVBadInterlaced;
    NSString *_endType;
    long long _firstFrameTime;
    long long _endTime;
    NSString *_resolutionBefore;
    unsigned long long _mLastRebufT;
    unsigned long long _mLastSeekT;
    unsigned long long _lastForebackSwitchTime;
    unsigned long long _lastAVSwitchTime;
    unsigned long long _lastResSwitchTime;
    unsigned long long _lastHeadsetSwithTime;
    long long _mBeginPos;
    long long _mEndPos;
    long long _mEnableMDL;
    NSString *_mQualityDescBefore;
    long long _isInBackground;
    long long _radioMode;
    long long _curHeadset;
    long long _blueTooth;
    long long _crosstalkCount;
}

@property (retain, nonatomic) TTVideoEngineEventBase *eventBase;
@property (nonatomic) int noRenderType;
@property (nonatomic) long long startTime;
@property (nonatomic) long long costTime;
@property (copy, nonatomic) NSDictionary *r_stage_errcs;
@property (nonatomic) long long videoFormaterLenMS;
@property (nonatomic) long long audioFormaterLenMS;
@property (nonatomic) long long videoLenDecMs;
@property (nonatomic) long long audioLenDecMs;
@property (nonatomic) long long videoLenBaseMs;
@property (nonatomic) long long audioLenBaseMs;
@property (nonatomic) long long mIndex;
@property (nonatomic) long long isAVBadInterlaced;
@property (copy, nonatomic) NSString *endType;
@property (nonatomic) long long firstFrameTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *resolutionBefore;
@property (nonatomic) int is_abr;
@property (nonatomic) unsigned long long mLastRebufT;
@property (nonatomic) unsigned long long mLastSeekT;
@property (nonatomic) unsigned long long lastForebackSwitchTime;
@property (nonatomic) unsigned long long lastAVSwitchTime;
@property (nonatomic) unsigned long long lastResSwitchTime;
@property (nonatomic) unsigned long long lastHeadsetSwithTime;
@property (nonatomic) long long mBeginPos;
@property (nonatomic) long long mEndPos;
@property (nonatomic) long long mEnableMDL;
@property (copy, nonatomic) NSString *mQualityDescBefore;
@property (nonatomic) long long isInBackground;
@property (nonatomic) long long radioMode;
@property (nonatomic) long long curHeadset;
@property (nonatomic) long long blueTooth;
@property (nonatomic) long long crosstalkCount;
@property (weak, nonatomic) id<TTVideoEngineEventLoggerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsInBackground:(long long)arg0;
- (long long)radioMode;
- (void)setRadioMode:(long long)arg0;
- (long long)firstFrameTime;
- (void)setFirstFrameTime:(long long)arg0;
- (void)setCostTime:(long long)arg0;
- (long long)costTime;
- (void)noVARenderStart:(long long)arg0 noRenderType:(int)arg1 extraInfo:(id)arg2;
- (void)setR_stage_errcs:(id)arg0;
- (void)parseBufferLens;
- (void)sendOneAVRenderCheck;
- (void)noVARenderStart:(long long)arg0 noRenderType:(int)arg1;
- (id)noVARenderEnd:(long long)arg0 endType:(id)arg1 noRenderType:(int *)arg2;
- (int)noRenderType;
- (void)setNoRenderType:(int)arg0;
- (id)r_stage_errcs;
- (unsigned long long)lastForebackSwitchTime;
- (unsigned long long)lastAVSwitchTime;
- (unsigned long long)lastResSwitchTime;
- (unsigned long long)lastHeadsetSwithTime;
- (long long)curHeadset;
- (long long)blueTooth;
- (id)initWithEventBase:(id)arg0;
- (void)setEnableMDL:(long long)arg0;
- (void)setValue:(id)arg0 WithKey:(long long)arg1;
- (void)onAVBadInterlaced;
- (id)eventBase;
- (void)setEventBase:(id)arg0;
- (void)setEndType:(id)arg0;
- (long long)videoFormaterLenMS;
- (void)setVideoFormaterLenMS:(long long)arg0;
- (long long)audioFormaterLenMS;
- (void)setAudioFormaterLenMS:(long long)arg0;
- (long long)videoLenDecMs;
- (void)setVideoLenDecMs:(long long)arg0;
- (long long)audioLenDecMs;
- (void)setAudioLenDecMs:(long long)arg0;
- (long long)videoLenBaseMs;
- (void)setVideoLenBaseMs:(long long)arg0;
- (long long)audioLenBaseMs;
- (void)setAudioLenBaseMs:(long long)arg0;
- (id)resolutionBefore;
- (void)setResolutionBefore:(id)arg0;
- (void)setMIndex:(long long)arg0;
- (int)is_abr;
- (void)setIs_abr:(int)arg0;
- (unsigned long long)mLastRebufT;
- (void)setMLastRebufT:(unsigned long long)arg0;
- (unsigned long long)mLastSeekT;
- (void)setMLastSeekT:(unsigned long long)arg0;
- (void)setLastForebackSwitchTime:(unsigned long long)arg0;
- (void)setLastAVSwitchTime:(unsigned long long)arg0;
- (void)setLastResSwitchTime:(unsigned long long)arg0;
- (void)setLastHeadsetSwithTime:(unsigned long long)arg0;
- (long long)mBeginPos;
- (void)setMBeginPos:(long long)arg0;
- (long long)mEndPos;
- (void)setMEndPos:(long long)arg0;
- (long long)mEnableMDL;
- (void)setMEnableMDL:(long long)arg0;
- (id)mQualityDescBefore;
- (void)setMQualityDescBefore:(id)arg0;
- (void)setCurHeadset:(long long)arg0;
- (void)setBlueTooth:(long long)arg0;
- (long long)isAVBadInterlaced;
- (void)setIsAVBadInterlaced:(long long)arg0;
- (long long)crosstalkCount;
- (void)setCrosstalkCount:(long long)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (id)jsonDict;
- (long long)endTime;
- (id)endType;
- (id)delegate;
- (long long)startTime;
- (long long)isInBackground;
- (void)clear;
- (void)setDelegate:(id)arg0;
- (void)setEndTime:(long long)arg0;
- (long long)mIndex;

@end
