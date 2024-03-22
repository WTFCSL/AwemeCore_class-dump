//
//     Generated by private class-dump
//

@class IESLiveButton, IESLivePrivilegeEntranceProfileAnimationFactory, NSString, IESLiveImageView, UILabel, UIImage, NSNumber;
@protocol IESLivePrivilegeEntranceProfileViewEventHandler;

@interface IESLivePrivilegeEntranceEcomProfileView : UIView <IESLivePrivilegeEntranceEcomProfileViewProtocol> {
    BOOL _isFirstShow;
    id<IESLivePrivilegeEntranceProfileViewEventHandler> _delegate;
    NSNumber *_fansclubLevel;
    NSString *_fansclubState;
    NSString *_lastFansclubState;
    NSNumber *_showFansclubGuide;
    NSNumber *_roomFansclubDataReady;
    NSNumber *_isShowing;
    IESLivePrivilegeEntranceProfileAnimationFactory *_animationFactory;
    NSNumber *_enableShowAnimation;
    NSString *_vipState;
    NSString *_lastVipState;
    NSNumber *_showVIPGuide;
    NSNumber *_roomVIPDataReady;
    IESLiveImageView *_container;
    IESLiveButton *_fansclubButton;
    UILabel *_fansclubLevelLabel;
    UIImage *_activeFansBgImage;
    UIImage *_inActiveFansBgImage;
}

@property (retain, nonatomic) IESLiveImageView *container;
@property (retain, nonatomic) IESLiveButton *fansclubButton;
@property (retain, nonatomic) UILabel *fansclubLevelLabel;
@property (retain, nonatomic) UIImage *activeFansBgImage;
@property (retain, nonatomic) UIImage *inActiveFansBgImage;
@property (nonatomic) BOOL isFirstShow;
@property (weak, nonatomic) id<IESLivePrivilegeEntranceProfileViewEventHandler> delegate;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory *animationFactory;
@property (retain, nonatomic) NSString *fansclubState;
@property (retain, nonatomic) NSNumber *showFansclubGuide;
@property (retain, nonatomic) NSNumber *fansclubLevel;
@property (retain, nonatomic) NSNumber *roomFansclubDataReady;
@property (retain, nonatomic) NSNumber *enableShowAnimation;
@property (retain, nonatomic) NSString *lastFansclubState;
@property (retain, nonatomic) NSNumber *isShowing;
@property (retain, nonatomic) NSString *lastVipState;
@property (retain, nonatomic) NSString *vipState;
@property (retain, nonatomic) NSNumber *roomVIPDataReady;
@property (retain, nonatomic) NSNumber *showVIPGuide;
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
- (id)buttonBgImageWithColorArray:(id)arg0;
- (id)fansclubLevel;
- (id)lastFansclubState;
- (void)setLastFansclubState:(id)arg0;
- (id)lastVipState;
- (void)setLastVipState:(id)arg0;
- (id)fansclubButton;
- (id)fansclubLevelLabel;
- (void)setFansclubState:(id)arg0;
- (void)updateFansclubLevel:(id)arg0;
- (void)playFansclubGuideAnimationIfNeeded;
- (id)activeFansBgImage;
- (id)fansclubState;
- (id)enableShowAnimation;
- (void)playShowAnimationIfNeeded;
- (void)setFansclubButton:(id)arg0;
- (void)setFansclubLevelLabel:(id)arg0;
- (void)setActiveFansBgImage:(id)arg0;
- (void)updateStateEnableAnimation:(BOOL)arg0;
- (void)tapFansclubButton;
- (id)showFansclubGuide;
- (void)setShowFansclubGuide:(id)arg0;
- (void)setFansclubLevel:(id)arg0;
- (id)roomFansclubDataReady;
- (void)setRoomFansclubDataReady:(id)arg0;
- (void)setEnableShowAnimation:(id)arg0;
- (id)vipState;
- (void)setVipState:(id)arg0;
- (id)roomVIPDataReady;
- (void)setRoomVIPDataReady:(id)arg0;
- (id)showVIPGuide;
- (void)setShowVIPGuide:(id)arg0;
- (id)inActiveFansBgImage;
- (void)setInActiveFansBgImage:(id)arg0;
- (void)setAnimationFactory:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)animationFactory;
- (void)setDelegate:(id)arg0;
- (void)setupUI;

@end
