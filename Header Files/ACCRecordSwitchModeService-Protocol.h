//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, ACCRecordMode;
@protocol ACCRecordSwitchModeServiceAuthorityChecker, ACCRecordSwitchModeSwitchContextSubscriber, ACCRecordSwitchModeMomentCamera;

@protocol ACCRecordSwitchModeService <NSObject>

@property (nonatomic, weak) id<ACCRecordSwitchModeServiceAuthorityChecker> authorityChecker;
@property (nonatomic, weak) id<ACCRecordSwitchModeSwitchContextSubscriber> switchContextSubscriber;
@property (nonatomic, weak) id<ACCRecordSwitchModeMomentCamera> switchModeMomentCameraSubscriber;
@property (nonatomic, readonly) NSMutableArray *modeArray;
@property (nonatomic, readonly) ACCRecordMode *currentRecordMode;
@property (nonatomic, readonly) ACCRecordMode *initialRecordMode;
@property (nonatomic, readonly) ACCRecordMode *changingToMode;
@property (nonatomic, readonly) NSArray *tabConfigArray;

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
- (void)addMode:(id)arg0;
- (void)removeMode:(id)arg0;
- (void)removeMode:(id)arg0;
- (void)switchMode:(id)arg0;
- (void)switchMode:(id)arg0;
- (void)switchToLastVideoRecordMode;
- (BOOL)canSwitchToVideoRecordMode;
- (void)switchToModeWithReplace:(id)arg0 newMode:(id)arg1 withAnimation:(id /* block */)arg2 afterBlock:(id /* block */)arg3;
- (void)switchToModeWithReplace:(id)arg0 newMode:(id)arg1 withAnimation:(id /* block */)arg2 afterBlock:(id /* block */)arg3;
- (void)switchToModeWithId:(long long)arg0;
- (void)switchToModeWithId:(long long)arg0;
- (BOOL)containsModeWithId:(long long)arg0;
- (BOOL)containsModeWithId:(long long)arg0;
- (void)updateTabConfigForModeId:(long long)arg0 Block:(id /* block */)arg1;
- (void)updateTabConfigForModeId:(long long)arg0 Block:(id /* block */)arg1;
- (BOOL)isInSegmentMode;
- (BOOL)isInSegmentMode:(long long)arg0;
- (BOOL)isInSegmentMode:(long long)arg0;
- (BOOL)isVideoCaptureMode;
- (BOOL)isFrameIn4_3;
- (void)switchToLengthMode:(long long)arg0;
- (void)switchToLengthMode:(long long)arg0;
- (unsigned long long)getTabConfigIndexWithModeId:(long long)arg0;
- (unsigned long long)getTabConfigIndexWithModeId:(long long)arg0;
- (id)getModeWithTabConfigIndex:(unsigned long long)arg0;
- (id)getRecordModeWithModeId:(long long)arg0;
- (id)getRecordModeWithModeId:(long long)arg0;
- (void)registerCurrentModeToByteBenchCenter;
- (void)addSubscriber:(id)arg0;
- (void)addSubscriber:(id)arg0;

@end