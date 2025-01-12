//
//     Generated by private class-dump
//

@class UIView, NSString, AFDCloseFriendsVisitorSourceTypeView, AWEUserListPanelCellItem, UIButton, UIViewController, DUXPopover, AWEPopoverActionSheet;
@protocol AWEIMCustomQuickReplyControllerHandlerPortocol, AWEIMActiveUserInfoService;

@interface AWEUserListPanelCell : AWEUIListTableViewCell <AWEUserMessage, AWEPadUIAdaptionViewTransitionObserver> {
    BOOL _useLocalRecReason;
    BOOL _replyFriendIMShowTracked;
    BOOL _replyFriendIMshowTrackedByMoreAction;
    BOOL _getLightedSourceWhenUpdate;
    NSString *_pageIdentifier;
    AWEUserListPanelCellItem *_item;
    double _actionButtonWidth;
    UIButton *_moreAction;
    UIView *_highlightBackgroundView;
    UIViewController *_topViewController;
    UIView *_onlineDotView;
    NSString *_uniqueFlag;
    id<AWEIMCustomQuickReplyControllerHandlerPortocol> _imCustomQuickReplyHandler;
    AWEPopoverActionSheet *_popover;
    DUXPopover *_duxPopover;
    id<AWEIMActiveUserInfoService> _activeInfo;
    NSString *_currentLoginUid;
    AFDCloseFriendsVisitorSourceTypeView *_sourceTypeView;
}

@property (retain, nonatomic) AWEUserListPanelCellItem *item;
@property (nonatomic) double actionButtonWidth;
@property (retain, nonatomic) UIButton *moreAction;
@property (retain, nonatomic) UIView *highlightBackgroundView;
@property (weak, nonatomic) UIViewController *topViewController;
@property (retain, nonatomic) UIView *onlineDotView;
@property (copy, nonatomic) NSString *uniqueFlag;
@property (retain, nonatomic) id<AWEIMCustomQuickReplyControllerHandlerPortocol> imCustomQuickReplyHandler;
@property (nonatomic) BOOL replyFriendIMShowTracked;
@property (nonatomic) BOOL replyFriendIMshowTrackedByMoreAction;
@property (nonatomic) BOOL getLightedSourceWhenUpdate;
@property (weak, nonatomic) AWEPopoverActionSheet *popover;
@property (weak, nonatomic) DUXPopover *duxPopover;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (copy, nonatomic) NSString *currentLoginUid;
@property (retain, nonatomic) AFDCloseFriendsVisitorSourceTypeView *sourceTypeView;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) BOOL useLocalRecReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (id)_defaultImage;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHideMyPostFromUser:(id)arg0 status:(long long)arg1;
- (void)didFinishShowMyPostToUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishUnHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)onAWEUIThemeChange;
- (void)awe_viewController:(id)arg0 willTransitionToSize:(struct CGSize { double x0; double x1; })arg1 transitionCoordinator:(id)arg2;
- (id)onlineDotView;
- (void)setActiveInfo:(id)arg0;
- (id)activeInfo;
- (void)setOnlineDotView:(id)arg0;
- (void)followBtnClicked;
- (void)highlightWithColor:(id)arg0;
- (void)highlightWithColor:(id)arg0 completion:(id /* block */)arg1;
- (id)duxPopover;
- (void)setDuxPopover:(id)arg0;
- (id)uniqueFlag;
- (void)setUniqueFlag:(id)arg0;
- (BOOL)shouldShowLightInteractionEntrance;
- (BOOL)shouldShowSendMessageEntrance;
- (double)actionButtonWidth;
- (BOOL)replyFriendIMShowTracked;
- (void)setReplyFriendIMShowTracked:(BOOL)arg0;
- (double)recommendLabelWidth;
- (void)setActionButtonWidth:(double)arg0;
- (void)setUseLocalRecReason:(BOOL)arg0;
- (void)p_unfollowUser;
- (void)setSourceTypeView:(id)arg0;
- (id)sourceTypeView;
- (void)setGetLightedSourceWhenUpdate:(BOOL)arg0;
- (id)lightInteractionSource;
- (BOOL)shouldShowPokeButton;
- (void)_refreshFollowBtnUI;
- (BOOL)shouldShowMoreActionByFriendWatch;
- (id)__getSuperTableView;
- (void)__tapMoreAction;
- (BOOL)useLocalRecReason;
- (id)stringWithRewardAmount:(long long)arg0;
- (void)__pressMoreAction;
- (void)__pressRelease;
- (BOOL)favoriteCellShouldShowFollowFriendsTitle;
- (void)__trackRewardCellIMEventType:(id)arg0;
- (BOOL)shouldLightInteractionChangeToSendMsg;
- (void)__trackPokeClickWithEventType:(id)arg0 withButtonType:(long long)arg1;
- (void)updateActiveStatusWithShareModel:(id)arg0;
- (void)__trackQuickReplyWithEventType:(id)arg0;
- (void)refreshBottomRightCornerIcon;
- (void)__preSetSendMessageParamsWithPid:(id)arg0;
- (void)setImCustomQuickReplyHandler:(id)arg0;
- (id)imCustomQuickReplyHandler;
- (BOOL)isECommerceBoostInfoPanelCell;
- (void)__trackEnterChat;
- (id)__getRelationContext;
- (void)__tapMoreActionWithDUXPopover;
- (void)__tapMoreActionWithAWEPopover;
- (BOOL)isFavoriteListCell;
- (void)setReplyFriendIMshowTrackedByMoreAction:(BOOL)arg0;
- (void)__unhideMyPost;
- (void)__hideMyPost;
- (BOOL)replyFriendIMshowTrackedByMoreAction;
- (BOOL)getLightedSourceWhenUpdate;
- (id)currentLoginUid;
- (void)setCurrentLoginUid:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)popover;
- (id)userModel;
- (id)topViewController;
- (void)prepareForReuse;
- (void)setPopover:(id)arg0;
- (void)dealloc;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (id)highlightBackgroundView;
- (void)setHighlightBackgroundView:(id)arg0;
- (id)moreAction;
- (void)setMoreAction:(id)arg0;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg0;
- (void)_refreshUI;
- (void)setTopViewController:(id)arg0;

@end
