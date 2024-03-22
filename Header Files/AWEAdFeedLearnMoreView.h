//
//     Generated by private class-dump
//

@class UIColor, NSString, UIImageView, AWEAwemeModel, UILabel, AWEOriginalAdModel, LOTAnimationView;

@interface AWEAdFeedLearnMoreView : UIView <AWESearchAdAppointmentResultMessage, BDATMAutoTrackerViewProtocol, AWELiveRoomMessage, AWEAdFeedLearnMoreView> {
    BOOL _isShowing;
    BOOL _isLeftView;
    BOOL _needFlashForAppoint;
    BOOL _didFlash;
    NSString *_referString;
    NSString *_tips;
    UIImageView *_guideImageView;
    UILabel *_tipsLabel;
    UIImageView *_arrowImageView;
    AWEOriginalAdModel *_adModel;
    AWEAwemeModel *_awemeModel;
    UIColor *_toColor;
    LOTAnimationView *_liveAnimationView;
}

@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIColor *toColor;
@property (retain, nonatomic) LOTAnimationView *liveAnimationView;
@property (nonatomic) BOOL needFlashForAppoint;
@property (nonatomic) BOOL didFlash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isLeftView;

- (id)awemeModel;
- (id)referString;
- (void)setIsShowing:(BOOL)arg0;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)audienceQuitAllRoom;
- (id)tipsLabel;
- (id)adModel;
- (void)setAdModel:(id)arg0;
- (void)setTipsLabel:(id)arg0;
- (void)openClickAutoTracker;
- (void)openShowAutoTracker;
- (BOOL)isAdCoin;
- (id)liveAnimationView;
- (id)guideImageView;
- (void)configDefaultBackgroundColor;
- (BOOL)shouldChangeButtonColor;
- (void)updateForAppointmentIfNeeded;
- (void)setNeedFlashForAppoint:(BOOL)arg0;
- (void)setDidFlash:(BOOL)arg0;
- (BOOL)needFlashForAppoint;
- (BOOL)didFlash;
- (void)playFlashAnimated:(BOOL)arg0;
- (void)playGuideAnimation;
- (void)setGuideImageView:(id)arg0;
- (void)setLiveAnimationView:(id)arg0;
- (BOOL)isFromGeneralSearch;
- (void)handleAppointmentResultWithAdModel:(id)arg0 sceneType:(long long)arg1 appointmentStatus:(BOOL)arg2 error:(id)arg3;
- (void)updateHotSplashButtonBackgroundColor:(id)arg0;
- (void)updateTrialLearnMoreViewIfNeeded;
- (BOOL)isLeftView;
- (void)updateLearnMoreViewWithModel:(id)arg0;
- (void)setIsLeftView:(BOOL)arg0;
- (id)tips;
- (id)init;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (BOOL)isShowing;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)setTips:(id)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)defaultBackgroundColor;
- (void)prepareToAnimate;
- (void)_setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;
- (id)toColor;
- (void)setToColor:(id)arg0;

@end
