//
//     Generated by private class-dump
//

@class UIColor;

@interface IESGCPAudienceDetailViewConfig : NSObject {
    BOOL _isLandscape;
    BOOL _isIPhoneLandscape;
    BOOL _panGestureEnable;
    BOOL _limitHeightWhenExitFullScreen;
    BOOL _showIndicatorView;
    BOOL _isFullScreen;
    BOOL _isLoadingState;
    BOOL _hasSafeArea;
    unsigned long long _scene;
    double _contentViewRightBottomOffset;
    double _contentViewCornerRadius;
    unsigned long long _rectCornerMask;
    UIColor *_titleHeaderColor;
    double _titleHeaderHeight;
    double _titleShowOffset;
    double _segmentSlideViewTopLayoutLength;
    double _portraitHeight;
    double _portraitMaxHeight;
    double _segmentSlideViewHeaderTopInset;
    double _segmentSlideViewFullScreenSpacing;
    double _segmentSlideViewHalfScreenSpacing;
    double _backgroundPortraitHeight;
    double _indicatorViewTopMargin;
    UIColor *_indicatorViewColor;
    struct CGSize { double width; double height; } _contentViewSize;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _dismissTransform;
}

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL hasSafeArea;
@property (nonatomic) BOOL isIPhoneLandscape;
@property (nonatomic) BOOL panGestureEnable;
@property (nonatomic) struct CGSize { double width; double height; } contentViewSize;
@property (nonatomic) double contentViewRightBottomOffset;
@property (nonatomic) double contentViewCornerRadius;
@property (nonatomic) unsigned long long rectCornerMask;
@property (retain, nonatomic) UIColor *titleHeaderColor;
@property (nonatomic) double titleHeaderHeight;
@property (nonatomic) double titleShowOffset;
@property (nonatomic) double segmentSlideViewTopLayoutLength;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } dismissTransform;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) double portraitHeight;
@property (nonatomic) double portraitMaxHeight;
@property (nonatomic) double segmentSlideViewHeaderTopInset;
@property (nonatomic) double segmentSlideViewFullScreenSpacing;
@property (nonatomic) double segmentSlideViewHalfScreenSpacing;
@property (nonatomic) double backgroundPortraitHeight;
@property (nonatomic) BOOL showIndicatorView;
@property (nonatomic) double indicatorViewTopMargin;
@property (retain, nonatomic) UIColor *indicatorViewColor;
@property (nonatomic) BOOL limitHeightWhenExitFullScreen;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isLoadingState;

- (double)contentViewCornerRadius;
- (void)setPortraitHeight:(double)arg0;
- (BOOL)hasSafeArea;
- (BOOL)isIPhoneLandscape;
- (double)portraitMaxHeight;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })dismissTransform;
- (double)titleHeaderHeight;
- (double)segmentSlideViewTopLayoutLength;
- (id)initWithIsLandscape:(BOOL)arg0 hasSafeArea:(BOOL)arg1 scence:(unsigned long long)arg2;
- (void)setIsLoadingState:(BOOL)arg0;
- (void)updateWithDetailThemeConfig:(id)arg0 useHalfScreenConfig:(BOOL)arg1;
- (double)contentViewRightBottomOffset;
- (BOOL)panGestureEnable;
- (double)portraitHeight;
- (id)titleHeaderColor;
- (double)segmentSlideViewHeaderTopInset;
- (double)segmentSlideViewFullScreenSpacing;
- (double)segmentSlideViewHalfScreenSpacing;
- (unsigned long long)rectCornerMask;
- (BOOL)limitHeightWhenExitFullScreen;
- (double)titleShowOffset;
- (void)updateLiveAudienceDetailConfigFrom:(id)arg0 useHalfScreenConfig:(BOOL)arg1;
- (void)updateVideoAudienceDetailConfigFrom:(id)arg0 useHalfScreenConfig:(BOOL)arg1;
- (void)setCommonConfig;
- (void)setupLiveAudienceDetailConfig;
- (void)setupVideoAudienceDetailConfig;
- (double)segmentSlideViewSpacingWithHeaderTheme:(id)arg0;
- (void)setSegmentSlideViewFullScreenSpacing:(double)arg0;
- (void)setSegmentSlideViewHalfScreenSpacing:(double)arg0;
- (void)setIndicatorViewColor:(id)arg0;
- (void)setTitleHeaderColor:(id)arg0;
- (void)setSegmentSlideViewTopLayoutLength:(double)arg0;
- (void)setPortraitMaxHeight:(double)arg0;
- (void)setContentViewRightBottomOffset:(double)arg0;
- (void)setContentViewCornerRadius:(double)arg0;
- (void)setRectCornerMask:(unsigned long long)arg0;
- (void)setIsIPhoneLandscape:(BOOL)arg0;
- (void)setPanGestureEnable:(BOOL)arg0;
- (void)setTitleHeaderHeight:(double)arg0;
- (void)setTitleShowOffset:(double)arg0;
- (void)setDismissTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0;
- (void)setSegmentSlideViewHeaderTopInset:(double)arg0;
- (void)setLimitHeightWhenExitFullScreen:(BOOL)arg0;
- (double)backgroundPortraitHeight;
- (void)setBackgroundPortraitHeight:(double)arg0;
- (double)indicatorViewTopMargin;
- (void)setIndicatorViewTopMargin:(double)arg0;
- (id)indicatorViewColor;
- (BOOL)isLoadingState;
- (void)setHasSafeArea:(BOOL)arg0;
- (BOOL)isFullScreen;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)isLandscape;
- (unsigned long long)scene;
- (void)setIsFullScreen:(BOOL)arg0;
- (void)setContentViewSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })contentViewSize;
- (void)setupConfig;
- (void)setShowIndicatorView:(BOOL)arg0;
- (BOOL)showIndicatorView;

@end
