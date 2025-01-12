//
//     Generated by private class-dump
//

@class UIImageView, IESLiveCountTimer, UILabel, UIView, UIButton;
@protocol IESLivePKAnchorBuilderAction;

@interface IESLivePKMatchBellBattleInvitePanel : IESLiveRevenueInteractPopupViewController {
    BOOL _isClickedButton;
    UILabel *_matchBellDescrtipionLabel;
    UIImageView *_backGroundImageView;
    UIImageView *_ownerAvatarImageView;
    UIView *_oppositeAvatarContainerView;
    UIImageView *_oppositeAvatarImageView;
    UIImageView *_pkIconView;
    UILabel *_ownerNameLabel;
    UILabel *_oppositeNameLabel;
    UILabel *_ownerDescriptionLabel;
    UILabel *_oppositeDescriptionLabel;
    UILabel *_oppositeAnchorStatusLabel;
    UIButton *_rejectButton;
    UIButton *_acceptButton;
    IESLiveCountTimer *_countDownTimer;
    id<IESLivePKAnchorBuilderAction> _anchorBuilderAction;
}

@property (retain, nonatomic) UILabel *matchBellDescrtipionLabel;
@property (retain, nonatomic) UIImageView *backGroundImageView;
@property (retain, nonatomic) UIImageView *ownerAvatarImageView;
@property (retain, nonatomic) UIView *oppositeAvatarContainerView;
@property (retain, nonatomic) UIImageView *oppositeAvatarImageView;
@property (retain, nonatomic) UIImageView *pkIconView;
@property (retain, nonatomic) UILabel *ownerNameLabel;
@property (retain, nonatomic) UILabel *oppositeNameLabel;
@property (retain, nonatomic) UILabel *ownerDescriptionLabel;
@property (retain, nonatomic) UILabel *oppositeDescriptionLabel;
@property (retain, nonatomic) UILabel *oppositeAnchorStatusLabel;
@property (retain, nonatomic) UIButton *rejectButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (nonatomic) BOOL isClickedButton;
@property (retain, nonatomic) IESLiveCountTimer *countDownTimer;
@property (retain, nonatomic) id<IESLivePKAnchorBuilderAction> anchorBuilderAction;

- (void)trackPanelShow;
- (void)startCountDownTimer;
- (void)bindAction;
- (id)backGroundImageView;
- (void)setBackGroundImageView:(id)arg0;
- (void)onSetupNavBar:(id)arg0;
- (id)anchorBuilderAction;
- (void)setAnchorBuilderAction:(id)arg0;
- (void)stopCountDownTimer;
- (id)oppositeAvatarImageView;
- (void)setOppositeAvatarImageView:(id)arg0;
- (BOOL)isClickedButton;
- (void)trackPanelClick:(id)arg0;
- (void)onDisturbSettingButtonClicked;
- (id)oppositeAnchorStatusLabel;
- (void)setOwnerAvatarImageView:(id)arg0;
- (id)ownerAvatarImageView;
- (void)setOwnerNameLabel:(id)arg0;
- (id)ownerNameLabel;
- (void)setOwnerDescriptionLabel:(id)arg0;
- (id)ownerDescriptionLabel;
- (void)setPkIconView:(id)arg0;
- (id)pkIconView;
- (void)setOppositeAvatarContainerView:(id)arg0;
- (id)oppositeAvatarContainerView;
- (void)setOppositeAnchorStatusLabel:(id)arg0;
- (void)setOppositeNameLabel:(id)arg0;
- (id)oppositeNameLabel;
- (void)setOppositeDescriptionLabel:(id)arg0;
- (id)oppositeDescriptionLabel;
- (void)onRejectButtonClicked;
- (void)onAcceptButtonClicked;
- (void)setIsClickedButton:(BOOL)arg0;
- (id)matchBellDescrtipionLabel;
- (void)setMatchBellDescrtipionLabel:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupViews;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;
- (id)rejectButton;
- (void)setRejectButton:(id)arg0;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;

@end
