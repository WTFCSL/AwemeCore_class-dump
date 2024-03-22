//
//     Generated by private class-dump
//

@protocol IESLiveAnchorToolsModule <NSObject>

- (void)resumeLive;
- (id)customVideoBufferRouter;
- (id)noticeRouter;
- (id)administerPrivilegeRouter;
- (id)anchorTaskRouter;
- (BOOL)isLivePaused;
- (BOOL)isEnableMirror;
- (BOOL)isCameraMirrored;
- (void)toggleCameraMirror;
- (BOOL)isEnableDynamicClarity;
- (void)toggleChooseClarity;
- (void)pauseLiveWithNoLimit;
- (void)updatePushStreamConfig:(id)arg0 type:(id)arg1;
- (id)stickerInterface;
- (id)backRecordInterface;
- (BOOL)inAnchorVideoPlayMode;
- (id)currentPlayingVideoID;
- (void)startPlayVideoPersonalVideoWithDict:(id)arg0;
- (void)stopPlayVideoPersonalVideo;
- (id)getSetAdminAuthorityVCInWhiteStyle:(BOOL)arg0 height:(double)arg1 isBottomType:(BOOL)arg2;
- (void)addLocationObseverWithPiper:(id)arg0;
- (id)calendarInterface;

@end