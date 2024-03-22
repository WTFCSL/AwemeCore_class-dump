//
//     Generated by private class-dump
//

@protocol IESLiveAnchorRecordPreferenceService <NSObject>

@property (nonatomic) BOOL playbackAllowed;
@property (nonatomic) BOOL realTimeReplayAllowed;
@property (nonatomic) BOOL syncProductAllowed;
@property (nonatomic) BOOL productReplayAllowed;
@property (nonatomic) BOOL audienceRecordAllowed;
@property (nonatomic) BOOL autoPublishAllowed;

- (void)markEntryShown;
- (BOOL)isEntryShownBefore;
- (void)requestReplaySettingWithCompletion:(id /* block */)arg0;
- (id)latestConfig;
- (void)updateReplaySettingSwitchWithType:(long long)arg0 enable:(BOOL)arg1 roomID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateReplayRecord:(BOOL)arg0 roomID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateSyncProduct:(BOOL)arg0 roomID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)realTimeReplayAllowed;
- (void)setRealTimeReplayAllowed:(BOOL)arg0;
- (BOOL)syncProductAllowed;
- (void)setSyncProductAllowed:(BOOL)arg0;
- (BOOL)productReplayAllowed;
- (void)setProductReplayAllowed:(BOOL)arg0;
- (BOOL)audienceRecordAllowed;
- (void)setAudienceRecordAllowed:(BOOL)arg0;
- (BOOL)autoPublishAllowed;
- (void)setAutoPublishAllowed:(BOOL)arg0;
- (void)setPlaybackAllowed:(BOOL)arg0;
- (BOOL)playbackAllowed;

@end