//
//     Generated by private class-dump
//

@protocol AWELiveEntryProtocol <HTSService>

- (void)removeLiveGuideBubbleIfNeeded;
- (BOOL)isLiving;
- (BOOL)isAudienceDuringLive;
- (id)getLiveRoomFactory;
- (BOOL)isEnableAudioCaptureInBackground;
- (BOOL)isScreenshotLiving;
- (void)trackLiveTerminateData:(id)arg0;
- (id)liveTerminateCacheData;
- (void)clearLiveTerminateCacheData;
- (void)trackLiveFirstRequestCommand:(id)arg0;
- (BOOL)dylibIsLoaded;
- (BOOL)canPreviewLiveAutoEnter:(id)arg0;
- (BOOL)canEnterLiveRoom:(id)arg0;
- (BOOL)hasUsedLiveFunctionRecently;
- (void)prestreamLeave:(id)arg0;
- (id)getLeaveLiveExtra;
- (id)getFeedLiveMarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getFeedLiveMarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getFeedLiveMarkViewNewTypeHeadWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getFeedLiveMarkViewNewTypeHeadWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getFeedLiveMarkViewNewTypeTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getFeedLiveMarkViewNewTypeTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getFeedLiveDecorationViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)getFeedLiveDecorationViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)feedLiveMarkType;
- (unsigned long long)feedLiveMarkDisplayTypeWith:(id)arg0;
- (unsigned long long)feedLiveMarkDisplayTypeWith:(id)arg0;
- (id)getLiveStatusIndicatorView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)updateLivePlayersEyesProtectState:(BOOL)arg0 intensityValue:(double)arg1;
- (void)storeFetchLiveModelOfFeedList:(id)arg0 type:(long long)arg1 referString:(id)arg2;
- (void)storeFetchLiveModelOfFeedList:(id)arg0 type:(long long)arg1 referString:(id)arg2;
- (void)storeLoadLiveModelOfFeedList:(id)arg0 type:(long long)arg1 referString:(id)arg2;
- (void)storeLoadLiveModelOfFeedList:(id)arg0 type:(long long)arg1 referString:(id)arg2;
- (void)hideLiveInappPush;
- (void)loadLiveDylibAndRunFeedReadyWithTask:(id /* block */)arg0;
- (void)loadLiveDylibAndRunFeedReadyWithTask:(id /* block */)arg0;
- (void)appendLiveFeedsWithEnterFrom:(id)arg0 withFeedList:(id)arg1 withTrackExtra:(id)arg2;
- (void)appendLiveFeedsWithEnterFrom:(id)arg0 withFeedList:(id)arg1 withTrackExtra:(id)arg2;
- (void)readLiveFeedWithEnterFrom:(id)arg0 withRoomID:(id)arg1;
- (void)readLiveFeedWithEnterFrom:(id)arg0 withRoomID:(id)arg1;
- (void)refreshPostUnreadRoomsWithEnterFrom:(id)arg0;
- (void)refreshPostUnreadRoomsWithEnterFrom:(id)arg0;
- (void)quitInnerFeedPostUnreadRoomsWithEnterFrom:(id)arg0;
- (void)quitInnerFeedPostUnreadRoomsWithEnterFrom:(id)arg0;
- (BOOL)liveInnerFeedRerankOptEnable;

@end