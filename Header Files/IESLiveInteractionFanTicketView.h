//
//     Generated by private class-dump
//

@class IESLiveGCDTimer, RACDisposable, NSString, UIImageView, UIButton, IESLiveInteractionFanTicketViewModel, IESLiveInteractionFanticketProgressView, IESLiveInteractionFanTicketNode, IESLiveCountTimer, UILabel, UIColor;

@interface IESLiveInteractionFanTicketView : UIView <IESLiveInteractionFanTicketDelegate, IESLiveGuestBattleScoreView> {
    BOOL _fanTicketIconNeedResume;
    BOOL _isThankShowing;
    int _teamFightRole;
    int _styleType;
    double _scale;
    UIButton *_fanticketBGView;
    UIImageView *_fanTicketIconView;
    UILabel *_fanTicketLabel;
    UIImageView *_avatarView;
    IESLiveInteractionFanticketProgressView *_progressView;
    UIColor *_currentBackgroundColor;
    UIColor *_animateBGColor;
    long long _teamSign;
    RACDisposable *_btnDisposable;
    long long _type;
    IESLiveInteractionFanTicketViewModel *_viewModel;
    IESLiveInteractionFanTicketNode *_animatingNode;
    IESLiveCountTimer *_thankTimer;
    long long _progressTarget;
    IESLiveGCDTimer *_fanTicketLabelDelayUpdateTimer;
}

@property (nonatomic) double scale;
@property (retain, nonatomic) UIButton *fanticketBGView;
@property (retain, nonatomic) UIImageView *fanTicketIconView;
@property (nonatomic) BOOL fanTicketIconNeedResume;
@property (retain, nonatomic) UILabel *fanTicketLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) IESLiveInteractionFanticketProgressView *progressView;
@property (retain, nonatomic) UIColor *currentBackgroundColor;
@property (retain, nonatomic) UIColor *animateBGColor;
@property (nonatomic) int teamFightRole;
@property (nonatomic) long long teamSign;
@property (retain, nonatomic) RACDisposable *btnDisposable;
@property (nonatomic) int styleType;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESLiveInteractionFanTicketViewModel *viewModel;
@property (retain, nonatomic) IESLiveInteractionFanTicketNode *animatingNode;
@property (nonatomic) BOOL isThankShowing;
@property (retain, nonatomic) IESLiveCountTimer *thankTimer;
@property (nonatomic) long long progressTarget;
@property (retain, nonatomic) IESLiveGCDTimer *fanTicketLabelDelayUpdateTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFanTicketIconURL;

- (void)setStyleType:(int)arg0;
- (void)createProgressView;
- (void)onClicked:(id /* block */)arg0;
- (void)updateFanTicketText:(id)arg0 animation:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 scale:(double)arg1 type:(long long)arg2;
- (void)onGuestBattleFinish;
- (long long)teamSign;
- (void)setTeamSign:(long long)arg0;
- (void)updateFanTicketAlpha:(double)arg0;
- (void)onGuestBattleStart;
- (void)onGuestBattleSettle;
- (void)updateBattleRoleIconAlpha:(double)arg0;
- (void)updateBattleRoleIconAlphaAnimated:(double)arg0 duraton:(double)arg1 delay:(double)arg2 completion:(id /* block */)arg3;
- (void)stopAllBattleAnimationIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconViewFrame;
- (void)updateFanTicketIconWithImage:(id)arg0;
- (void)updateBGColor:(id)arg0;
- (void)updateAnimateBGColor:(id)arg0;
- (void)updateFanTicketStyleType:(int)arg0;
- (void)clearAllUpdateAnimation;
- (id)fanTicketLabel;
- (id)fanTicketIconView;
- (long long)progressTarget;
- (id)fanticketBGView;
- (void)p_updateBattleRoleBgColor:(id)arg0;
- (double)p_getFanticketNumberValue:(id)arg0;
- (id)fanTicketLabelDelayUpdateTimer;
- (void)setFanTicketLabelDelayUpdateTimer:(id)arg0;
- (id)animatingNode;
- (void)clearAllUpdateAnimation:(BOOL)arg0;
- (void)setAnimateBGColor:(id)arg0;
- (void)setProgressTarget:(long long)arg0;
- (id)btnDisposable;
- (BOOL)isThankShowing;
- (void)setBtnDisposable:(id)arg0;
- (void)setAnimatingNode:(id)arg0;
- (void)stopThankTimerIfNeeded;
- (void)setIsThankShowing:(BOOL)arg0;
- (BOOL)isNativeGuestBattle;
- (id)animateBGColor;
- (void)stopBackgroundAnimation:(double)arg0 completion:(id /* block */)arg1;
- (void)doQuickInteractThankAnimation:(id)arg0;
- (void)doFlashAnimation:(id)arg0;
- (void)doAnimationAfterQuickInteractThank;
- (void)setFanTicketIconNeedResume:(BOOL)arg0;
- (void)setThankTimer:(id)arg0;
- (id)thankTimer;
- (BOOL)fanTicketIconNeedResume;
- (void)doFanticketAnimationWithNode:(id)arg0;
- (void)stopQuickInteractThankAnimation:(id)arg0;
- (void)updateStarWishTarget:(long long)arg0;
- (void)setFanticketBGView:(id)arg0;
- (void)setFanTicketIconView:(id)arg0;
- (void)setFanTicketLabel:(id)arg0;
- (int)teamFightRole;
- (void)setTeamFightRole:(int)arg0;
- (void)setAvatarView:(id)arg0;
- (int)styleType;
- (id)avatarView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)type;
- (void)setup;
- (double)scale;
- (void)setViewModel:(id)arg0;
- (void)setType:(long long)arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)viewModel;
- (id)currentBackgroundColor;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setScale:(double)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setCurrentBackgroundColor:(id)arg0;

@end