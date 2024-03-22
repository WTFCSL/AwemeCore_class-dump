//
//     Generated by private class-dump
//

@class CMCLightningRecordBlurView, UILabel, CMCLightningRecordRingView, RACSubject, NSNumber, UIImageView, NSString, NSMutableArray, CMCRecordMode, CMCLightningRecordLongtailView, CMCLightningRecordWhiteView;

@interface CMCLightningRecordButton : UIView <CMCLightningRecordAnimatable, CMCVideoProgressViewProtocol> {
    BOOL _showLightningView;
    BOOL _showMicroView;
    BOOL _reshootMode;
    float _progress;
    long long _state;
    CMCLightningRecordRingView *_ringView;
    CMCLightningRecordBlurView *_blurView;
    CMCRecordMode *_recordMode;
    double _maxDuration;
    RACSubject *_switchModelSubject;
    NSNumber *_longtailShootAnimationEnabled;
    NSNumber *_longtailShootAnimationDurationCycle;
    NSMutableArray *_animatables;
    CMCLightningRecordWhiteView *_whiteView;
    UIImageView *_lightningView;
    UIImageView *_boomerangView;
    UIImageView *_audioRecordView;
    UIImageView *_cameraView;
    UILabel *_cameraLabel;
    CMCLightningRecordLongtailView *_longtailView;
}

@property (retain, nonatomic) NSMutableArray *animatables;
@property (retain, nonatomic) CMCLightningRecordWhiteView *whiteView;
@property (retain, nonatomic) UIImageView *lightningView;
@property (retain, nonatomic) UIImageView *boomerangView;
@property (retain, nonatomic) UIImageView *audioRecordView;
@property (retain, nonatomic) UIImageView *cameraView;
@property (retain, nonatomic) UILabel *cameraLabel;
@property (retain, nonatomic) CMCLightningRecordLongtailView *longtailView;
@property (nonatomic) float progress;
@property (retain, nonatomic) CMCLightningRecordRingView *ringView;
@property (retain, nonatomic) CMCLightningRecordBlurView *blurView;
@property (nonatomic) BOOL showLightningView;
@property (nonatomic) BOOL showMicroView;
@property (nonatomic) BOOL reshootMode;
@property (retain, nonatomic) CMCRecordMode *recordMode;
@property (nonatomic) double maxDuration;
@property (weak, nonatomic) RACSubject *switchModelSubject;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (retain, nonatomic) NSNumber *longtailShootAnimationDurationCycle;
@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recordMode;
- (void)setRecordMode:(id)arg0;
- (void)updateStandardDurationIndicatorWithLongVideoEnabled:(BOOL)arg0 standardDuration:(double)arg1 maxDuration:(double)arg2;
- (void)setProgress:(float)arg0 duration:(double)arg1 animated:(BOOL)arg2;
- (void)updateViewWithTimeSegments:(id)arg0 totalTime:(double)arg1;
- (void)setShowLightningView:(BOOL)arg0;
- (BOOL)reshootMode;
- (id)p_videoIconImage;
- (id)switchModelSubject;
- (void)setLongtailShootAnimationEnabled:(id)arg0;
- (id)lightningView;
- (BOOL)showLightningView;
- (void)setReshootMode:(BOOL)arg0;
- (id)longtailShootAnimationEnabled;
- (void)p_setReshootTimeFrom:(float)arg0 to:(float)arg1;
- (BOOL)p_longtailShootAnimationEnabled;
- (id)longtailView;
- (double)p_longtailShootAnimationDurationCycle;
- (id)longtailShootAnimationDurationCycle;
- (void)setReshootTimeFrom:(double)arg0 to:(double)arg1 totalDuration:(double)arg2;
- (void)copyStateToAnotherButton:(id)arg0;
- (void)setSwitchModelSubject:(id)arg0;
- (void)setLongtailShootAnimationDurationCycle:(id)arg0;
- (id)animatables;
- (void)setAnimatables:(id)arg0;
- (void)setLightningView:(id)arg0;
- (void)setLongtailView:(id)arg0;
- (BOOL)showMicroView;
- (id)audioRecordView;
- (id)boomerangView;
- (void)setShowMicroView:(BOOL)arg0;
- (void)setBoomerangView:(id)arg0;
- (void)setAudioRecordView:(id)arg0;
- (id)cameraLabel;
- (void)setCameraLabel:(id)arg0;
- (id)accessibilityLabel;
- (void)setBlurView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (long long)state;
- (id)blurView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setState:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (float)progress;
- (void)setProgress:(float)arg0;
- (BOOL)isAccessibilityElement;
- (double)maxDuration;
- (id)cameraView;
- (void)setCameraView:(id)arg0;
- (void)setMaxDuration:(double)arg0;
- (id)ringView;
- (void)setRingView:(id)arg0;
- (id)whiteView;
- (void)setWhiteView:(id)arg0;

@end