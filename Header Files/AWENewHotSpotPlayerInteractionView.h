//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, UIView, UIImageView, UIButton, UIViewController, UILabel, AWEAntiAddictedNoticeBarView;
@protocol AWEFeedBottomTipProtocol, AWEDiscoverDBottomBarViewProtocol;

@interface AWENewHotSpotPlayerInteractionView : UIView {
    NSString *_referString;
    double _interactionViewHeight;
    UIButton *_videoActionButton;
    UIView<AWEDiscoverDBottomBarViewProtocol> *_bottomBarView;
    AWEAntiAddictedNoticeBarView *_mixVideoInfoBar;
    UIView *_progressView;
    UIImageView *_loadingImageView;
    UIViewController *_parentController;
    double _progress;
    UILabel *_leftTimeLabel;
    UIView *_bottomGradientView;
    UIView<AWEFeedBottomTipProtocol> *_hotSearchTipView;
    UIView<AWEDiscoverDBottomBarViewProtocol> *_playletBottomBarView;
    AWEAwemeModel *_awemeModel;
}

@property (retain, nonatomic) UILabel *leftTimeLabel;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) UIView<AWEFeedBottomTipProtocol> *hotSearchTipView;
@property (retain, nonatomic) UIView<AWEDiscoverDBottomBarViewProtocol> *playletBottomBarView;
@property (nonatomic) double interactionViewHeight;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) UIButton *videoActionButton;
@property (retain, nonatomic) UIView<AWEDiscoverDBottomBarViewProtocol> *bottomBarView;
@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *mixVideoInfoBar;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIImageView *loadingImageView;
@property (weak, nonatomic) UIViewController *parentController;
@property (nonatomic) double progress;

+ (BOOL)enableMixVideo:(id)arg0;
+ (BOOL)enableMixTypeRelatedVideo:(id)arg0;
+ (BOOL)enablePlayletBottomView:(id)arg0;
+ (BOOL)enableHotSearchTipView:(id)arg0 referString:(id)arg1;

- (id)awemeModel;
- (id)referString;
- (void)setAwemeModel:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)loadingImageView;
- (void)setLoadingImageView:(id)arg0;
- (void)configWithAwemeModel:(id)arg0;
- (id)videoActionButton;
- (void)setVideoActionButton:(id)arg0;
- (double)interactionViewHeight;
- (id)hotSearchTipView;
- (id)playletBottomBarView;
- (id)leftTimeLabel;
- (id)mixVideoInfoBar;
- (BOOL)isBottomBarHidden;
- (void)updateHotSearchTipView:(id)arg0;
- (void)updatePlayletBottomView:(id)arg0;
- (void)hideLeftTimeLabelIfNeeded;
- (void)updateLeftTime:(double)arg0 totalTime:(double)arg1;
- (double)thresholdTime;
- (BOOL)shouldShowHotSearchTipView:(id)arg0;
- (void)setInteractionViewHeight:(double)arg0;
- (void)setMixVideoInfoBar:(id)arg0;
- (void)setLeftTimeLabel:(id)arg0;
- (void)setHotSearchTipView:(id)arg0;
- (void)setPlayletBottomBarView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (double)progress;
- (id)parentController;
- (void)setParentController:(id)arg0;
- (void)layoutSubviews;
- (void)setProgress:(double)arg0;
- (double)bottomBarHeight;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg0;

@end
