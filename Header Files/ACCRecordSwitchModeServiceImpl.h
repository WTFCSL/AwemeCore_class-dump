//
//     Generated by private class-dump
//

@class NSHashTable, NSString, NSArray, ACCCameraSubscription, ACCRecordMode, NSMutableDictionary, AWEVideoPublishViewModel, NSMutableArray;
@protocol ACCRecordSwitchModeServiceAuthorityChecker, ACCRecordSwitchModeSwitchContextSubscriber, ACCRecordSwitchModeMomentCamera, ACCRecordModeFactory, ACCRecordConfigService, ACCVideoConfigProtocol;

@interface ACCRecordSwitchModeServiceImpl : NSObject <ACCRecordSwitchModeService> {
    BOOL _shouldUpdateTabConfigArray;
    ACCRecordMode *_currentRecordMode;
    ACCRecordMode *_changingToMode;
    id<ACCRecordSwitchModeServiceAuthorityChecker> _authorityChecker;
    id<ACCRecordSwitchModeSwitchContextSubscriber> _switchContextSubscriber;
    id<ACCRecordSwitchModeMomentCamera> _switchModeMomentCameraSubscriber;
    id<ACCRecordModeFactory> _modeFactory;
    AWEVideoPublishViewModel *_repository;
    id<ACCVideoConfigProtocol> _videoConfig;
    id<ACCRecordConfigService> _configService;
    ACCRecordMode *_initialRecordMode;
    NSMutableArray *_modeArray;
    NSArray *_tabConfigArray;
    ACCRecordMode *_lastMode;
    NSMutableDictionary *_modeDicationary;
    ACCCameraSubscription *_subscription;
    NSHashTable *_lastSubscribers;
}

@property (retain, nonatomic) ACCRecordMode *currentRecordMode;
@property (retain, nonatomic) ACCRecordMode *initialRecordMode;
@property (weak, nonatomic) ACCRecordMode *changingToMode;
@property (retain, nonatomic) NSMutableArray *modeArray;
@property (copy, nonatomic) NSArray *tabConfigArray;
@property (nonatomic) BOOL shouldUpdateTabConfigArray;
@property (retain, nonatomic) ACCRecordMode *lastMode;
@property (retain, nonatomic) NSMutableDictionary *modeDicationary;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSHashTable *lastSubscribers;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCRecordConfigService> configService;
@property (weak, nonatomic) id<ACCRecordSwitchModeServiceAuthorityChecker> authorityChecker;
@property (weak, nonatomic) id<ACCRecordSwitchModeSwitchContextSubscriber> switchContextSubscriber;
@property (weak, nonatomic) id<ACCRecordSwitchModeMomentCamera> switchModeMomentCameraSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)videoConfig;
- (void)setVideoConfig:(id)arg0;
- (id)initialRecordMode;
- (id)authorityChecker;
- (void)setAuthorityChecker:(id)arg0;
- (id)switchContextSubscriber;
- (void)setSwitchContextSubscriber:(id)arg0;
- (id)switchModeMomentCameraSubscriber;
- (void)setSwitchModeMomentCameraSubscriber:(id)arg0;
- (id)modeArray;
- (id)currentRecordMode;
- (id)changingToMode;
- (id)tabConfigArray;
- (void)addMode:(id)arg0;
- (void)removeMode:(id)arg0;
- (void)switchMode:(id)arg0;
- (void)switchToLastVideoRecordMode;
- (BOOL)canSwitchToVideoRecordMode;
- (void)switchToModeWithReplace:(id)arg0 newMode:(id)arg1 withAnimation:(id /* block */)arg2 afterBlock:(id /* block */)arg3;
- (void)switchToModeWithId:(long long)arg0;
- (BOOL)containsModeWithId:(long long)arg0;
- (void)updateTabConfigForModeId:(long long)arg0 Block:(id /* block */)arg1;
- (BOOL)isInSegmentMode;
- (BOOL)isInSegmentMode:(long long)arg0;
- (BOOL)isVideoCaptureMode;
- (BOOL)isFrameIn4_3;
- (void)switchToLengthMode:(long long)arg0;
- (unsigned long long)getTabConfigIndexWithModeId:(long long)arg0;
- (id)getModeWithTabConfigIndex:(unsigned long long)arg0;
- (id)getRecordModeWithModeId:(long long)arg0;
- (void)registerCurrentModeToByteBenchCenter;
- (void)setTabConfigArray:(id)arg0;
- (id)modeFactory;
- (void)setModeFactory:(id)arg0;
- (void)setLastMode:(id)arg0;
- (id)configService;
- (void)setConfigService:(id)arg0;
- (id)lastMode;
- (void)p_addMode:(id)arg0;
- (void)notifyModeArrayChanged;
- (void)setShouldUpdateTabConfigArray:(BOOL)arg0;
- (long long)setupInitialRecordModeWithEnterFrom;
- (void)setCurrentRecordMode:(id)arg0;
- (void)p_switchMode:(id)arg0 oldMode:(id)arg1;
- (id)anyVideoRecordMode;
- (void)setChangingToMode:(id)arg0;
- (void)passAuthSwitchMode:(id)arg0 oldMode:(id)arg1;
- (BOOL)shouldUpdateTabConfigArray;
- (long long)modeIdWithTabConfig:(id)arg0;
- (id)modeDicationary;
- (long long)obtainParentModelID:(id)arg0;
- (id)lastSubscribers;
- (BOOL)isLastSubscriber:(id)arg0;
- (void)setInitialRecordMode:(id)arg0;
- (void)setModeArray:(id)arg0;
- (void)setModeDicationary:(id)arg0;
- (void)setLastSubscribers:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;
- (void)setSubscription:(id)arg0;
- (void)addSubscriber:(id)arg0;
- (id)subscription;

@end
