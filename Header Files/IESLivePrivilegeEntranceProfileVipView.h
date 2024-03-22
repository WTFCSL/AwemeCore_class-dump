//
//     Generated by private class-dump
//

@class IESLiveButton, IESLivePrivilegeEntranceProfileAnimationFactory, NSString, UIImage, IESLiveImageView, IESLivePrivilegeEntranceProfileViewModel, NSNumber;
@protocol IESLivePrivilegeEntranceProfileViewEventHandler;

@interface IESLivePrivilegeEntranceProfileVipView : UIView <IESLivePrivilegeEntranceProfileViewProtocol> {
    BOOL _isFirstShow;
    id<IESLivePrivilegeEntranceProfileViewEventHandler> _delegate;
    NSString *_lastFansclubState;
    NSString *_lastVipState;
    IESLivePrivilegeEntranceProfileAnimationFactory *_animationFactory;
    NSNumber *_isShowing;
    IESLiveImageView *_container;
    IESLiveButton *_vipButton;
    UIImage *_activeFansBgImage;
    UIImage *_inActiveFansBgImage;
    IESLivePrivilegeEntranceProfileViewModel *_viewModel;
}

@property (retain, nonatomic) IESLiveImageView *container;
@property (retain, nonatomic) IESLiveButton *vipButton;
@property (retain, nonatomic) UIImage *activeFansBgImage;
@property (retain, nonatomic) UIImage *inActiveFansBgImage;
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
- (id)activeFansBgImage;
- (void)setActiveFansBgImage:(id)arg0;
- (id)inActiveFansBgImage;
- (void)setInActiveFansBgImage:(id)arg0;
- (void)playShowAnimation;
- (id)vipButton;
- (void)updateVIPState:(id)arg0;
- (void)playVIPGuideAnimationIfNeeded;
- (void)playVIPActiveAnimation:(BOOL)arg0;
- (void)tapVIPButton;
- (void)setVipButton:(id)arg0;
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
