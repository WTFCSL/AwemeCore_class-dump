//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol AWEDiamondLayoutStrategyProtocol;

@interface AWEDiamondContainerElement : AWEDiamondGroupElement <UIScrollViewDelegate> {
    BOOL _isAdaptive;
    UIView *_contentView;
    id<AWEDiamondLayoutStrategyProtocol> _containerLayoutStrategy;
    UIView *_sliderView;
    UIView *_slideBackView;
}

@property (retain, nonatomic) UIView *sliderView;
@property (retain, nonatomic) UIView *slideBackView;
@property (nonatomic) BOOL isAdaptive;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) id<AWEDiamondLayoutStrategyProtocol> containerLayoutStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementType;

- (double)originWidth;
- (double)originHeight;
- (void)elementDidAppear;
- (void)loadViewWithCache:(id)arg0 delegate:(id)arg1;
- (void)renderElement;
- (void)elementWillDisappear;
- (BOOL)hasStructDiffWithNewElement:(id)arg0;
- (void)updateWithNewElement:(id)arg0;
- (void)setContainerLayoutStrategy:(id)arg0;
- (id)containerLayoutStrategy;
- (id)slideBackView;
- (void)setSlideBackView:(id)arg0;
- (void)setIsAdaptive:(BOOL)arg0;
- (id)sliderView;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (void)setSliderView:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)layout;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)loadView;
- (BOOL)isAdaptive;
- (void)setContentView:(id)arg0;
- (id)visibleElements;

@end
