//
//     Generated by private class-dump
//

@class IESLivePrivilegeEntranceEcomProfileViewModel, NSString, UIImage, IESLiveButton, IESLivePrivilegeEntranceProfileAnimationFactory, IESLiveImageView, UILabel, NSNumber;

@interface IESLivePrivilegeEntranceEcomFansClubView : UIView <IESLivePrivilegeEntranceSubviewDelegate> {
    BOOL _isFirstShow;
    IESLivePrivilegeEntranceEcomProfileViewModel *_viewModel;
    long long _entranceType;
    IESLiveImageView *_container;
    IESLiveButton *_fansclubButton;
    UILabel *_fansclubLevelLabel;
    UIImage *_activeFansBgImage;
    IESLivePrivilegeEntranceProfileAnimationFactory *_animationFactory;
    NSString *_fansclubState;
    NSNumber *_isShowing;
}

@property (retain, nonatomic) IESLivePrivilegeEntranceEcomProfileViewModel *viewModel;
@property (nonatomic) long long entranceType;
@property (nonatomic) BOOL isFirstShow;
@property (retain, nonatomic) IESLiveImageView *container;
@property (retain, nonatomic) IESLiveButton *fansclubButton;
@property (retain, nonatomic) UILabel *fansclubLevelLabel;
@property (retain, nonatomic) UIImage *activeFansBgImage;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory *animationFactory;
@property (retain, nonatomic) NSString *fansclubState;
@property (retain, nonatomic) NSNumber *isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(id)arg0;
- (void)setIsFirstShow:(BOOL)arg0;
- (BOOL)isFirstShow;
- (long long)entranceType;
- (void)setEntranceType:(long long)arg0;
- (void)bindState;
- (void)viewDidShowOnContainer:(id)arg0;
- (void)viewDidHideFromContainer:(id)arg0;
- (id)buttonBgImageWithColorArray:(id)arg0;
- (id)fansclubButton;
- (id)fansclubLevelLabel;
- (void)updateStateEnableAnimation:(BOOL)arg0 state:(id)arg1;
- (void)setFansclubState:(id)arg0;
- (void)updateFansclubLevel:(id)arg0;
- (void)playFansclubGuideAnimationIfNeeded;
- (void)ecomFansClubViewTapped;
- (id)activeFansBgImage;
- (id)fansclubState;
- (void)playShowAnimationIfNeeded;
- (void)trackEcomFansclubShow;
- (void)trackEcomFansclubClick;
- (id)initWithViewModel:(id)arg0 entranceType:(long long)arg1;
- (void)setFansclubButton:(id)arg0;
- (void)setFansclubLevelLabel:(id)arg0;
- (void)setActiveFansBgImage:(id)arg0;
- (void)setAnimationFactory:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)isShowing;
- (void)setViewModel:(id)arg0;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)animationFactory;
- (id)viewModel;
- (void)setupUI;
- (void)addAction;

@end
