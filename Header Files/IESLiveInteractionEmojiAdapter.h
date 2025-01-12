//
//     Generated by private class-dump
//

@class NSHashTable, NSString, NSArray, IESLiveInteractAudienceSettingPannelView, HTSLiveInteractiveAPI, NSMutableDictionary, HTSEventContext, UIView;
@protocol IESLiveRoomService;

@interface IESLiveInteractionEmojiAdapter : NSObject {
    BOOL _fetchingAudienceSetting;
    BOOL _updatingAudienceSetting;
    HTSEventContext *_trackContext;
    NSArray *_settings;
    UIView *_interactEmojiContainerView;
    id<IESLiveRoomService> _room;
    NSString *_requestPage;
    HTSLiveInteractiveAPI *_api;
    NSMutableDictionary *_emojiViewsMapper;
    NSHashTable *_interactAnimationViews;
    IESLiveInteractAudienceSettingPannelView *_settingsView;
    NSHashTable *_mappedEmojiContainer;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *requestPage;
@property (retain, nonatomic) HTSLiveInteractiveAPI *api;
@property (nonatomic) BOOL fetchingAudienceSetting;
@property (nonatomic) BOOL updatingAudienceSetting;
@property (retain, nonatomic) NSMutableDictionary *emojiViewsMapper;
@property (retain, nonatomic) NSHashTable *interactAnimationViews;
@property (weak, nonatomic) IESLiveInteractAudienceSettingPannelView *settingsView;
@property (retain, nonatomic) NSHashTable *mappedEmojiContainer;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSArray *settings;
@property (retain, nonatomic) UIView *interactEmojiContainerView;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)logTag;
- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (void)muteOtherRoom:(id)arg0 state:(BOOL)arg1;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (long long)roomScene;
- (id)settingsView;
- (void)setSettingsView:(id)arg0;
- (void)monitorEvent:(id)arg0 extra:(id)arg1;
- (id)onlineUserWrapper:(id)arg0;
- (void)muteSelf:(BOOL)arg0;
- (BOOL)enableInteractDistribute;
- (BOOL)muteStateForUser:(id)arg0;
- (id)roleForLog;
- (unsigned long long)fastMatchStatus;
- (void)showFastMatchPopupView;
- (BOOL)updatingAudienceSetting;
- (void)setUpdatingAudienceSetting:(BOOL)arg0;
- (BOOL)fetchingAudienceSetting;
- (void)setFetchingAudienceSetting:(BOOL)arg0;
- (id)emojiSeatAnimationViewsForUserID:(id)arg0;
- (void)clickAudienceSettingBtn;
- (struct CGSize { double x0; double x1; })emojiDefaultSizeForContainer:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromEmojiContainer:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)interactEmojiContainerView;
- (id)emojiContainerServiceForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (id)pr_matchCommonTrackParams;
- (void)trackMute:(BOOL)arg0;
- (void)trackDisConnectClick;
- (void)p_trackUpdateUserHost:(BOOL)arg0 toUserID:(id)arg1 userType:(id)arg2;
- (void)removeEmojiForUser:(id)arg0;
- (id)emojiViewWithURLs:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)emojiViews:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromEmojiContainerWithUser:(id)arg0 isInteractiveEmoji:(BOOL)arg1 isQuickThank:(BOOL)arg2;
- (void)showInteractAnimation:(id)arg0 duration:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 isQuickThank:(BOOL)arg4 completion:(id /* block */)arg5;
- (id)buildAnimationFromUser:(id)arg0 toUser:(id)arg1 isQuickThank:(BOOL)arg2;
- (void)showInteractAnimation:(id)arg0 duration:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 path:(id)arg3 mask:(id)arg4 completion:(id /* block */)arg5;
- (id)interactAnimationViews;
- (id)emojiViewsMapper;
- (id)mappedEmojiContainer;
- (id)calculateKTVAnimationFromUser:(id)arg0 toUser:(id)arg1 isQuickThank:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })offsetRectForQuickThank:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)defaultAnimationPathFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (long long)p_hostCount;
- (BOOL)p_userIsHostWithUserID:(id)arg0;
- (double)computeContainerWidthIfOrderSongEntrance;
- (id)playModeParamsForReceiver:(id)arg0;
- (id)buildFollowUserEvent:(id)arg0;
- (id)buildUnFollowUserEvent:(id)arg0;
- (id)buildGuestHonorEvent:(id)arg0;
- (void)clickAudienceSettingBtnFrom:(id)arg0;
- (id)buildItemsFromSettings:(id)arg0;
- (void)showSettingsPanelWithItems:(id)arg0 fromItem:(id)arg1;
- (void)fetchAudienceSettings:(id /* block */)arg0;
- (void)trackClickAudienceSettings;
- (id)buildItem:(int)arg0 from:(id)arg1;
- (void)updateAudienceSetting:(id)arg0 status:(int)arg1;
- (void)muteOthers:(BOOL)arg0 userID:(id)arg1;
- (void)stopOthersConnection:(id)arg0;
- (BOOL)isOthersConnected:(id)arg0;
- (BOOL)isOtherRoom:(id)arg0 userConnected:(id)arg1;
- (void)updateUser:(id)arg0 toIsHost:(BOOL)arg1 comletion:(id /* block */)arg2;
- (void)showEmoji:(id)arg0 withUser:(id)arg1 isInteractiveEmoji:(BOOL)arg2;
- (void)showEmoji:(id)arg0 withContainer:(id)arg1;
- (void)showQuickThankEmoji:(id)arg0 user:(id)arg1;
- (void)showInteractAnimation:(id)arg0 duration:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 completion:(id /* block */)arg4;
- (void)removeInteractAnimation;
- (id)findGuestWithAnchorAnimation:(id)arg0 toUser:(id)arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromEmojiContainer:(id)arg0 resource:(id)arg1 randomOffset:(BOOL)arg2;
- (void)trackShowPanelWithRequestPage:(id)arg0 params:(id)arg1;
- (void)trackEmojiShowWith:(id)arg0 params:(id)arg1;
- (void)trackEmojiClickWith:(id)arg0 params:(id)arg1;
- (void)trackEmojiSendWith:(id)arg0 toUserID:(id)arg1 requestPage:(id)arg2 params:(id)arg3;
- (void)trackActivityEmojiSendWith:(id)arg0 toUserID:(id)arg1 params:(id)arg2;
- (void)trackFollowUser:(id)arg0;
- (void)trackUnfollowUser:(id)arg0;
- (void)trackGuestHonorEvent:(id)arg0 targetUser:(id)arg1;
- (void)startFastMatch;
- (void)showMultiAudioKTVSingModePicker;
- (BOOL)enableShowAudienceSetting;
- (void)trackFastMatchIconShow;
- (void)trackFastMatchIconClick;
- (BOOL)disableShowOnMessageFields;
- (BOOL)isAllMicReadyForEmojiAmongUserIDs:(id)arg0;
- (void)setInteractEmojiContainerView:(id)arg0;
- (void)setEmojiViewsMapper:(id)arg0;
- (void)setInteractAnimationViews:(id)arg0;
- (void)setMappedEmojiContainer:(id)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (BOOL)isAnchor;
- (void)stopConnection;
- (unsigned long long)currentScene;
- (id)settings;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)api;
- (id)initWithRoom:(id)arg0;
- (void)setApi:(id)arg0;

@end
