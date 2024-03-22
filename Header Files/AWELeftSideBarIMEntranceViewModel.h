//
//     Generated by private class-dump
//

@class NSURL, BFTaskCompletionSource, NSString;
@protocol AWELeftSideBarIMEntranceConfigProtocol;

@interface AWELeftSideBarIMEntranceViewModel : NSObject <AWEIMIntimacyChatAvatarListener, AWELeftSideBarIMEntranceViewModelProtocol> {
    BOOL _isShowingNewMessageText;
    BOOL _shouldShowIMBubble;
    BOOL _leftSideBarIMEntranceShow;
    BOOL _hasInvokeBubble;
    BOOL _hasLeavedFeed;
    BOOL _tabbarChangeEnabel;
    BOOL _hasShowNewMessageText;
    int _preUnreadCount;
    long long _allIMUnreadCount;
    NSURL *_intimacyChatAvatarURL;
    id<AWELeftSideBarIMEntranceConfigProtocol> _config;
    BFTaskCompletionSource *_observerUnreadTaskSource;
    BFTaskCompletionSource *_feedLifeTaskSource;
}

@property (nonatomic) long long allIMUnreadCount;
@property (nonatomic) BOOL shouldShowIMBubble;
@property (nonatomic) BOOL leftSideBarIMEntranceShow;
@property (retain, nonatomic) NSURL *intimacyChatAvatarURL;
@property (retain, nonatomic) id<AWELeftSideBarIMEntranceConfigProtocol> config;
@property (nonatomic) BOOL hasInvokeBubble;
@property (retain, nonatomic) BFTaskCompletionSource *observerUnreadTaskSource;
@property (retain, nonatomic) BFTaskCompletionSource *feedLifeTaskSource;
@property (nonatomic) BOOL hasLeavedFeed;
@property (nonatomic) int preUnreadCount;
@property (nonatomic) BOOL tabbarChangeEnabel;
@property (nonatomic) BOOL hasShowNewMessageText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShowingNewMessageText;

- (void)dispatch_feedContainerViewDidAppear;
- (void)dispatch_feedContainerViewDidDisappear;
- (void)jumpToIMListWithEnterTab:(unsigned long long)arg0 extModel:(id)arg1;
- (BOOL)enableAddBackground;
- (long long)allIMUnreadCount;
- (int)preUnreadCount;
- (BOOL)enableShowNewMessageText;
- (id)intimacyChatAvatarURL;
- (BOOL)isShowingNewMessageText;
- (void)setIsShowingNewMessageText:(BOOL)arg0;
- (void)didShowNewMessageText;
- (BOOL)leftSideBarIMEntranceShow;
- (BOOL)currentSelectedTabbarTypeIsEqualEntranceType;
- (void)setObserverUnreadTaskSource:(id)arg0;
- (void)setFeedLifeTaskSource:(id)arg0;
- (void)listenIntimacyChatAvatar;
- (void)showIMUnradCountSnapShotIfNeed;
- (id)observerUnreadTaskSource;
- (void)setAllIMUnreadCount:(long long)arg0;
- (id)feedLifeTaskSource;
- (BOOL)hasInvokeBubble;
- (void)setHasInvokeBubble:(BOOL)arg0;
- (void)setShouldShowIMBubble:(BOOL)arg0;
- (void)observerImUnreadCountChange;
- (void)observerTabbarChangeNotification;
- (void)handleDidTabbarSelectedIndexChangeNty:(id)arg0;
- (void)onFeedTopTabChanged:(id)arg0;
- (void)onFriendTopTabChanged:(id)arg0;
- (void)trackShowMessageNoticeShow;
- (void)setTabbarChangeEnabel:(BOOL)arg0;
- (void)setPreUnreadCount:(int)arg0;
- (void)showIMBubbleViewIfNeed;
- (void)setIntimacyChatAvatarURL:(id)arg0;
- (void)setLeftSideBarIMEntranceShow:(BOOL)arg0;
- (void)completFeedLifeTask;
- (BOOL)hasShowNewMessageText;
- (void)setHasShowNewMessageText:(BOOL)arg0;
- (void)didUpdateAvatarUrl:(id)arg0;
- (BOOL)tabbarChangeEnabel;
- (BOOL)shouldShowIMBubble;
- (BOOL)hasLeavedFeed;
- (void)setHasLeavedFeed:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)addObserver;
- (double)iconImageScale;

@end