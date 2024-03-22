//
//     Generated by private class-dump
//

@class IESECSliceXAction, NSString, UIView;

@interface IESECSliceXShopRecommendContainerScrollView : IESECSliceXScrollElementView <UIScrollViewDelegate> {
    BOOL _scrollAnimate;
    UIView *_indicatorView;
    UIView *_indicatorContainerView;
    double _originOffset;
    double _indicatorOriginX;
    long long _currentIndex;
    double _lastTabTimestamp;
    IESECSliceXAction *_scrollToShopAction;
}

@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *indicatorContainerView;
@property (nonatomic) double originOffset;
@property (nonatomic) BOOL scrollAnimate;
@property (nonatomic) double indicatorOriginX;
@property (nonatomic) long long currentIndex;
@property (nonatomic) double lastTabTimestamp;
@property (retain, nonatomic) IESECSliceXAction *scrollToShopAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIndicatorContainerView:(id)arg0;
- (BOOL)updateWithSliceXElement:(id)arg0 error:(id *)arg1;
- (double)lastTabTimestamp;
- (void)setLastTabTimestamp:(double)arg0;
- (void)setScrollToShopAction:(id)arg0;
- (void)setScrollAnimate:(BOOL)arg0;
- (void)resetSubviewOffset;
- (void)preTabScrollToEnd;
- (double)indicatorOriginX;
- (void)setIndicatorOriginX:(double)arg0;
- (BOOL)scrollAnimate;
- (id)scrollToShopAction;
- (void)tabDidChanged;
- (void)trackTabDuration;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)indicatorContainerView;
- (id)indicatorView;
- (void)layoutSubviews;
- (void)setIndicatorView:(id)arg0;
- (double)originOffset;
- (void)setOriginOffset:(double)arg0;

@end
