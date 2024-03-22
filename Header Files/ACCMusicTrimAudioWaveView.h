//
//     Generated by private class-dump
//

@class NSString, NSArray, NSURL, CALayer, CAShapeLayer, ACCMusicTrimAudioWaveViewLoopConfig, ACCMusicTrimViewSnapShootModel, UIScrollView;
@protocol ACCMusicTrimAudioWaveDelegate;

@interface ACCMusicTrimAudioWaveView : UIView <UIScrollViewDelegate> {
    double _audioLengthEachPointStandFor;
    double _audioWaveViewStartTime;
    double _audioClipStartTime;
    double _audioClipDuration;
    ACCMusicTrimAudioWaveViewLoopConfig *_loopConfig;
    double _currentTimeStamp;
    id<ACCMusicTrimAudioWaveDelegate> _delegate;
    NSString *_musicID;
    NSURL *_audioURL;
    double _totalAudioDuration;
    double _audioWaveViewWidth;
    double _audioWaveViewHeight;
    NSArray *_originAudioWavePoints;
    double _originAudioLengthEachPointStandFor;
    NSArray *_currentAudioWavePoints;
    double _realAudioLengthEachPointStandFor;
    double _audioWavePointLengthScale;
    UIScrollView *_scrollView;
    CALayer *_canvasLayer;
    CALayer *_progressLayer;
    CALayer *_placeholderLayer;
    CAShapeLayer *_canvasMaskLayer;
    CAShapeLayer *_progressMaskLayer;
    CAShapeLayer *_placeholderMaskLayer;
    unsigned long long _audioWaveUpdateType;
}

@property (retain, nonatomic) NSString *musicID;
@property (retain, nonatomic) NSURL *audioURL;
@property (nonatomic) double totalAudioDuration;
@property (nonatomic) double audioWaveViewWidth;
@property (nonatomic) double audioWaveViewHeight;
@property (retain, nonatomic) NSArray *originAudioWavePoints;
@property (nonatomic) double originAudioLengthEachPointStandFor;
@property (retain, nonatomic) NSArray *currentAudioWavePoints;
@property (nonatomic) double audioLengthEachPointStandFor;
@property (nonatomic) double realAudioLengthEachPointStandFor;
@property (nonatomic) double audioWavePointLengthScale;
@property (retain, nonatomic) ACCMusicTrimAudioWaveViewLoopConfig *loopConfig;
@property (nonatomic) double audioWaveViewStartTime;
@property (nonatomic) double audioClipStartTime;
@property (nonatomic) double audioClipDuration;
@property (nonatomic) double currentTimeStamp;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CALayer *canvasLayer;
@property (retain, nonatomic) CALayer *progressLayer;
@property (retain, nonatomic) CALayer *placeholderLayer;
@property (retain, nonatomic) CAShapeLayer *canvasMaskLayer;
@property (retain, nonatomic) CAShapeLayer *progressMaskLayer;
@property (retain, nonatomic) CAShapeLayer *placeholderMaskLayer;
@property (nonatomic) unsigned long long audioWaveUpdateType;
@property (readonly, nonatomic) struct _HTSAudioRange { double x0; double x1; } selectedAudioRange;
@property (readonly, nonatomic) ACCMusicTrimViewSnapShootModel *trimSnapShootModel;
@property (weak, nonatomic) id<ACCMusicTrimAudioWaveDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)musicID;
- (double)audioWaveViewStartTime;
- (void)setAudioWaveViewStartTime:(double)arg0;
- (void)setCurrentTimeStamp:(double)arg0;
- (void)setMusicID:(id)arg0;
- (double)totalAudioDuration;
- (id)initWithConfigModel:(id)arg0;
- (void)setAudioLengthEachPointStandFor:(double)arg0;
- (double)audioLengthEachPointStandFor;
- (void)p_addBarAtIndex:(long long)arg0 height:(double)arg1 color:(id)arg2 toLayer:(id)arg3;
- (id)placeholderMaskLayer;
- (void)setPlaceholderMaskLayer:(id)arg0;
- (void)updateAudioCurrentTimeStamp:(double)arg0;
- (void)shouldHideAudioWaveProgress:(BOOL)arg0 afterDelay:(double)arg1;
- (double)transferFromMusicDurationToAudioWavePointsWidth:(double)arg0;
- (double)audioClipStartTime;
- (double)audioClipDuration;
- (void)setupAudioLengthEachPointStandFor:(double)arg0;
- (void)setupAudioClipStartTime:(double)arg0;
- (void)setupAudioWaveViewStartTime:(double)arg0;
- (void)setupAudioClipDuration:(double)arg0;
- (void)updateAudioWaveViewWithAnimationType:(unsigned long long)arg0;
- (void)setupLoopConfig:(id)arg0;
- (double)transferFromAudioWavePointsWidthToMusicDuration:(double)arg0;
- (double)audioWaveLength;
- (void)setTotalAudioDuration:(double)arg0;
- (void)setAudioWaveViewWidth:(double)arg0;
- (void)setAudioWaveViewHeight:(double)arg0;
- (struct _HTSAudioRange { double x0; double x1; })selectedAudioRange;
- (id)trimSnapShootModel;
- (double)audioWaveViewWidth;
- (double)audioWaveViewHeight;
- (void)setupUIWith:(id)arg0;
- (void)setupOriginAudioWavePointsWithConfigModel:(id)arg0;
- (id)loopConfig;
- (BOOL)isLoopConfig:(id)arg0 isEqualToConfig:(id)arg1;
- (void)setLoopConfig:(id)arg0;
- (unsigned long long)audioWaveUpdateType;
- (void)setAudioWaveUpdateType:(unsigned long long)arg0;
- (double)originAudioLengthEachPointStandFor;
- (void)setRealAudioLengthEachPointStandFor:(double)arg0;
- (void)setAudioClipStartTime:(double)arg0;
- (void)setAudioClipDuration:(double)arg0;
- (void)resetCurrentAudioWavePoints;
- (void)updateAudioWaveBar;
- (void)updateScrollViewContentOffsetWithAnimated:(BOOL)arg0;
- (void)p_updatePlaceholderLayerMaskLayerWithAudioClipStartTime:(double)arg0;
- (void)p_updateCanvasLayerMaskLayerWithAudioClipStartTime:(double)arg0;
- (id)currentAudioWavePoints;
- (void)p_updateProgressLayerMaskLayerWithAudioClipStartTime:(double)arg0 audioClipDuration:(double)arg1;
- (double)audioWavePointLengthScale;
- (void)setOriginAudioLengthEachPointStandFor:(double)arg0;
- (void)setOriginAudioWavePoints:(id)arg0;
- (void)transformAudioWaveBarAnimated;
- (double)realAudioLengthEachPointStandFor;
- (void)setAudioWavePointLengthScale:(double)arg0;
- (id)originAudioWavePoints;
- (void)setCurrentAudioWavePoints:(id)arg0;
- (BOOL)p_addScaleAnimationToBarLayer:(id)arg0 newHeight:(double)arg1;
- (double)selectedAudioLength;
- (id)canvasMaskLayer;
- (void)updateValuesAfterViewScrolledByUser;
- (void)setupScrollViewWith:(id)arg0;
- (void)setupCanvasLayer;
- (void)setupProgressLayer;
- (void)setupPlaceholderLayer;
- (void)setCanvasMaskLayer:(id)arg0;
- (id)accessibilityLabel;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setPlaceholderLayer:(id)arg0;
- (void)accessibilityDecrement;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (id)placeholderLayer;
- (void)accessibilityIncrement;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)scrollView;
- (id)accessibilityValue;
- (double)currentTimeStamp;
- (id)audioURL;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg0;
- (void)setAudioURL:(id)arg0;
- (id)progressMaskLayer;
- (void)setProgressMaskLayer:(id)arg0;
- (BOOL)shouldLoop;
- (id)canvasLayer;
- (void)setCanvasLayer:(id)arg0;

@end
