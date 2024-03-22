//
//     Generated by private class-dump
//

@class UIView, NSArray, NSTimer, NSString, UIScrollView, DUXCarouselIndicator, NSMutableArray;

@interface AWENearbyImgAutoScrollView : UIView <UIScrollViewDelegate> {
    BOOL _enablePlay;
    BOOL _playScrollerToPrev;
    BOOL _resetScrollAction;
    BOOL _initOffset;
    double _playInterval;
    UIScrollView *_scrollView;
    DUXCarouselIndicator *_carouselIndicator;
    NSArray *_originViewsModel;
    NSMutableArray *_cycleImageViews;
    double _beginOffset;
    UIView *_containerView;
    long long _currIndex;
    NSTimer *_scrollTimer;
}

@property (retain, nonatomic) DUXCarouselIndicator *carouselIndicator;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) NSArray *originViewsModel;
@property (retain, nonatomic) NSMutableArray *cycleImageViews;
@property (nonatomic) double beginOffset;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) long long currIndex;
@property (nonatomic) BOOL resetScrollAction;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (nonatomic) BOOL initOffset;
@property (nonatomic) BOOL enablePlay;
@property (nonatomic) BOOL playScrollerToPrev;
@property (nonatomic) double playInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setScrollTimer:(id)arg0;
- (id)scrollTimer;
- (id)carouselIndicator;
- (void)setCarouselIndicator:(id)arg0;
- (void)setCurrIndex:(long long)arg0;
- (long long)currIndex;
- (void)startRowAnimation;
- (void)stopRowAnimation;
- (void)setOriginViewsModel:(id)arg0;
- (void)setUpUIWithContentSize:(struct CGSize { double x0; double x1; })arg0;
- (id)originViewsModel;
- (void)setEnablePlay:(BOOL)arg0;
- (void)reloadViewsWithSize:(struct CGSize { double x0; double x1; })arg0;
- (id)createUIImgViewsWithModel:(id)arg0;
- (id)cycleImageViews;
- (BOOL)initOffset;
- (void)setInitOffset:(BOOL)arg0;
- (BOOL)enablePlay;
- (double)playInterval;
- (BOOL)playScrollerToPrev;
- (BOOL)resetScrollAction;
- (void)setResetScrollAction:(BOOL)arg0;
- (double)getModWithRight:(BOOL)arg0 NumA:(double)arg1 NumB:(double)arg2;
- (long long)getValidCurrIndexByOffset;
- (long long)getValidIndexNum:(long long)arg0;
- (void)configUIImageViewsModels:(id)arg0 contentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)resetRowAnimation;
- (void)setPlayScrollerToPrev:(BOOL)arg0;
- (void)setPlayInterval:(double)arg0;
- (void)setCycleImageViews:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)containerView;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (id)scrollView;
- (double)beginOffset;
- (void)setBeginOffset:(double)arg0;

@end