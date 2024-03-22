//
//     Generated by private class-dump
//

@class NSString, UIImageView, LOTAnimationView, UILabel, UIView;

@interface AWELiveStreamUserNameElement : AWELiveLeftElement <AWEUserMessage> {
    BOOL _enableShowFollowIcon;
    BOOL _isShowed;
    UIView *_contentView;
    UILabel *_userNameLabel;
    UIImageView *_verifiedIconView;
    UILabel *_watchNumLabel;
    long long _delayShowFollowIconTime;
    LOTAnimationView *_followLottieView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIImageView *verifiedIconView;
@property (retain, nonatomic) UILabel *watchNumLabel;
@property (nonatomic) long long delayShowFollowIconTime;
@property (nonatomic) BOOL enableShowFollowIcon;
@property (retain, nonatomic) LOTAnimationView *followLottieView;
@property (nonatomic) BOOL isShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)initializeElement;
- (void)setIsShowed:(BOOL)arg0;
- (BOOL)isShowed;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (void)viewController_viewDidDisAppear;
- (id)slotIdentity;
- (unsigned long long)excludeStatus;
- (BOOL)isFollow;
- (void)streamPlayer_startToPlay;
- (void)onRightAreaChange:(double)arg0;
- (BOOL)p_shouldShowVerifiedIcon;
- (id)watchNumLabel;
- (void)setupVerifiedIconView;
- (void)setupFollowLottieView;
- (BOOL)shouldShowFollowIcon;
- (void)showFollowLottie;
- (long long)delayShowFollowIconTime;
- (id)followLottieView;
- (void)showFollowButtonAnimation;
- (id)verifiedIconView;
- (void)p_trackVerifiedIconShow;
- (id)watchNumStr;
- (void)p_trackFollowButtonShow;
- (void)p_trackFollowUser;
- (void)trackAdClickSource;
- (void)usernameTapped:(id)arg0;
- (id)createVerifiedIconView;
- (void)verifiedIconClick;
- (id)createFollowLottieView;
- (void)changeFollowStatus:(id)arg0;
- (void)p_changeFollowBtn:(BOOL)arg0;
- (BOOL)canUpdateFollowButtonState;
- (BOOL)enableShowFollowIcon;
- (void)setVerifiedIconView:(id)arg0;
- (void)setWatchNumLabel:(id)arg0;
- (void)setDelayShowFollowIconTime:(long long)arg0;
- (void)setEnableShowFollowIcon:(BOOL)arg0;
- (void)setFollowLottieView:(id)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)contentView;
- (void)dealloc;
- (void)reset;
- (void)viewDidLoad;
- (int)priority;
- (void)setContentView:(id)arg0;

@end
