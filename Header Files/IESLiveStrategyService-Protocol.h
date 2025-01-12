//
//     Generated by private class-dump
//

@protocol IESLiveStrategyService <NSObject>

- (id)getLatestFactor:(id)arg0;
- (void)addStrategyObserver:(id)arg0 InFactor:(id)arg1 withInputValue:(id)arg2;
- (void)removeStrategyObserver:(id)arg0;
- (void)addClientDiagnose:(id)arg0;
- (void)addWeakPlayer:(id)arg0;
- (void)removeClientDiagnose;
- (void)addTrackerDelegate;
- (id)getLatestFactor:(id)arg0 scene:(id)arg1;
- (void)triggerEventWithFactor:(id)arg0 scene:(id)arg1;
- (unsigned long long)streamOrientation:(id)arg0;
- (void)removeTrackerDelegate;
- (void)collectionUserCount:(long long)arg0;
- (void)collectionGameCategory:(id)arg0;
- (void)collectCurrentRoomResolution:(id)arg0;
- (void)collectStreamSDKKey:(id)arg0;
- (void)collectStreamQualityLevel:(long long)arg0;
- (void)collectPublishPointWithStreamDataString:(id)arg0;
- (void)collectVpass:(BOOL)arg0;
- (void)collectVpassSrType:(long long)arg0;
- (void)collectVpassSrIsOn:(BOOL)arg0;
- (void)collectionRoomId:(id)arg0;
- (void)collectIsVsRoom:(BOOL)arg0;
- (void)collectIsSportsRoom:(BOOL)arg0;
- (void)collectVRRoomType:(unsigned long long)arg0;
- (void)collectionIsViceRoom:(BOOL)arg0;
- (void)collectPreStreamOrientation:(unsigned long long)arg0;
- (void)collectRoomMode:(unsigned long long)arg0;
- (void)collectStreamOrientation:(unsigned long long)arg0;
- (void)collectAuthorId:(id)arg0;
- (void)collectEnterFromMerge:(id)arg0;
- (void)collectEnterMethod:(id)arg0;
- (void)collectEnterAction:(id)arg0;
- (void)collectRoomcart:(long long)arg0;
- (void)batchCollectInformation:(id)arg0;
- (void)collectStartLiveTimeStamp:(double)arg0;
- (void)collectCurrentAnchorPushResolution:(id)arg0;
- (void)collectCurrentAnchorPushMaxBitrate:(long long)arg0 minBitrate:(long long)arg1 defaultBitrate:(long long)arg2;
- (void)collectCurrentAnchorPushFrameRate:(long long)arg0;
- (void)collectFeedPreviewPlayerViewShortSide:(long long)arg0;
- (id)publishPointWithStreamDataString:(id)arg0;
- (id)supportQualityCharacterInfo:(id)arg0;
- (void)triggerFactorUpdate:(BOOL)arg0;
- (void)addStrategyCharacterObserver:(id)arg0;
- (void)removeStrategyCharacterObserver:(id)arg0;
- (id)characterValueForKey:(id)arg0;

@end
