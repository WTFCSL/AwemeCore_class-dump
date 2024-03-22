//
//     Generated by private class-dump
//

@class UIView, UILongPressGestureRecognizer, NSString, AWENotificationModelNew, UIImageView, UIButton, AWENoticeQuoteAssemblyContentView, MASConstraint, NSDictionary, AWENoticeFollowButton, UILabel, AWEAliasEditLabel;
@protocol AFDCustomMorePopoverSheetControllerProtocol;

@interface AWEIMFansTableViewCell : AWEIMInteractBaseTableViewCell <AWEUserMessage, AFDFriendsListMoreSettingsDelegate> {
    BOOL _enableLongPress;
    BOOL _notShowRedBGColor;
    BOOL _replyFriendIMShowTracked;
    NSString *_enterFrom;
    NSString *_showedUserIDs;
    NSString *_ruleId;
    AWENotificationModelNew *_model;
    id /* block */ _handleTapOnAvatar;
    id /* block */ _followRequestRefused;
    id /* block */ _followRequestApproved;
    id /* block */ _followRequestCancelled;
    id /* block */ _handleLongPress;
    id /* block */ _lightInteractionBlock;
    id /* block */ _deleteFansNoticeBlock;
    id /* block */ _removeFansBlock;
    NSDictionary *_extraTrackParams;
    UIImageView *_avatarView;
    AWEAliasEditLabel *_nameLabel;
    AWENoticeFollowButton *_followBtn;
    UILabel *_relationTagLabel;
    UIImageView *_verificationIcon;
    UIView *_dotView;
    AWENoticeQuoteAssemblyContentView *_quoteSubAssemblyContentView;
    UIButton *_moreBtn;
    MASConstraint *_nameLabelMaxWidthConstraint;
    MASConstraint *_relationTagLeadingConstraint;
    id /* block */ _sendMsgBlock;
    NSDictionary *_settingsTitleDic;
    UILongPressGestureRecognizer *_longPressGes;
    UILabel *_assemblyContentLabel;
    id<AFDCustomMorePopoverSheetControllerProtocol> _popController;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEAliasEditLabel *nameLabel;
@property (retain, nonatomic) AWENoticeFollowButton *followBtn;
@property (retain, nonatomic) UILabel *relationTagLabel;
@property (retain, nonatomic) UIImageView *verificationIcon;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) AWENoticeQuoteAssemblyContentView *quoteSubAssemblyContentView;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) MASConstraint *nameLabelMaxWidthConstraint;
@property (retain, nonatomic) MASConstraint *relationTagLeadingConstraint;
@property (copy, nonatomic) id /* block */ sendMsgBlock;
@property (retain, nonatomic) NSDictionary *settingsTitleDic;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGes;
@property (nonatomic) BOOL replyFriendIMShowTracked;
@property (retain, nonatomic) UILabel *assemblyContentLabel;
@property (retain, nonatomic) id<AFDCustomMorePopoverSheetControllerProtocol> popController;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *showedUserIDs;
@property (copy, nonatomic) NSString *ruleId;
@property (retain, nonatomic) AWENotificationModelNew *model;
@property (copy, nonatomic) id /* block */ handleTapOnAvatar;
@property (copy, nonatomic) id /* block */ followRequestRefused;
@property (copy, nonatomic) id /* block */ followRequestApproved;
@property (copy, nonatomic) id /* block */ followRequestCancelled;
@property (copy, nonatomic) id /* block */ handleLongPress;
@property (copy, nonatomic) id /* block */ lightInteractionBlock;
@property (copy, nonatomic) id /* block */ deleteFansNoticeBlock;
@property (copy, nonatomic) id /* block */ removeFansBlock;
@property (retain, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) BOOL enableLongPress;
@property (nonatomic) BOOL notShowRedBGColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)followButtonWidth;
+ (BOOL)isActiveFollowRequestNotice:(id)arg0;
+ (double)suggestedHeightWithModel:(id)arg0;
+ (id)assemlyContentStyleWithStr:(id)arg0;
+ (id)assemblyContent:(id)arg0 forAccessibility:(BOOL)arg1;
+ (double)numberOfLines:(id)arg0 model:(id)arg1;
+ (BOOL)isFollowRequestNotice:(long long)arg0;
+ (double)tipsLabelTextWidth:(id)arg0;
+ (double)buttonWidthWhenShowTwoButtons;
+ (id)identifier;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHideMyPostFromUser:(id)arg0 status:(long long)arg1;
- (void)didFinishApproveUserFollowRequest:(id)arg0 error:(id)arg1;
- (void)didFinishRejectUserFollowRequestWithNoticeID:(id)arg0 user:(id)arg1;
- (void)didFinishShowMyPostToUser:(id)arg0 status:(long long)arg1;
- (void)didFinishHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishUnHidePostFromHer:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)awe_themeReload;
- (void)setMoreBtn:(id)arg0;
- (id)moreBtn;
- (void)configWithModel:(id)arg0;
- (BOOL)enableLongPress;
- (id)relationTagLabel;
- (id)assemblyContentLabel;
- (void)setAssemblyContentLabel:(id)arg0;
- (id)quoteSubAssemblyContentView;
- (void)setQuoteSubAssemblyContentView:(id)arg0;
- (void)resetUnreadView;
- (id)p_bgPrimary;
- (void)followBtnClicked:(id)arg0;
- (id)longPressGes;
- (id /* block */)handleLongPress;
- (void)setLongPressGes:(id)arg0;
- (id)verificationIcon;
- (void)setVerificationIcon:(id)arg0;
- (void)setExtraTrackParams:(id)arg0;
- (id)extraTrackParams;
- (void)createEditAliasView;
- (void)setRelationTagLabel:(id)arg0;
- (id)followBtn;
- (void)setFollowBtn:(id)arg0;
- (void)relationLabelTapped;
- (void)setPopController:(id)arg0;
- (void)removeFans;
- (void)deleteFansNotice;
- (BOOL)canBlockUser;
- (void)dismissPopViewIfNeeded;
- (id)p_relationContext;
- (BOOL)replyFriendIMShowTracked;
- (void)setReplyFriendIMShowTracked:(BOOL)arg0;
- (void)p_setupAccessibility;
- (void)p_unfollowUser;
- (void)setHandleTapOnAvatar:(id /* block */)arg0;
- (void)__announceAccessibility:(id)arg0;
- (void)_setIsUnreadView:(BOOL)arg0;
- (void)p_trackerInnerMessage;
- (void)__updateCellUnreadStyle;
- (unsigned long long)followBtnActionType;
- (id)settingsTitleDic;
- (void)setSettingsTitleDic:(id)arg0;
- (id)__extraTrackParams;
- (void)setEnableLongPress:(BOOL)arg0;
- (void)setNotShowRedBGColor:(BOOL)arg0;
- (id)showedUserIDs;
- (void)setShowedUserIDs:(id)arg0;
- (void)setFollowRequestApproved:(id /* block */)arg0;
- (void)setFollowRequestCancelled:(id /* block */)arg0;
- (void)trackMessageCardInteractInCacheData:(long long)arg0;
- (void)setLightInteractionBlock:(id /* block */)arg0;
- (void)setDeleteFansNoticeBlock:(id /* block */)arg0;
- (void)setRemoveFansBlock:(id /* block */)arg0;
- (void)setHandleLongPress:(id /* block */)arg0;
- (void)setFollowRequestRefused:(id /* block */)arg0;
- (void)setClickSendMsgBlock:(id /* block */)arg0;
- (void)tapOnAvatar:(id)arg0;
- (long long)maxLineNumberWhenFollowNoticeHasGreet;
- (id /* block */)followRequestApproved;
- (id /* block */)followRequestCancelled;
- (id /* block */)lightInteractionBlock;
- (id /* block */)deleteFansNoticeBlock;
- (id /* block */)removeFansBlock;
- (BOOL)notShowRedBGColor;
- (id /* block */)handleTapOnAvatar;
- (void)setSendMsgBlock:(id /* block */)arg0;
- (void)p_setupNewLayout;
- (void)__updateDotViewLayout;
- (BOOL)p_shouldShowLightInteractionEntryWithUser:(id)arg0;
- (BOOL)p_shouldShowSendMessageEntryWithUser:(id)arg0;
- (void)updateFollowBtnState:(BOOL)arg0;
- (BOOL)fansNoticeCanShowRemoveFansButton;
- (void)p_updateFollowBtnWithFollowStatus:(long long)arg0 followerStatus:(long long)arg1 preferredTitle:(id)arg2;
- (void)_trackFollowBackShowGreet;
- (void)_trackQuickReplyWithEventType:(id)arg0;
- (void)p_setupLabelsAndLayout;
- (void)p_setupAssemblyContentLabelAndLayout;
- (void)socialPitayaFollowActionWithUserID:(id)arg0;
- (void)updateWithUserForFollowRequest;
- (void)__updateFollowRequestState;
- (id /* block */)followRequestRefused;
- (void)p_showMorePopover;
- (void)revertWithUserForFollowRequest;
- (void)p_finishFollowWithResponse:(id)arg0 topController:(id)arg1;
- (void)__trackEnterChatWitUser:(id)arg0;
- (BOOL)p_showedUserIDsContainSuchUser;
- (id)nameLabelMaxWidthConstraint;
- (id)relationTagLeadingConstraint;
- (id)quoteAssemblyContentViewModel;
- (void)setNameLabelMaxWidthConstraint:(id)arg0;
- (void)setRelationTagLeadingConstraint:(id)arg0;
- (void)moreBtnDidClicked;
- (void)p_handlerTapQuoteAssemblyContentView:(id)arg0;
- (id /* block */)sendMsgBlock;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)willMoveToSuperview:(id)arg0;
- (void)setModel:(id)arg0;
- (id)accessibilityLabel;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)model;
- (id)nameLabel;
- (id)accessibilityCustomActions;
- (void)prepareForReuse;
- (void)dealloc;
- (void)handleLongPressGesture:(id)arg0;
- (id)dotView;
- (void)setDotView:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (void)_refreshUI;
- (void)setRuleId:(id)arg0;
- (id)ruleId;
- (id)popController;

@end