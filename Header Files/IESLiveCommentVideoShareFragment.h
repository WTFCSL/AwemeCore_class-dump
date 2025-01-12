//
//     Generated by private class-dump
//

@class UIViewController, NSMutableDictionary, IESLiveVideoShareSelectView, NSString, IESLiveCommentVideoShareApi, NSMutableArray;

@interface IESLiveCommentVideoShareFragment : IESLiveRoomComponent <IESLiveCommentVideoShareService, HTSLiveMessageSubscriber, IESLiveSocialInteractAction, IESLiveCommentVideoShareRouter, IESLiveMessageInteractionModuleCommentAction> {
    BOOL _isVideoPlaying;
    BOOL _isRoomEnableVideoShare;
    BOOL _isVideoShareAuthOn;
    BOOL _couldRequestVideo;
    int _defaultTab;
    NSMutableDictionary *_tabVideoListMap;
    NSMutableDictionary *_tabMaxCursorMap;
    NSMutableArray *_tabList;
    IESLiveCommentVideoShareApi *_api;
    UIViewController *_curVideoPlayVC;
    IESLiveVideoShareSelectView *_selectView;
}

@property (retain, nonatomic) NSMutableDictionary *tabVideoListMap;
@property (retain, nonatomic) NSMutableDictionary *tabMaxCursorMap;
@property (retain, nonatomic) NSMutableArray *tabList;
@property (retain, nonatomic) IESLiveCommentVideoShareApi *api;
@property (nonatomic) BOOL isRoomEnableVideoShare;
@property (nonatomic) BOOL isVideoShareAuthOn;
@property (nonatomic) BOOL couldRequestVideo;
@property (weak, nonatomic) UIViewController *curVideoPlayVC;
@property (retain, nonatomic) IESLiveVideoShareSelectView *selectView;
@property (nonatomic) int defaultTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isVideoPlaying;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)trackEvent:(id)arg0 extra:(id)arg1;
- (id)tabList;
- (void)setSelectView:(id)arg0;
- (id)selectView;
- (void)setTabList:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (BOOL)isSelfGuest;
- (id)currentUserType;
- (void)didJoinChannelWithLayout:(id)arg0;
- (void)willLeaveChannelWithLayout:(id)arg0;
- (void)playVideoWithItemID:(id)arg0 trackParams:(id)arg1;
- (BOOL)isRoomEnableVideoShare;
- (BOOL)enableCommentVideoShare;
- (id)videoShareSelectView;
- (BOOL)isVideoShareAuthOn;
- (void)removeCurrentVideoPlayViewControllerIfNeed;
- (void)resetAllVideoListData;
- (BOOL)isVideoListEmptyForTab:(id)arg0;
- (id)videoTabList;
- (id)videoListForTab:(id)arg0;
- (void)loadVideoListForTab:(id)arg0 isFirst:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)sendVideoWithVideo:(id)arg0 tabType:(long long)arg1 needToMoc:(BOOL)arg2 needToPin:(BOOL)arg3 trackExtra:(id)arg4;
- (void)sendVideoWithVideoTab:(id)arg0 indexInList:(long long)arg1 needToMoc:(BOOL)arg2;
- (void)sendVideoWithVideoTab:(id)arg0 indexInList:(long long)arg1 needToMoc:(BOOL)arg2 needToPin:(BOOL)arg3;
- (void)cleanVideoData;
- (void)setTabVideoListMap:(id)arg0;
- (void)setTabMaxCursorMap:(id)arg0;
- (void)setIsRoomEnableVideoShare:(BOOL)arg0;
- (void)setIsVideoShareAuthOn:(BOOL)arg0;
- (void)setCouldRequestVideo:(BOOL)arg0;
- (void)loadVideoTabListIfNeed;
- (void)addActionSheetItem;
- (void)loadVideoShareCommentItem;
- (BOOL)isCurrentSceneEnable;
- (void)setupTabMaxCursorMap;
- (void)setupTabVideoListMap;
- (id)tabMaxCursorMap;
- (id)tabVideoListMap;
- (BOOL)couldRequestVideo;
- (void)setCurVideoPlayVC:(id)arg0;
- (id)curVideoPlayVC;
- (void)mocCommentMessageWithResponse:(id)arg0;
- (void)pinVideoWithResponse:(id)arg0;
- (void).cxx_destruct;
- (void)keyboardWillHide;
- (void)messageReceived:(id)arg0;
- (BOOL)isVideoPlaying;
- (void)setIsVideoPlaying:(BOOL)arg0;
- (id)api;
- (void)setApi:(id)arg0;
- (int)defaultTab;
- (void)setDefaultTab:(int)arg0;

@end
