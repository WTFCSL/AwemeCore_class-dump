//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, AWEButton, AWEMarkView, UIView, NSTimer, UIImageView;
@protocol AWEAdOperationComponentViewProtocol;

@interface AWEAdOperationGuideView : UIView <AWESearchAdAppointmentResultMessage, BDATMAutoTrackerViewProtocol, CAAnimationDelegate, AWEAdOperationGuideView> {
    NSString *_adEventName;
    id /* block */ _dismissBlock;
    AWEAwemeModel *_model;
    NSString *_referString;
    UIView<AWEAdOperationComponentViewProtocol> *_componentView;
    AWEButton *_learnMoreBtn;
    UIView *_containerView;
    AWEButton *_replayBtn;
    AWEMarkView *_rewardView;
    NSTimer *_replayTimer;
    long long _replaySecond;
    UIImageView *_lightenImageView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEButton *replayBtn;
@property (retain, nonatomic) AWEMarkView *rewardView;
@property (retain, nonatomic) NSTimer *replayTimer;
@property (nonatomic) long long replaySecond;
@property (retain, nonatomic) UIImageView *lightenImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIView<AWEAdOperationComponentViewProtocol> *componentView;
@property (retain, nonatomic) AWEButton *learnMoreBtn;

- (id)referString;
- (void)setReferString:(id)arg0;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (void)openShowAutoTracker;
- (id)replayBtn;
- (id)learnMoreBtn;
- (void)learnMoreBtnClicked:(id)arg0;
- (void)replayBtnClicked:(id)arg0;
- (void)setReplayBtn:(id)arg0;
- (void)setLearnMoreBtn:(id)arg0;
- (BOOL)isFromGeneralSearch;
- (void)handleAppointmentResultWithAdModel:(id)arg0 sceneType:(long long)arg1 appointmentStatus:(BOOL)arg2 error:(id)arg3;
- (id)replayTimer;
- (void)setReplayTimer:(id)arg0;
- (void)setReplaySecond:(long long)arg0;
- (void)resetReplayBtnTitle;
- (long long)replaySecond;
- (void)detectAbnormalDisplay;
- (id)rewardView;
- (id)buildComponentViewWithModel:(id)arg0;
- (void)configDifferentUIWithMaskType:(unsigned long long)arg0;
- (void)startButtonAnimation;
- (void)startExpandAnimation;
- (void)startFlashAnimation;
- (id)createCubicBezierAnimationWith:(id)arg0 duration:(double)arg1 timingFunction:(id)arg2;
- (void)setupComponentViewUIWithModel:(id)arg0;
- (void)updateRewardView:(id)arg0;
- (void)configLearnMoreButtonForLiveAppointmentIfNeeded;
- (void)onRewardViewClicked:(id)arg0;
- (void)setRewardView:(id)arg0;
- (id)lightenImageView;
- (void)setLightenImageView:(id)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)setHidden:(BOOL)arg0;
- (void)setComponentView:(id)arg0;
- (id)componentView;
- (void)setupUI;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
