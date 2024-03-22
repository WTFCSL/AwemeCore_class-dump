//
//     Generated by private class-dump
//

@class UILabel, NSString, UIImageView, LOTAnimationView, AWEGradientView, UIView, BDImageView;

@interface AWENearbyC2FeedLiveCardResouceContainerView : UIView <AWENearbyC2FeedLiveCardContainerProtocol> {
    AWEGradientView *_backgroundGradientView;
    UIImageView *_backgroundImageView;
    UIImageView *_liveImageView;
    UIImageView *_textImageView;
    UIImageView *_maskImageView;
    LOTAnimationView *_lottieView;
    UIView *_bottomPanelView;
    AWEGradientView *_bottomGradientView;
    AWEGradientView *_liveIconBgGradientView;
    UIImageView *_textImgBackView;
    UIView *_liveInfoView;
    BDImageView *_liveIconImageView;
    UILabel *_liveTextLabel;
    UIImageView *_coverImageView;
    UIView *_liveContentView;
    UILabel *_liveInfoLabel;
    BDImageView *_userIconImageView;
    UILabel *_userTitleLabel;
}

@property (retain, nonatomic) AWEGradientView *backgroundGradientView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *liveImageView;
@property (retain, nonatomic) UIImageView *textImageView;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) UIView *bottomPanelView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) AWEGradientView *liveIconBgGradientView;
@property (retain, nonatomic) UIImageView *textImgBackView;
@property (retain, nonatomic) UIView *liveInfoView;
@property (retain, nonatomic) BDImageView *liveIconImageView;
@property (retain, nonatomic) UILabel *liveTextLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *liveContentView;
@property (retain, nonatomic) UILabel *liveInfoLabel;
@property (retain, nonatomic) BDImageView *userIconImageView;
@property (retain, nonatomic) UILabel *userTitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundImageUrl;
+ (double)bottomViewHeight;
+ (id)findLottieJSONPath:(id)arg0;
+ (double)cardHighWithWidth:(double)arg0 model:(id)arg1;
+ (void)downloadLottieResourceWithCompletion:(id /* block */)arg0;
+ (id)lottieSourceLocalPath;
+ (id)lottieSourceURL;
+ (id)tagIvUrl;
+ (id)backgroundLogoUrl;
+ (double)coverTopMargin;
+ (double)coverMargin;
+ (double)bottomOverCoverHeight;
+ (double)coverBottomMargin;
+ (struct CGPoint { double x0; double x1; })backGradientStartPoint;
+ (struct CGPoint { double x0; double x1; })backGradientEndPoint;
+ (id)backGradientColors;
+ (id)backGradientLocations;
+ (id)tagIvBackGroundUrl;
+ (id)resourceSettings;
+ (void)prefetchImgResource;
+ (void)initialize;
+ (unsigned long long)cardStyle;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (id)lottieView;
- (void)setLottieView:(id)arg0;
- (id)liveInfoView;
- (id)liveInfoLabel;
- (void)setLiveInfoLabel:(id)arg0;
- (id)liveTextLabel;
- (void)setLiveTextLabel:(id)arg0;
- (void)setUpVCWithModel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverFrame;
- (id)liveIconBgGradientView;
- (id)liveIconImageView;
- (id)userIconImageView;
- (void)updateContainerViewInfoWithModel:(id)arg0;
- (void)updateLiveContentView:(id)arg0;
- (void)didPreviewStreamStartPlay;
- (void)didRemoveLiveContentView;
- (void)setLiveInfoView:(id)arg0;
- (void)setLiveIconImageView:(id)arg0;
- (void)setLiveIconBgGradientView:(id)arg0;
- (void)setUserIconImageView:(id)arg0;
- (id)liveImageView;
- (id)textImageView;
- (id)userTitleLabel;
- (id)textImgBackView;
- (id)bottomPanelView;
- (void)setupBottomGradientView;
- (void)setupLayout_default;
- (void)setupLayout_style1;
- (void)setupLayout_style2;
- (void)setLiveImageView:(id)arg0;
- (void)setTextImageView:(id)arg0;
- (void)setBottomPanelView:(id)arg0;
- (void)setTextImgBackView:(id)arg0;
- (void)setUserTitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (id)maskImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (long long)accessibilityElementCount;
- (void)setupUI;
- (void)setBackgroundImageView:(id)arg0;
- (id)liveContentView;
- (void)setLiveContentView:(id)arg0;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg0;
- (void)setMaskImageView:(id)arg0;
- (id)backgroundGradientView;
- (void)setBackgroundGradientView:(id)arg0;
- (void)setupLayout;

@end