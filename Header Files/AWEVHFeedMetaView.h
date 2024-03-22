//
//     Generated by private class-dump
//

@class UIView, NSTimer, AWEAwemeModel, DUXTextTag, UIImageView, BDImageView, DUXButton, UILabel;

@interface AWEVHFeedMetaView : UIView {
    BOOL _onFinishStyle;
    UILabel *_retryLabel;
    id /* block */ _collectionButtonTapped;
    id /* block */ _watchButtonTapped;
    id /* block */ _willRepeated;
    id /* block */ _repeatedButtonTapped;
    AWEAwemeModel *_awemeModel;
    NSTimer *_timer;
    double _remainTime;
    BDImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_videoTypeLabel;
    UIImageView *_quoteImageView;
    UILabel *_descLabel;
    UIView *_metaView;
    UILabel *_actorLabel;
    UIView *_lineView;
    UIView *_retryView;
    UIImageView *_retryImageView;
    DUXButton *_collectionButton;
    DUXButton *_watchButton;
    DUXTextTag *_videoTag;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double remainTime;
@property (retain, nonatomic) BDImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *videoTypeLabel;
@property (retain, nonatomic) UIImageView *quoteImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *metaView;
@property (retain, nonatomic) UILabel *actorLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *retryView;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) DUXButton *collectionButton;
@property (retain, nonatomic) DUXButton *watchButton;
@property (retain, nonatomic) DUXTextTag *videoTag;
@property (copy, nonatomic) id /* block */ collectionButtonTapped;
@property (copy, nonatomic) id /* block */ watchButtonTapped;
@property (copy, nonatomic) id /* block */ willRepeated;
@property (copy, nonatomic) id /* block */ repeatedButtonTapped;
@property (nonatomic) BOOL onFinishStyle;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (void)configWithModel:(id)arg0;
- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)retryView;
- (void)setRetryView:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)setCollectionButton:(id)arg0;
- (id)collectionButton;
- (id)videoTag;
- (void)setVideoTag:(id)arg0;
- (void)updateCollectionStatus:(BOOL)arg0;
- (double)remainTime;
- (void)setRemainTime:(double)arg0;
- (id)metaView;
- (id)quoteImageView;
- (id /* block */)collectionButtonTapped;
- (void)collectionButtonAction;
- (void)setCollectionButtonTapped:(id /* block */)arg0;
- (void)setQuoteImageView:(id)arg0;
- (void)setMetaView:(id)arg0;
- (void)setOnFinishStyle:(BOOL)arg0;
- (void)setupUIForInfoStyle;
- (void)configForInfoStyle;
- (void)setupUIForFinishStyle;
- (void)configForFinishStyle;
- (BOOL)onFinishStyle;
- (id)retryLabel;
- (void)updateRetryLabel;
- (id)buildInfoStyleSubTitle:(id)arg0;
- (id)videoTypeLabel;
- (id)buildFinishStyleSubTitle:(id)arg0;
- (id)buildActorTitle:(id)arg0;
- (id)actorLabel;
- (id)retryImageView;
- (id)watchButton;
- (void)configureConstraintsForInfoStyle;
- (void)configureConstraintsForFinishStyle;
- (id /* block */)willRepeated;
- (id /* block */)watchButtonTapped;
- (id /* block */)repeatedButtonTapped;
- (void)retryButtonAction;
- (void)watchButtonAction;
- (void)showInfoStyle;
- (void)showFinishStyle;
- (void)setRetryLabel:(id)arg0;
- (void)setWatchButtonTapped:(id /* block */)arg0;
- (void)setWillRepeated:(id /* block */)arg0;
- (void)setRepeatedButtonTapped:(id /* block */)arg0;
- (void)setVideoTypeLabel:(id)arg0;
- (void)setActorLabel:(id)arg0;
- (void)setRetryImageView:(id)arg0;
- (void)setWatchButton:(id)arg0;
- (id)timer;
- (void)startTimer;
- (void).cxx_destruct;
- (void)stopTimer;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimer:(id)arg0;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)setTitleLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)configureSubviews;

@end