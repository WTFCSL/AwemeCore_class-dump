//
//     Generated by private class-dump
//

@class NSString;

@interface IESLivePlaybackAdapterImpl : NSObject <IESLivePlaybackAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideCloseButton;
- (BOOL)isScreenCasting;
- (void)playbackTrackEvent:(id)arg0 params:(id)arg1;
- (void)commentRefreshUserInfoWithCompletion:(id /* block */)arg0;
- (void)requestUserProfile:(id)arg0 secUid:(id)arg1 completion:(id /* block */)arg2;
- (void)showSharePanelWithSource:(id)arg0 user:(id)arg1 focusTabID:(unsigned long long)arg2 tokenImage:(id)arg3 trackContext:(id)arg4 eventContext:(id)arg5 douplusHandler:(id /* block */)arg6;
- (BOOL)isPlayBackContentAuthorizedToThisClientWithUser:(id)arg0;
- (double)commentButtonContentWidth;
- (BOOL)isInPiPMode;
- (void)ieslive_applyAccessibilityWithView:(id)arg0 label:(id)arg1;
- (void)ieslive_applyAccessibilityWithView:(id)arg0 label:(id)arg1 hint:(id)arg2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (id)cellularFragmentRoomAudienceLoadStateObserver;
- (void)cellularReplayTip:(long long)arg0 withIndex:(long long)arg1;
- (void)constructTrackContextWithModel:(id)arg0 eventContext:(id)arg1;
- (id)constructTrackContextWithModelParams:(id)arg0 params:(id)arg1;
- (void)addCommomAttributeWithKey:(id)arg0 value:(id)arg1 eventContext:(id)arg2;
- (void)updateOrientationWithEventContext:(id)arg0;
- (id)enterFromWithEventContext:(id)arg0;
- (id)enterMethodWithEventContext:(id)arg0;
- (id)adExtraWithEventContext:(id)arg0;
- (BOOL)isFollowWithInfo:(id)arg0;
- (BOOL)enablePopupPan;
- (id)commonModelWithGPB:(id)arg0;
- (BOOL)isFirstResponderForIsAutoOrientationChangeForbidden;
- (BOOL)multiTabServiceCanAutoOrientation;
- (id)emoticonItems;
- (BOOL)IESLiveDouyin;
- (id)createMessageActionCreator:(id)arg0;
- (void)fetchSettingsIsForcible:(BOOL)arg0 isColdLaunch:(BOOL)arg1;
- (id)IESLivePlaybackMainTabServiceTrackerParameters;
- (id)componentsConfigFromPlist;
- (BOOL)isNeedDanmakuWithRole:(BOOL)arg0 blockRoleComment:(id)arg1;
- (BOOL)isSaaS;
- (id)fakeShowChatMessageFromShowChatRes:(id)arg0;
- (void)openUserPageWithUserID:(id)arg0 secUid:(id)arg1;
- (void)unfollowUserWithBlock:(id /* block */)arg0;
- (void)coreTransformerWithOriginalMessage:(id)arg0 withNeedTransformerMessage:(id)arg1;
- (id)createVideoPaidProvider;
- (void)vsMessageDispatchProviderAddSubscriberForAll:(id)arg0;
- (id)screenCastSDKCommonParams;
- (id)createSharedIESScreenCastAdapter;
- (id)createScreenCastContainerViewController;
- (id)createScreenCastSearchContainerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)logAnchorCloseRoomSource:(id)arg0;
- (BOOL)hasAuthenticationIconImageWithUser:(id)arg0;
- (id)authenticationIconImageWithUser:(id)arg0;
- (id)quickReplyEmoticonItems;
- (id)loadFaveriteStickerResource;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getPlayerPortraitFrame;
- (id)transformModelFromWithEmojiModels:(id)arg0;
- (id)playBackVideoResolutionStateKey;
- (void)downloadDanmakuEffectResourceWithCategory:(id)arg0 panelName:(id)arg1 completion:(id /* block */)arg2;
- (void)focusBlockLiveEpisode:(id)arg0 completion:(id /* block */)arg1;
- (id)createCommonPopoverViewWithLockButton:(id)arg0 tip:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldReceiveTouch:(id)arg0;
- (void)showCloseButton;

@end