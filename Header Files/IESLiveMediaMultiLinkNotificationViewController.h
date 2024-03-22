//
//     Generated by private class-dump
//

@class NSNumber, IESLiveCountTimer, UILabel, NSMutableArray, UIButton;
@protocol IESLiveMediaMultiLinkNotificationViewControllerDelegate, IESLiveGameModule;

@interface IESLiveMediaMultiLinkNotificationViewController : IESLiveCommunityInteractPopupViewController {
    NSNumber *_inviteUserID;
    id<IESLiveMediaMultiLinkNotificationViewControllerDelegate> _delegate;
    IESLiveCountTimer *_timer;
    UILabel *_titleLabel;
    NSMutableArray *_playerItemViews;
    UIButton *_declineButton;
    id<IESLiveGameModule> _gameModule;
}

@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *playerItemViews;
@property (retain, nonatomic) UIButton *declineButton;
@property (retain, nonatomic) id<IESLiveGameModule> gameModule;
@property (retain, nonatomic) NSNumber *inviteUserID;
@property (weak, nonatomic) id<IESLiveMediaMultiLinkNotificationViewControllerDelegate> delegate;

- (void)p_setupViews;
- (id)gameModule;
- (void)setGameModule:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (void)p_startCountdown;
- (void)updateUsers;
- (void)p_declineRequest:(id)arg0;
- (void)p_acceptReqeust;
- (id)inviteUserID;
- (void)p_updatePlayers:(id)arg0;
- (void)p_cancelCountdown;
- (id)playerItemViews;
- (void)setPlayerItemViews:(id)arg0;
- (void)p_reallyAcceptReqeust;
- (id)p_alogDescFromInteractUserList:(id)arg0;
- (void)inviteCanceled;
- (void)setInviteUserID:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)declineButton;
- (void)setDeclineButton:(id)arg0;

@end
