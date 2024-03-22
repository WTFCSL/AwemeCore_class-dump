//
//     Generated by private class-dump
//

@class NSArray, UIColor, UIImage;

@interface BDXLynxSwiperSlideControl : UIControl {
    BOOL _hidesForSinglePage;
    BOOL _isRTL;
    BOOL _forceUpdate;
    long long _numberOfPages;
    long long _currentPage;
    double _pageIndicatorSpaing;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    UIImage *_pageIndicatorImage;
    UIImage *_currentPageIndicatorImage;
    long long _indicatorImageContentMode;
    double _animateDuring;
    NSArray *_indicatorViews;
    struct CGSize { double width; double height; } _pageIndicatorSize;
    struct CGSize { double width; double height; } _currentPageIndicatorSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
}

@property (retain, nonatomic) NSArray *indicatorViews;
@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (nonatomic) double pageIndicatorSpaing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;
@property (retain, nonatomic) UIImage *pageIndicatorImage;
@property (retain, nonatomic) UIImage *currentPageIndicatorImage;
@property (nonatomic) long long indicatorImageContentMode;
@property (nonatomic) struct CGSize { double width; double height; } pageIndicatorSize;
@property (nonatomic) struct CGSize { double width; double height; } currentPageIndicatorSize;
@property (nonatomic) double animateDuring;
@property (nonatomic) BOOL isRTL;

- (struct CGSize { double x0; double x1; })pageIndicatorSize;
- (double)pageIndicatorSpaing;
- (struct CGSize { double x0; double x1; })currentPageIndicatorSize;
- (void)setPageIndicatorSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setPageIndicatorSpaing:(double)arg0;
- (void)setCurrentPageIndicatorSize:(struct CGSize { double x0; double x1; })arg0;
- (void)configurePropertys;
- (void)updateIndicatorViews;
- (void)updateIndicatorViewsBehavior;
- (void)layoutIndicatorViews;
- (void)setCurrentPage:(long long)arg0 animate:(BOOL)arg1;
- (void)setPageIndicatorImage:(id)arg0;
- (void)setCurrentPageIndicatorImage:(id)arg0;
- (id)pageIndicatorImage;
- (id)currentPageIndicatorImage;
- (long long)indicatorImageContentMode;
- (void)setIndicatorImageContentMode:(long long)arg0;
- (double)animateDuring;
- (void)setAnimateDuring:(double)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setContentVerticalAlignment:(long long)arg0;
- (void).cxx_destruct;
- (void)setCurrentPage:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (BOOL)forceUpdate;
- (void)setContentHorizontalAlignment:(long long)arg0;
- (id)initWithCoder:(id)arg0;
- (long long)numberOfPages;
- (long long)currentPage;
- (void)layoutSubviews;
- (BOOL)isRTL;
- (void)setNumberOfPages:(long long)arg0;
- (BOOL)hidesForSinglePage;
- (void)setHidesForSinglePage:(BOOL)arg0;
- (void)setPageIndicatorTintColor:(id)arg0;
- (void)setCurrentPageIndicatorTintColor:(id)arg0;
- (id)pageIndicatorTintColor;
- (id)currentPageIndicatorTintColor;
- (void)setIsRTL:(BOOL)arg0;
- (id)indicatorViews;
- (void)setIndicatorViews:(id)arg0;
- (void)setForceUpdate:(BOOL)arg0;

@end
