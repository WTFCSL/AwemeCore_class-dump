//
//     Generated by private class-dump
//

@class CAGradientLayer, NSString, AWECommentAudioRecorderViewConfig, AWECommentAudioRecorderViewModel, AWECommentAudioRecorderViewControl, UIButton;
@protocol AWECommentAudioRecorderViewDelegate;

@interface AWECommentAudioRecorderView : UIView <AWECommentAudioRecorderViewProtocol> {
    id<AWECommentAudioRecorderViewDelegate> recorderAnimationViewDelegate;
    AWECommentAudioRecorderViewControl *_viewControl;
    AWECommentAudioRecorderViewModel *_viewModel;
    AWECommentAudioRecorderViewConfig *_config;
    UIButton *_dismissButton;
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_middleGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
}

@property (retain, nonatomic) AWECommentAudioRecorderViewControl *viewControl;
@property (retain, nonatomic) AWECommentAudioRecorderViewModel *viewModel;
@property (retain, nonatomic) AWECommentAudioRecorderViewConfig *config;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *middleGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cancelViewRect;
@property (readonly, nonatomic) double animationViewTop;
@property (weak, nonatomic) id<AWECommentAudioRecorderViewDelegate> recorderAnimationViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cancelViewRect;
- (void)actionLongPressGes:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 config:(id)arg1;
- (void)setRecorderAnimationViewDelegate:(id)arg0;
- (void)notifyRecordVolumeChangeWithValue:(double)arg0 currentTime:(double)arg1;
- (void)updateLeftTime:(double)arg0;
- (void)addMySubViews;
- (void)addOtherRecorederView;
- (void)checkOnCancelView:(id)arg0;
- (void)checkSuccessOrNot;
- (id)topGradientLayer;
- (id)middleGradientLayer;
- (id)bottomGradientLayer;
- (void)addCancelResponseView;
- (void)addVolumeIncreaseAnimationView;
- (id)positionAnimationFromValue:(id)arg0 toValue:(id)arg1;
- (id)viewControl;
- (void)addPositionAnimationWithView:(id)arg0 padding:(double)arg1;
- (id)gradientColorOne;
- (id)gradientColorTwo;
- (double)getBottomGradientLayerHeight;
- (void)recordSuccessWhenRecorderExceedLimitTime;
- (double)animationViewTop;
- (id)recorderAnimationViewDelegate;
- (void)didUpdateInputVCFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)fixIncreaseAnimationView;
- (void)addAnimationView;
- (void)configCancelTitleView;
- (void)configCancelView;
- (void)setViewControl:(id)arg0;
- (void)setTopGradientLayer:(id)arg0;
- (void)setMiddleGradientLayer:(id)arg0;
- (void)setBottomGradientLayer:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)dismissButton;
- (void)setDismissButton:(id)arg0;
- (void)dismissView;
- (void)beginLayout;

@end
