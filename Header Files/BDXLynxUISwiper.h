//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface BDXLynxUISwiper : LynxUI <BDXLynxSwiperDelegate> {
    BOOL _showDots;
    BOOL _isInfiniteLoop;
    BOOL _isAutoPlay;
    BOOL _hidelabel;
    BOOL _isHorizonCenter;
    BOOL _isVerticalCenter;
    BOOL _isCircle;
    BOOL _isTouchable;
    BOOL _smoothScroll;
    BOOL _bounces;
    BOOL _vertical;
    BOOL _hasDataChanged;
    BOOL _hasFrameChanged;
    BOOL _hasLayoutChanged;
    BOOL _needReLayout;
    BOOL _needResetCurIndex;
    BOOL _disappeared;
    BOOL _enableBounces;
    unsigned long long _layoutType;
    double _itemSpacing;
    double _itemHeight;
    double _itemWidth;
    double _startMargin;
    double _endMargin;
    double _previousMargin;
    double _nextMargin;
    double _itemWidthScale;
    double _itemHeightScale;
    double _autoScrollInterval;
    double _animationDuration;
    NSString *_dotsColor;
    NSString *_activeDotsColor;
    NSString *_swiperMode;
    long long _currentIndex;
    NSString *_currentIndexId;
    long long _maxMultiItems;
    NSMutableArray *_swiperItems;
    double _bouncesBeginThreshold;
    double _bouncesEndThreshold;
    double _preContentOffsetX;
    double _lastTransitionTime;
    double _transitionThrottle;
}

@property (retain, nonatomic) NSMutableArray *swiperItems;
@property (nonatomic) BOOL hasDataChanged;
@property (nonatomic) BOOL hasFrameChanged;
@property (nonatomic) BOOL hasLayoutChanged;
@property (nonatomic) BOOL needReLayout;
@property (nonatomic) BOOL needResetCurIndex;
@property (nonatomic) BOOL disappeared;
@property (nonatomic) BOOL enableBounces;
@property (nonatomic) double bouncesBeginThreshold;
@property (nonatomic) double bouncesEndThreshold;
@property (nonatomic) double preContentOffsetX;
@property (nonatomic) double lastTransitionTime;
@property (nonatomic) double transitionThrottle;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemHeight;
@property (nonatomic) double itemWidth;
@property (nonatomic) double startMargin;
@property (nonatomic) double endMargin;
@property (nonatomic) double previousMargin;
@property (nonatomic) double nextMargin;
@property (nonatomic) double itemWidthScale;
@property (nonatomic) double itemHeightScale;
@property (nonatomic) BOOL showDots;
@property (nonatomic) BOOL isInfiniteLoop;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) BOOL hidelabel;
@property (nonatomic) BOOL isHorizonCenter;
@property (nonatomic) BOOL isVerticalCenter;
@property (nonatomic) BOOL isCircle;
@property (nonatomic) BOOL isTouchable;
@property (nonatomic) BOOL smoothScroll;
@property (nonatomic) BOOL bounces;
@property (nonatomic) BOOL vertical;
@property (nonatomic) double autoScrollInterval;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) NSString *dotsColor;
@property (retain, nonatomic) NSString *activeDotsColor;
@property (retain, nonatomic) NSString *swiperMode;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSString *currentIndexId;
@property (nonatomic) long long maxMultiItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__6981;
+ (id)__lynx_prop_config__7042;
+ (id)__lynx_prop_config__7103;
+ (id)__lynx_prop_config__7164;
+ (id)__lynx_prop_config__7225;
+ (id)__lynx_prop_config__7816;
+ (id)__lynx_prop_config__7857;
+ (id)__lynx_prop_config__7938;
+ (id)__lynx_prop_config__8019;
+ (id)__lynx_prop_config__80910;
+ (id)__lynx_prop_config__81711;
+ (id)__lynx_prop_config__82312;
+ (id)__lynx_prop_config__82913;
+ (id)__lynx_prop_config__84114;
+ (id)__lynx_prop_config__84815;
+ (id)__lynx_prop_config__85616;
+ (id)__lynx_prop_config__86417;
+ (id)__lynx_prop_config__87218;
+ (id)__lynx_prop_config__88019;
+ (id)__lynx_prop_config__88720;
+ (id)__lynx_prop_config__89921;
+ (id)__lynx_prop_config__91222;
+ (id)__lynx_prop_config__92423;
+ (id)__lynx_prop_config__93024;
+ (id)__lynx_prop_config__93625;
+ (id)__lynx_prop_config__94426;
+ (id)__lynx_prop_config__94829;
+ (id)__lynx_prop_config__95532;
+ (id)__lynx_prop_config__96333;
+ (id)__lynx_prop_config__97134;
+ (id)__lynx_prop_config__97935;
+ (id)__lynx_prop_config__98736;
+ (id)__lynx_prop_config__100237;
+ (id)__lynx_prop_config__101238;
+ (id)__lynx_prop_config__101739;
+ (id)__lynx_prop_config__102340;
+ (id)__lynx_ui_method_config__103141;
+ (id)__lynx_props_group_config__115242;

- (void)propsDidUpdate;
- (void)layoutDidFinished;
- (void)onListCellPrepareForReuse:(id)arg0 withList:(id)arg1;
- (void)removeChild:(id)arg0 atIndex:(long long)arg1;
- (void)onListCellAppear:(id)arg0 withList:(id)arg1;
- (void)onListCellDisappear:(id)arg0 exist:(BOOL)arg1 withList:(id)arg2;
- (BOOL)isScrollContainer;
- (void)setStartMargin:(double)arg0;
- (double)startMargin;
- (void)setIsCircle:(BOOL)arg0;
- (void)setDisappeared:(BOOL)arg0;
- (void)animationDuration:(id)arg0 requestReset:(BOOL)arg1;
- (void)scrollTo:(id)arg0 withResult:(id /* block */)arg1;
- (BOOL)hasDataChanged;
- (void)setHasDataChanged:(BOOL)arg0;
- (BOOL)isInfiniteLoop;
- (double)endMargin;
- (double)previousMargin;
- (void)setPreviousMargin:(double)arg0;
- (double)nextMargin;
- (void)setNextMargin:(double)arg0;
- (void)setEndMargin:(double)arg0;
- (void)setIsInfiniteLoop:(BOOL)arg0;
- (BOOL)smoothScroll;
- (void)setSmoothScroll:(BOOL)arg0;
- (void)setIsHorizonCenter:(BOOL)arg0;
- (void)setItemWidthScale:(double)arg0;
- (void)setItemHeightScale:(double)arg0;
- (BOOL)isDirectionRTL;
- (void)didTransition:(id)arg0;
- (void)didChange:(id)arg0;
- (void)didScrollStart:(id)arg0;
- (void)didScrollEnd:(id)arg0;
- (void)setShowDots:(BOOL)arg0;
- (void)setHidelabel:(BOOL)arg0;
- (void)setActiveDotsColor:(id)arg0;
- (void)setIsTouchable:(BOOL)arg0;
- (double)itemWidthScale;
- (double)itemHeightScale;
- (BOOL)hidelabel;
- (BOOL)isHorizonCenter;
- (BOOL)isVerticalCenter;
- (void)setIsVerticalCenter:(BOOL)arg0;
- (BOOL)isTouchable;
- (id)activeDotsColor;
- (id)swiperMode;
- (void)setSwiperMode:(id)arg0;
- (id)currentIndexId;
- (void)setCurrentIndexId:(id)arg0;
- (long long)maxMultiItems;
- (void)setMaxMultiItems:(long long)arg0;
- (BOOL)enableBounces;
- (void)setEnableBounces:(BOOL)arg0;
- (BOOL)hasLayoutChanged;
- (void)setHasLayoutChanged:(BOOL)arg0;
- (BOOL)needReLayout;
- (void)setNeedReLayout:(BOOL)arg0;
- (BOOL)needResetCurIndex;
- (void)setNeedResetCurIndex:(BOOL)arg0;
- (double)lastTransitionTime;
- (double)transitionThrottle;
- (void)setLastTransitionTime:(double)arg0;
- (void)checkBounces;
- (double)bouncesBeginThreshold;
- (double)preContentOffsetX;
- (double)bouncesEndThreshold;
- (void)setPreContentOffsetX:(double)arg0;
- (void)bindChangeType:(unsigned long long)arg0 requestReset:(BOOL)arg1;
- (void)showDots:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)dotsColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)activeDotsColor:(id)arg0 requestReset:(BOOL)arg1;
- (void)swiperMode:(id)arg0 requestReset:(BOOL)arg1;
- (void)setShouldIgnoreReverseInRTL:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)itemWidth:(id)arg0 requestReset:(BOOL)arg1;
- (void)itemHeight:(id)arg0 requestReset:(BOOL)arg1;
- (void)startMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)endMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)isAutoPlay:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)hidelabel:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)currentIndex:(long long)arg0 requestReset:(BOOL)arg1;
- (void)currentIndexId:(id)arg0 requestReset:(BOOL)arg1;
- (void)autoScrollInterval:(id)arg0 requestReset:(BOOL)arg1;
- (void)maxMultiItems:(id)arg0 requestReset:(BOOL)arg1;
- (void)isCircle:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)isTouchable:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)pageMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)previousMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)nextMargin:(id)arg0 requestReset:(BOOL)arg1;
- (void)smoothScroll:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bounces:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)enabhleBounces:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)bouncesBeginThreshold:(id)arg0 requestReset:(BOOL)arg1;
- (void)bouncesEndThreshold:(id)arg0 requestReset:(BOOL)arg1;
- (void)maxXScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)minXScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)maxYScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)minYScale:(id)arg0 requestReset:(BOOL)arg1;
- (void)vertical:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)normTranslationFactor:(id)arg0 requestReset:(BOOL)arg1;
- (void)markCompatible:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)markKeepItemView:(BOOL)arg0 requestReset:(BOOL)arg1;
- (void)transitionThrottle:(id)arg0 requestReset:(BOOL)arg1;
- (void)setIosEnableUserInteractionDuringFling:(BOOL)arg0 requestReset:(BOOL)arg1;
- (id)swiperItems;
- (void)setSwiperItems:(id)arg0;
- (BOOL)hasFrameChanged;
- (void)setHasFrameChanged:(BOOL)arg0;
- (void)setBouncesBeginThreshold:(double)arg0;
- (void)setBouncesEndThreshold:(double)arg0;
- (void)setTransitionThrottle:(double)arg0;
- (unsigned long long)layoutType;
- (void)setLayoutType:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)currentIndex;
- (double)animationDuration;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)setAnimationDuration:(double)arg0;
- (void)setItemWidth:(double)arg0;
- (void)setVertical:(BOOL)arg0;
- (double)itemWidth;
- (BOOL)vertical;
- (BOOL)isCircle;
- (void)setBounces:(BOOL)arg0;
- (BOOL)bounces;
- (double)itemHeight;
- (void)insertChild:(id)arg0 atIndex:(long long)arg1;
- (id)createView;
- (void)setIsAutoPlay:(BOOL)arg0;
- (BOOL)isAutoPlay;
- (BOOL)hasCustomLayout;
- (BOOL)disappeared;
- (void)frameDidChange;
- (BOOL)showDots;
- (void)setItemHeight:(double)arg0;
- (id)dotsColor;
- (void)setDotsColor:(id)arg0;
- (void)setAutoScrollInterval:(double)arg0;
- (double)autoScrollInterval;

@end
