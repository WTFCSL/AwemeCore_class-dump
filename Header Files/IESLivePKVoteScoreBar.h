//
//     Generated by private class-dump
//

@class UIFont, IESLiveImageView, UILabel, IESLiveGradientView;
@protocol IESLiveCompoundSubscription, IESLiveRevenueInteractPlayModel;

@interface IESLivePKVoteScoreBar : UIView {
    id<IESLiveCompoundSubscription> _disposable;
    id<IESLiveRevenueInteractPlayModel> _playModel;
    long long _scoreBarEnhanceRatio;
    IESLiveImageView *_backrgoundView;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIFont *_scoreTextFont;
    IESLiveGradientView *_leftScoreView;
    IESLiveGradientView *_rightScoreView;
}

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) id<IESLiveRevenueInteractPlayModel> playModel;
@property (nonatomic) long long scoreBarEnhanceRatio;
@property (retain, nonatomic) IESLiveImageView *backrgoundView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UILabel *rightLabel;
@property (retain, nonatomic) UIFont *scoreTextFont;
@property (retain, nonatomic) IESLiveGradientView *leftScoreView;
@property (retain, nonatomic) IESLiveGradientView *rightScoreView;

- (id)initWithDIContext:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setPlayModel:(id)arg0;
- (id)playModel;
- (id)scoreTextFont;
- (void)setScoreTextFont:(id)arg0;
- (BOOL)enableScoreBarOpt;
- (void)layoutOptUI;
- (void)observeData;
- (id)backrgoundView;
- (void)updateScoreBar;
- (void)updateScoreLabel;
- (void)updateScoreBarAnimated:(BOOL)arg0;
- (void)showResultTagWith:(unsigned long long)arg0;
- (void)setBackrgoundView:(id)arg0;
- (void)resetLabelAccessibilityLabel;
- (void)setLeftScoreView:(id)arg0;
- (id)leftScoreView;
- (void)setRightScoreView:(id)arg0;
- (id)rightScoreView;
- (long long)scoreBarEnhanceRatio;
- (id)attributedTextStringWith:(id)arg0;
- (void)setScoreBarEnhanceRatio:(long long)arg0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:(id)arg0;
- (void)setRightLabel:(id)arg0;
- (void)layoutUI;

@end
