//
//     Generated by private class-dump
//

@class NSArray, UIImageView, NSTimer, UIScrollView, UIView, NSString;
@protocol CJPayIndicatorViewDelegate, CJPayLoopViewDelegate;

@interface CJPayLoopView : UIView <UIScrollViewDelegate> {
    int _pageNum;
    UIScrollView *_scrollView;
    id<CJPayLoopViewDelegate> _delegate;
    id<CJPayIndicatorViewDelegate> _indicatorDelegate;
    UIView *_contentView;
    NSArray *_views;
    UIImageView *_leftPosView;
    UIImageView *_rightPosView;
    NSTimer *_timer;
    NSArray *_durationArray;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *views;
@property (retain, nonatomic) UIImageView *leftPosView;
@property (retain, nonatomic) UIImageView *rightPosView;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSArray *durationArray;
@property (nonatomic) int pageNum;
@property (weak, nonatomic) id<CJPayLoopViewDelegate> delegate;
@property (weak, nonatomic) id<CJPayIndicatorViewDelegate> indicatorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAutoScroll;
- (void)startAutoScroll;
- (void)setPageNum:(int)arg0;
- (int)pageNum;
- (void)autoScroll;
- (void)setDurationArray:(id)arg0;
- (id)leftPosView;
- (id)rightPosView;
- (id)indicatorDelegate;
- (id)durationArray;
- (long long)calTureIndexBy:(long long)arg0;
- (void)correctContentOffset;
- (void)updateSubViews:(id)arg0 durations:(id)arg1 startAutoScroll:(BOOL)arg2;
- (void)setIndicatorDelegate:(id)arg0;
- (void)setLeftPosView:(id)arg0;
- (void)setRightPosView:(id)arg0;
- (id)timer;
- (void)setScrollView:(id)arg0;
- (id)views;
- (void).cxx_destruct;
- (long long)currentIndex;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)contentView;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)scrollView;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (void)setViews:(id)arg0;

@end
