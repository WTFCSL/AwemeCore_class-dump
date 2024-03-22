//
//     Generated by private class-dump
//

@class NSTimer, DYLoginNextActionButton, NSString, DYUserProtocolView, UIButton, YYAnimatedImageView, AWELastThirdLoginViewModel, NSDictionary, UILabel, AWEUserProtocolBubbleAdapter;
@protocol AWELastThirdLoginViewDelegate;

@interface AWELastThirdLoginBaseView : UIView <AWEUserProtocolBubbleAdapterDelegate, AWELastThirdLoginView> {
    id<AWELastThirdLoginViewDelegate> _delegate;
    NSDictionary *_trackInfo;
    UILabel *_titleLabel;
    YYAnimatedImageView *_avatarView;
    UILabel *_nicknameLabel;
    DYUserProtocolView *_protocolView;
    DYLoginNextActionButton *_loginButton;
    UIButton *_otherLoginButton;
    AWELastThirdLoginViewModel *_model;
    AWEUserProtocolBubbleAdapter *_bubbleAdapter;
    NSTimer *_loginButtonBreathTimer;
}

@property (retain, nonatomic) AWEUserProtocolBubbleAdapter *bubbleAdapter;
@property (retain, nonatomic) NSTimer *loginButtonBreathTimer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYAnimatedImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) DYUserProtocolView *protocolView;
@property (retain, nonatomic) DYLoginNextActionButton *loginButton;
@property (retain, nonatomic) UIButton *otherLoginButton;
@property (retain, nonatomic) AWELastThirdLoginViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELastThirdLoginViewDelegate> delegate;
@property (retain, nonatomic) NSDictionary *trackInfo;

- (void)loginAction;
- (id)protocolView;
- (void)setProtocolView:(id)arg0;
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
- (void)setupUI;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;
- (id)loginButton;
- (void)setLoginButton:(id)arg0;

@end
