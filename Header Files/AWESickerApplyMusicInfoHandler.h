//
//     Generated by private class-dump
//

@class NSString, NSSet, NSArray, NSTimer, IESEffectModel, NSObject, AWEVideoPublishViewModel;
@protocol ACCRecordCutMusicServiceProtocol, ACCRecordSelectMusicService, OS_dispatch_queue;

@interface AWESickerApplyMusicInfoHandler : AWEStickerApplyBaseHandler <ACCCameraLifeCircleEvent, ACCRecordFlowServiceSubscriber> {
    id<ACCRecordSelectMusicService> _musicService;
    id<ACCRecordCutMusicServiceProtocol> _recordCutMusicService;
    AWEVideoPublishViewModel *_repository;
    NSObject<OS_dispatch_queue> *_musicInfoMsgQueue;
    IESEffectModel *_currentSticker;
    long long _maxSendFps;
    unsigned long long _currentInfoType;
    NSSet *_shouldSendMusicInfoKeys;
    NSArray *_musicInfoObservers;
    NSTimer *_fixedFrequencyTimer;
    double _currentPlayTime;
}

@property (retain, nonatomic) id<ACCRecordSelectMusicService> musicService;
@property (retain, nonatomic) id<ACCRecordCutMusicServiceProtocol> recordCutMusicService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *musicInfoMsgQueue;
@property (retain, nonatomic) IESEffectModel *currentSticker;
@property (nonatomic) long long maxSendFps;
@property (nonatomic) unsigned long long currentInfoType;
@property (retain, nonatomic) NSSet *shouldSendMusicInfoKeys;
@property (retain, nonatomic) NSArray *musicInfoObservers;
@property (retain, nonatomic) NSTimer *fixedFrequencyTimer;
@property (nonatomic) double currentPlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayTime;
- (void)setCurrentPlayTime:(double)arg0;
- (id)musicService;
- (void)setMusicService:(id)arg0;
- (void)flowServiceStateDidChanged:(unsigned long long)arg0 preState:(unsigned long long)arg1;
- (void)flowServiceDidRemoveLastSegment:(BOOL)arg0;
- (void)cameraService:(id)arg0 pauseRecordWithError:(id)arg1;
- (void)cameraService:(id)arg0 didChangeBGMProgress:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)currentSticker;
- (void)setMusicInfoMsgQueue:(id)arg0;
- (void)p_resetDefaultInfo;
- (void)setCurrentSticker:(id)arg0;
- (void)p_observerMusicInfoChangeIfNeeded;
- (void)p_unobserverMusicInfoChangeIfNeeded;
- (void)p_handlePickMusicModel:(id)arg0 selectFrom:(long long)arg1 isFirstApplyProp:(BOOL)arg2;
- (void)p_handleTaskId:(long long)arg0 json:(id)arg1;
- (long long)maxSendFps;
- (double)p_getDurationWithMusicModel:(id)arg0 musicAsset:(id)arg1;
- (double)p_getTimeIntervalWithBGMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 duration:(double)arg1;
- (void)p_invalidFixedFrequencyTimerIfNeeded;
- (void)p_sendMusicInfoIfNeeded;
- (id)fixedFrequencyTimer;
- (void)setFixedFrequencyTimer:(id)arg0;
- (void)p_restoreCurrentPlayTimeWithApplyProp:(BOOL)arg0;
- (void)setMaxSendFps:(long long)arg0;
- (void)setShouldSendMusicInfoKeys:(id)arg0;
- (void)setCurrentInfoType:(unsigned long long)arg0;
- (id)musicInfoObservers;
- (void)p_handleCancelMusicModel;
- (void)p_sendDefaultMusicInfoIfNeededWithApplyProp:(BOOL)arg0;
- (void)setMusicInfoObservers:(id)arg0;
- (id)shouldSendMusicInfoKeys;
- (BOOL)p_hasFullInfoWithModel:(id)arg0;
- (id)p_shouldRefreshKeysForMusicModel;
- (void)p_asyncSendMusicInfoMessageToEffectWithStatus:(unsigned long long)arg0 bodyAssembler:(id /* block */)arg1;
- (id)p_assembleBodyWithSendKeys:(id)arg0 musicModel:(id)arg1 audioRange:(struct _HTSAudioRange { double x0; double x1; })arg2 musicAsset:(id)arg3 currentPlayTime:(double)arg4;
- (id)musicInfoMsgQueue;
- (unsigned long long)currentInfoType;
- (id)recordCutMusicService;
- (void)handlerDidBecomeActive;
- (void)camera:(id)arg0 didApplySticker:(id)arg1 success:(BOOL)arg2;
- (void)camera:(id)arg0 didRecvMessage:(id)arg1;
- (void)setRecordCutMusicService:(id)arg0;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end
