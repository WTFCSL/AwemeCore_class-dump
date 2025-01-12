//
//     Generated by private class-dump
//

@class NSString, RACDisposable, UIImageView, IESLiveGiftVoteProgressView, UILabel, UIView, NSArray;
@protocol IESLiveWebPPlayer;

@interface IESLiveGiftVoteIndicatorView : UIView <IESLivePluginLayoutViewAdapter> {
    BOOL _hasFinished;
    BOOL _isInEnterAnimation;
    BOOL _lastAdvLabelInFinish;
    RACDisposable *_timerDisposable;
    UIView *_centerBgView;
    unsigned long long _displayMode;
    UIView *_containerView;
    UILabel *_advantageShowLabel;
    UILabel *_tempAnimationLabel;
    UILabel *_timeLabel;
    UIImageView<IESLiveWebPPlayer> *_numberImageView;
    IESLiveGiftVoteProgressView *_leftProgressView;
    IESLiveGiftVoteProgressView *_rightProgressView;
    UIImageView *_particleImageView;
    UIView *_scanGradientView;
    unsigned long long _advanceType;
    NSArray *_advanceTextArray;
    NSArray *_resultTextArray;
}

@property (retain, nonatomic) RACDisposable *timerDisposable;
@property (retain, nonatomic) UIView *centerBgView;
@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *advantageShowLabel;
@property (retain, nonatomic) UILabel *tempAnimationLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *numberImageView;
@property (retain, nonatomic) IESLiveGiftVoteProgressView *leftProgressView;
@property (retain, nonatomic) IESLiveGiftVoteProgressView *rightProgressView;
@property (retain, nonatomic) UIImageView *particleImageView;
@property (retain, nonatomic) UIView *scanGradientView;
@property (nonatomic) unsigned long long advanceType;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) BOOL isInEnterAnimation;
@property (copy, nonatomic) NSArray *advanceTextArray;
@property (copy, nonatomic) NSArray *resultTextArray;
@property (nonatomic) BOOL lastAdvLabelInFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (unsigned long long)advanceType;
- (void)setAdvanceType:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)arg0;
- (id)centerBgView;
- (void)setCenterBgView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 displayMode:(unsigned long long)arg1;
- (id)leftProgressView;
- (id)rightProgressView;
- (void)setLeftProgressView:(id)arg0;
- (void)setRightProgressView:(id)arg0;
- (void)startTimerWithVote:(id)arg0;
- (void)finishVote:(id)arg0;
- (id)numberImageView;
- (id)advanceTextArray;
- (void)p_updateAdvantageLabelWithText:(id)arg0 finished:(BOOL)arg1;
- (void)setIsInEnterAnimation:(BOOL)arg0;
- (void)p_updateVote:(id)arg0 finished:(BOOL)arg1;
- (void)setTimerDisposable:(id)arg0;
- (id)tempAnimationLabel;
- (id)advantageShowLabel;
- (BOOL)isInEnterAnimation;
- (void)p_startAdvanceChangeAnimationIfNeededWithLeftWidth:(double)arg0 completion:(id /* block */)arg1;
- (void)p_handleFinishWithVote:(id)arg0 Type:(unsigned long long)arg1;
- (void)p_updateVote:(id)arg0;
- (id)resultTextArray;
- (id)particleImageView;
- (id)scanGradientView;
- (id)p_getPreprocessText:(id)arg0;
- (BOOL)lastAdvLabelInFinish;
- (id)p_getReverseText:(id)arg0;
- (void)p_updatelabel:(id)arg0 withText:(id)arg1 finished:(BOOL)arg2;
- (void)setLastAdvLabelInFinish:(BOOL)arg0;
- (id)timerDisposable;
- (void)setAdvantageShowLabel:(id)arg0;
- (void)setTempAnimationLabel:(id)arg0;
- (void)setNumberImageView:(id)arg0;
- (void)setParticleImageView:(id)arg0;
- (void)setScanGradientView:(id)arg0;
- (void)setAdvanceTextArray:(id)arg0;
- (void)setResultTextArray:(id)arg0;
- (unsigned long long)displayMode;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setTimeLabel:(id)arg0;
- (id)containerView;
- (void)setDisplayMode:(unsigned long long)arg0;
- (id)viewType;
- (void)dealloc;
- (id)timeLabel;
- (BOOL)hasFinished;
- (void)setHasFinished:(BOOL)arg0;

@end
