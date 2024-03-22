//
//     Generated by private class-dump
//

@class IESLiveAnchorMultiLinkNotificationPlayerAvatarView, NSString, NSArray, IESLiveCountTimer, UIButton, NSMutableArray, UILabel, NSNumber;
@protocol IESLiveAnchorMultiLinkNotificationViewControllerDelegate, IESLiveInteractUserModel, IESLiveGameModuleAdapter;

@interface IESLiveAnchorMultiLinkNotificationViewController : IESLiveRevenueInteractPopupViewController <IESLiveInteractiveUserServiceDelegate> {
    BOOL _isNeedShowTeamApplyTint;
    BOOL _isInvitationOrNot;
    BOOL _hasInviter;
    int _inviteModeType;
    int _inviterStatus;
    NSString *_inviteUserID;
    NSString *_applierUserID;
    NSString *_applyToNickname;
    NSNumber *_toChannelID;
    unsigned long long _battleMode;
    id<IESLiveAnchorMultiLinkNotificationViewControllerDelegate> _delegate;
    long long _countDownTotalSec;
    NSMutableArray *_userTagsArray;
    id<IESLiveInteractUserModel> _inviterUser;
    long long _inviterFollowerCnt;
    long long _inviterConnectCnt;
    unsigned long long _inviteeListType;
    IESLiveCountTimer *_timer;
    double _openPanelTime;
    UILabel *_titleLabel;
    NSMutableArray *_playerItemViews;
    UIButton *_declineButton;
    id<IESLiveGameModuleAdapter> _gameModule;
    unsigned long long _notificationType;
    NSArray *_inviterUsers;
    NSArray *_followedUsers;
    UILabel *_inviterNameLabel;
    UILabel *_otherLinkersInfoLabel;
    UIButton *_acceptButton;
    UIButton *_rejectButton;
    IESLiveAnchorMultiLinkNotificationPlayerAvatarView *_avatarView;
}

@property (nonatomic) BOOL isInvitationOrNot;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) double openPanelTime;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *playerItemViews;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) id<IESLiveGameModuleAdapter> gameModule;
@property (nonatomic) unsigned long long notificationType;
@property (retain, nonatomic) NSArray *inviterUsers;
@property (retain, nonatomic) NSArray *followedUsers;
@property (retain, nonatomic) UILabel *inviterNameLabel;
@property (retain, nonatomic) UILabel *otherLinkersInfoLabel;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) IESLiveAnchorMultiLinkNotificationPlayerAvatarView *avatarView;
@property (nonatomic) BOOL hasInviter;
@property (retain, nonatomic) NSString *inviteUserID;
@property (retain, nonatomic) NSString *applierUserID;
@property (copy, nonatomic) NSString *applyToNickname;
@property (retain, nonatomic) NSNumber *toChannelID;
@property (nonatomic) unsigned long long battleMode;
@property (nonatomic) BOOL isNeedShowTeamApplyTint;
@property (weak, nonatomic) id<IESLiveAnchorMultiLinkNotificationViewControllerDelegate> delegate;
@property (nonatomic) long long countDownTotalSec;
@property (retain, nonatomic) NSMutableArray *userTagsArray;
@property (retain, nonatomic) id<IESLiveInteractUserModel> inviterUser;
@property (nonatomic) int inviteModeType;
@property (nonatomic) int inviterStatus;
@property (nonatomic) long long inviterFollowerCnt;
@property (nonatomic) long long inviterConnectCnt;
@property (nonatomic) unsigned long long inviteeListType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupViews;
- (BOOL)useNewPanelStyle;
- (id)gameModule;
- (void)setGameModule:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (void)p_startCountdown;
- (void)p_declineRequest:(id)arg0;
- (void)p_acceptReqeust;
- (id)inviteUserID;
- (void)p_updatePlayers:(id)arg0;
- (void)p_cancelCountdown;
- (id)playerItemViews;
- (void)setPlayerItemViews:(id)arg0;
- (void)p_reallyAcceptReqeust;
- (id)p_alogDescFromInteractUserList:(id)arg0;
- (void)setInviteUserID:(id)arg0;
- (void)p_refreshPlayers;
- (BOOL)isInvitationOrNot;
- (void)multiLinkerUserService:(id)arg0 didInteractiveListUpdated:(id)arg1;
- (id)applierUserID;
- (void)setApplierUserID:(id)arg0;
- (void)setIsInvitationOrNot:(BOOL)arg0;
- (void)setInviteeListType:(unsigned long long)arg0;
- (unsigned long long)inviteeListType;
- (unsigned long long)battleMode;
- (id)userTagsArray;
- (BOOL)hasInviter;
- (long long)inviterConnectCnt;
- (void)setOpenPanelTime:(double)arg0;
- (id)inviterUser;
- (void)setHasInviter:(BOOL)arg0;
- (void)p_setupViewsNew;
- (id)inviterUsers;
- (id)followedUsers;
- (void)p_trackInvitePageShow;
- (void)onSetupNavBarNew:(id)arg0;
- (id)p_multiInviteMulitTitle;
- (id)p_multiInviteTitle;
- (id)applyToNickname;
- (void)setApplyToNickname:(id)arg0;
- (BOOL)isNeedShowTeamApplyTint;
- (id)p_formatUserName:(id)arg0 limitLength:(long long)arg1;
- (long long)countDownTotalSec;
- (void)setInviterNameLabel:(id)arg0;
- (id)otherLinkersInfoLabel;
- (id)p_getOtherLinkersInfo;
- (struct CGSize { double x0; double x1; })p_tagContentSize4Text:(id)arg0 font:(id)arg1;
- (void)p_updateMultiBattleTitleIfNeeded;
- (void)setInviterUsers:(id)arg0;
- (void)setInviterUser:(id)arg0;
- (id)inviterNameLabel;
- (void)p_trackWithAcceptOrDecline:(BOOL)arg0 overtime:(BOOL)arg1;
- (int)inviteModeType;
- (id)toChannelID;
- (long long)inviterFollowerCnt;
- (int)inviterStatus;
- (double)openPanelTime;
- (id)initWithInviterUserID:(id)arg0 inviterUsersArray:(id)arg1 followedUsersArray:(id)arg2 isRelinkAnchor:(BOOL)arg3;
- (void)setToChannelID:(id)arg0;
- (void)setBattleMode:(unsigned long long)arg0;
- (void)setIsNeedShowTeamApplyTint:(BOOL)arg0;
- (void)setCountDownTotalSec:(long long)arg0;
- (void)setUserTagsArray:(id)arg0;
- (void)setInviteModeType:(int)arg0;
- (void)setInviterStatus:(int)arg0;
- (void)setInviterFollowerCnt:(long long)arg0;
- (void)setInviterConnectCnt:(long long)arg0;
- (void)setFollowedUsers:(id)arg0;
- (void)setOtherLinkersInfoLabel:(id)arg0;
- (id)timer;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithType:(unsigned long long)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (unsigned long long)notificationType;
- (void)setNotificationType:(unsigned long long)arg0;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;
- (id)rejectButton;
- (void)setRejectButton:(id)arg0;
- (id)declineButton;
- (void)setDeclineButton:(id)arg0;

@end
