//
//     Generated by private class-dump
//

@class UILabel, DYUserProtocolView, NSDictionary, NSObject, YYAnimatedImageView, DYLoginNextActionButton, UIView, AWELastAccountLoginViewModel, NSString, UIButton, AWEUserProtocolBubbleAdapter, NSTimer, LOTAnimationView;
@protocol OS_dispatch_source, AWELastAccountLoginViewDelegate;

@interface AWELastAccountLoginBaseView : UIView <AWEUserProtocolBubbleAdapterDelegate, AWELastAccountLoginView> {
    NSObject<OS_dispatch_source> *_timer;
    id<AWELastAccountLoginViewDelegate> _delegate;
    NSDictionary *_trackInfo;
    UILabel *_titleLabel;
    UILabel *_nicknameLabel;
    YYAnimatedImageView *_avatarView;
    DYLoginNextActionButton *_loginButton;
    LOTAnimationView *_finishAnimationView;
    UIButton *_otherLoginButton;
    DYUserProtocolView *_userProtocolView;
    UIView *_tipBackground;
    UIView *_tagBackgroundView;
    UILabel *_tagLabel;
    AWELastAccountLoginViewModel *_model;
    AWEUserProtocolBubbleAdapter *_bubbleAdapter;
    UILabel *_tipLabel;
    NSTimer *_loginButtonBreathTimer;
}

@property (retain, nonatomic) AWEUserProtocolBubbleAdapter *bubbleAdapter;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) NSTimer *loginButtonBreathTimer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) YYAnimatedImageView *avatarView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) LOTAnimationView *finishAnimationView;
@property (retain, nonatomic) UIButton *otherLoginButton;
@property (retain, nonatomic) DYUserProtocolView *userProtocolView;
@property (retain, nonatomic) UIView *tipBackground;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWELastAccountLoginViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELastAccountLoginViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackInfo;

- (void)loginAction;
- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (id)tagBackgroundView;
- (void)setTagBackgroundView:(id)arg0;
- (id)otherLoginButton;
- (id)bubbleAdapter;
- (id)loginButtonBreathTimer;
- (void)startLoginButtonBreathAnimation;
- (void)setLoginButtonBreathTimer:(id)arg0;
- (void)trackLoginButtonBreathMotionShow;
- (void)showBubbleWithAdapter:(id)arg0;
- (void)clickBubbleWithAdapter:(id)arg0;
- (void)setOtherLoginButton:(id)arg0;
- (void)setBubbleAdapter:(id)arg0;
- (void)otherLoginAction;
- (id)userProtocolView;
- (id)finishAnimationView;
- (void)stopLoadingWithError:(id)arg0;
- (void)resetLoginButton;
- (void)loginFromDetainAlert;
- (id)tipBackground;
- (void)setFinishAnimationView:(id)arg0;
- (void)setUserProtocolView:(id)arg0;
- (void)setTipBackground:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (void)didDisappear;
- (id)delegate;
- (void)didAppear;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupUI;
- (void)startAnimationWithCompletion:(id /* block */)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;
- (id)loginButton;
- (void)setLoginButton:(id)arg0;
- (void)startCountdown;

@end