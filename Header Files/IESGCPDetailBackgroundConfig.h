//
//     Generated by private class-dump
//

@class UIColor, IESGCPDetailBackgroundImageConfig;

@interface IESGCPDetailBackgroundConfig : NSObject {
    BOOL _isLoading;
    BOOL _isLandscape;
    BOOL _isFullScreen;
    BOOL _onlyUseFullScreenConfig;
    BOOL _isV4StructureConfig;
    BOOL _showIndicatorView;
    BOOL _isLightBgColorStyle;
    BOOL _isImageInBlendMode;
    int _topPicSource;
    double _indicatorViewTopMargin;
    UIColor *_indicatorViewColor;
    long long _transactionMode;
    UIColor *_backgroundColor;
    UIColor *_halfScreenBackgroundColor;
    double _backgroundCornerRadius;
    IESGCPDetailBackgroundImageConfig *_miniImageConfig;
    IESGCPDetailBackgroundImageConfig *_floatImageConfig;
    double _backgroundDefaultHeight;
    double _backgroundMaxHeight;
    double _detailViewDefaultHeight;
    double _detailViewMaxHeight;
}

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL onlyUseFullScreenConfig;
@property (nonatomic) BOOL isV4StructureConfig;
@property (nonatomic) BOOL showIndicatorView;
@property (nonatomic) double indicatorViewTopMargin;
@property (retain, nonatomic) UIColor *indicatorViewColor;
@property (nonatomic) long long transactionMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *halfScreenBackgroundColor;
@property (nonatomic) BOOL isLightBgColorStyle;
@property (nonatomic) double backgroundCornerRadius;
@property (nonatomic) BOOL isImageInBlendMode;
@property (retain, nonatomic) IESGCPDetailBackgroundImageConfig *miniImageConfig;
@property (retain, nonatomic) IESGCPDetailBackgroundImageConfig *floatImageConfig;
@property (nonatomic) double backgroundDefaultHeight;
@property (nonatomic) double backgroundMaxHeight;
@property (nonatomic) double detailViewDefaultHeight;
@property (nonatomic) double detailViewMaxHeight;
@property (nonatomic) int topPicSource;

+ (id)generateFromDetailViewConfig:(id)arg0 andThemeConfig:(id)arg1;
+ (id)getHSBGradientColorsFrom:(id)arg0;
+ (id)headerMiniBrandImageName;
+ (id)headerFloatBrandImageName;
+ (id)headerBlueWhiteGradientImageName;

- (void)setIndicatorViewColor:(id)arg0;
- (BOOL)isV4StructureConfig;
- (double)indicatorViewTopMargin;
- (void)setIndicatorViewTopMargin:(double)arg0;
- (id)indicatorViewColor;
- (void)setDetailViewDefaultHeight:(double)arg0;
- (void)setDetailViewMaxHeight:(double)arg0;
- (void)setBackgroundDefaultHeight:(double)arg0;
- (void)setHalfScreenBackgroundColor:(id)arg0;
- (void)setIsLightBgColorStyle:(BOOL)arg0;
- (void)setIsV4StructureConfig:(BOOL)arg0;
- (void)setMiniImageConfig:(id)arg0;
- (void)setFloatImageConfig:(id)arg0;
- (void)setTopPicSource:(int)arg0;
- (void)setBackgroundMaxHeight:(double)arg0;
- (void)setOnlyUseFullScreenConfig:(BOOL)arg0;
- (BOOL)onlyUseFullScreenConfig;
- (void)setIsImageInBlendMode:(BOOL)arg0;
- (id)halfScreenBackgroundColor;
- (BOOL)isLightBgColorStyle;
- (BOOL)isImageInBlendMode;
- (id)miniImageConfig;
- (id)floatImageConfig;
- (double)backgroundDefaultHeight;
- (double)backgroundMaxHeight;
- (double)detailViewDefaultHeight;
- (double)detailViewMaxHeight;
- (int)topPicSource;
- (BOOL)isLoading;
- (BOOL)isFullScreen;
- (double)backgroundCornerRadius;
- (void).cxx_destruct;
- (void)setBackgroundCornerRadius:(double)arg0;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)isLandscape;
- (id)backgroundColor;
- (void)setIsLoading:(BOOL)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (void)setShowIndicatorView:(BOOL)arg0;
- (BOOL)showIndicatorView;
- (long long)transactionMode;
- (void)setTransactionMode:(long long)arg0;

@end
