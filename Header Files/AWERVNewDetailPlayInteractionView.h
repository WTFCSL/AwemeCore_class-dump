//
//     Generated by private class-dump
//

@class UIView, NSString, AWEAwemeModel, AWERVNewDetailPageContext, AWEGradientView, UIImageView, UIButton, UILabel, AWEAntiAddictedNoticeBarView;
@protocol AWERVNewDetailPlayInteractionViewDelegate;

@interface AWERVNewDetailPlayInteractionView : UIView {
    id<AWERVNewDetailPlayInteractionViewDelegate> _delegate;
    AWERVNewDetailPageContext *_context;
    UILabel *_leftTimeLabel;
    UIButton *_videoActionButton;
    UIImageView *_loadingImageView;
    AWEAntiAddictedNoticeBarView *_mixVideoInfoBar;
    AWEGradientView *_gradientView;
    UIView *_progressView;
    UIView *_controlView;
    double _interactionViewHeight;
    double _progress;
    double _lastPlayDuration;
    NSString *_referString;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) UILabel *leftTimeLabel;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *mixVideoInfoBar;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIView *controlView;
@property (nonatomic) double interactionViewHeight;
@property (nonatomic) double progress;
@property (nonatomic) double lastPlayDuration;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWERVNewDetailPlayInteractionViewDelegate> delegate;
@property (retain, nonatomic) AWERVNewDetailPageContext *context;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg0;
- (void)playLoadingAnimation;
- (void)configWithAwemeModel:(id)arg0;
- (id)videoActionButton;
- (void)setVideoActionButton:(id)arg0;
- (double)interactionViewHeight;
- (id)leftTimeLabel;
- (id)mixVideoInfoBar;
- (void)setInteractionViewHeight:(double)arg0;
- (void)setMixVideoInfoBar:(id)arg0;
- (void)setLeftTimeLabel:(id)arg0;
- (void)setLastPlayDuration:(double)arg0;
- (double)lastPlayDuration;
- (void)switchVideoActionButtonToPlay:(unsigned long long)arg0;
- (void)videoActionButtonClicked;
- (void)controlViewClicked;
- (void)configMixInfoBarWithModel:(id)arg0;
- (void)updateLeftTimeWithSecond:(double)arg0;
- (void)updatePlayProgressWithTime:(double)arg0 totalDuration:(double)arg1;
- (void)trackMixEntranceShow;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setGradientView:(id)arg0;
- (id)delegate;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (id)context;
- (double)progress;
- (id)controlView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setProgress:(double)arg0;
- (id)gradientView;
- (void)setupUI;
- (void)stopLoadingAnimation;
- (void)setControlView:(id)arg0;

@end
