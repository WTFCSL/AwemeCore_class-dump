//
//     Generated by private class-dump
//

@class UIView;

@protocol IESECTabKitSplitSlideVC <NSObject>

@property (readonly, nonatomic) unsigned long long screenState;
@property (readonly, nonatomic) BOOL isSlideFirstAnimated;
@property (readonly, nonatomic) UIView *slideContainerView;
@property (readonly, nonatomic) double curSlideY;
@property (readonly, nonatomic) double slideInitialY;
@property (readonly, nonatomic) double slideFullMinY;
@property (readonly, nonatomic) double slideSplitMaxY;
@property (readonly, nonatomic) double curSlideDistance;
@property (readonly, nonatomic) double maxSlideDistance;
@property (nonatomic) double upSlideMinY;
@property (nonatomic) double fullScreenStateY;
@property (nonatomic) double autoUpSlideToFullY;
@property (nonatomic) double maskAlpha;
@property (nonatomic) long long splitRadius;
@property (nonatomic) BOOL disableAutoSlide;
@property (nonatomic) BOOL disableUpFullScreen;
@property (nonatomic) BOOL disablePullDownClose;
@property (nonatomic) BOOL splitIndicatorHidden;
@property (nonatomic) double splitIndicatorTopOffset;

- (double)maskAlpha;
- (void)setMaskAlpha:(double)arg0;
- (void)setFullScreenStateY:(double)arg0;
- (id)slideContainerView;
- (double)curSlideY;
- (long long)splitRadius;
- (void)setSplitRadius:(long long)arg0;
- (double)curSlideDistance;
- (double)maxSlideDistance;
- (double)slideSplitMaxY;
- (double)upSlideMinY;
- (BOOL)isSlideFirstAnimated;
- (double)slideInitialY;
- (void)setDisableAutoSlide:(BOOL)arg0;
- (void)setSplitIndicatorHidden:(BOOL)arg0;
- (double)fullScreenStateY;
- (BOOL)disableAutoSlide;
- (double)splitIndicatorTopOffset;
- (void)setSplitIndicatorTopOffset:(double)arg0;
- (void)changeScreenState:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)setDisablePullDownClose:(BOOL)arg0;
- (void)setDisableUpFullScreen:(BOOL)arg0;
- (BOOL)disablePullDownClose;
- (BOOL)disableUpFullScreen;
- (BOOL)splitIndicatorHidden;
- (void)setUpSlideMinY:(double)arg0;
- (void)setAutoUpSlideToFullY:(double)arg0;
- (double)slideFullMinY;
- (double)autoUpSlideToFullY;
- (unsigned long long)screenState;

@end
