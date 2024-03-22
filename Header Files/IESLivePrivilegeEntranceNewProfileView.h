//
//     Generated by private class-dump
//

@class UIView, NSString, IESLivePrivilegeEntranceProfileViewModel, IESLiveButton, IESLivePrivilegeEntranceProfileAnimationFactory, IESLiveImageView, UILabel, NSNumber;
@protocol IESLivePrivilegeEntranceProfileViewEventHandler;

@interface IESLivePrivilegeEntranceNewProfileView : UIView <IESLivePrivilegeEntranceProfileViewProtocol> {
    BOOL _isFirstShow;
    id<IESLivePrivilegeEntranceProfileViewEventHandler> _delegate;
    NSString *_lastFansclubState;
    NSString *_lastVipState;
    IESLivePrivilegeEntranceProfileAnimationFactory *_animationFactory;
    NSNumber *_isShowing;
    UIView *_container;
    IESLiveImageView *_leftBackgroud;
    IESLiveImageView *_rightBackground;
    IESLiveButton *_fansclubButton;
    IESLiveButton *_vipButton;
    UILabel *_fansclubLevelLabel;
    IESLivePrivilegeEntranceProfileViewModel *_viewModel;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) IESLiveImageView *leftBackgroud;
@property (retain, nonatomic) IESLiveImageView *rightBackground;
@property (retain, nonatomic) IESLiveButton *fansclubButton;
@property (retain, nonatomic) IESLiveButton *vipButton;
@property (retain, nonatomic) UILabel *fansclubLevelLabel;
@property (nonatomic) BOOL isFirstShow;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileViewModel *viewModel;
@property (weak, nonatomic) id<IESLivePrivilegeEntranceProfileViewEventHandler> delegate;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory *animationFactory;
@property (retain, nonatomic) NSString *lastFansclubState;
@property (retain, nonatomic) NSString *lastVipState;
@property (retain, nonatomic) NSNumber *isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(id)arg0;
- (void)setIsFirstShow:(BOOL)arg0;
- (BOOL)isFirstShow;
- (void)bindState;
- (void)viewDidShowOnContainer:(id)arg0;
- (void)viewDidHideFromContainer:(id)arg0;
- (id)lastFansclubState;
- (void)setLastFansclubState:(id)arg0;
- (id)lastVipState;
- (void)setLastVipState:(id)arg0;
- (id)fansclubButton;
- (id)fansclubLevelLabel;
- (void)updateFansclubLevel:(id)arg0;
- (void)playFansclubGuideAnimationIfNeeded;
- (void)setFansclubButton:(id)arg0;
- (void)setFansclubLevelLabel:(id)arg0;
- (void)tapFansclubButton;
- (void)playFansclubActiveAnimation;
- (void)playShowAnimation;
- (id)leftBackgroud;
- (id)rightBackground;
- (id)vipButton;
- (void)updateVIPState:(id)arg0;
- (void)playVIPGuideAnimationIfNeeded;
- (void)playVIPActiveAnimation:(BOOL)arg0;
- (void)tapVIPButton;
- (void)setLeftBackgroud:(id)arg0;
- (void)setRightBackground:(id)arg0;
- (void)setVipButton:(id)arg0;
- (void)updateFansclubState:(id)arg0;
- (void)setAnimationFactory:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)isShowing;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)animationFactory;
- (id)viewModel;
- (void)setDelegate:(id)arg0;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewModel:(id)arg1;

@end
