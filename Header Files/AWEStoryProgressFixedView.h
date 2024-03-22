//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEStoryProgressContainerConfig, NSMutableArray, UIView;
@protocol AWEStoryProgressFixedViewDelegate;

@interface AWEStoryProgressFixedView : UIView <UIGestureRecognizerDelegate> {
    NSArray *_p_accessibilityElements;
    id<AWEStoryProgressFixedViewDelegate> _delegate;
    unsigned long long _currentProgressIndex;
    UIView *_backgroundView;
    NSMutableArray *_progressArr;
    long long _progressTotalCount;
    AWEStoryProgressContainerConfig *_config;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableArray *progressArr;
@property (nonatomic) long long progressTotalCount;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (retain, nonatomic) AWEStoryProgressContainerConfig *config;
@property (weak, nonatomic) id<AWEStoryProgressFixedViewDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentProgressViewFrame;
@property (readonly, nonatomic) double currentProgressPercentage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentProgressViewProgressSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentProgressPercentage;
- (id)initWithCurrentIndex:(long long)arg0 totalCount:(long long)arg1 config:(id)arg2;
- (void)updateProgressWithDuration:(double)arg0 totalCount:(long long)arg1 currentIndex:(long long)arg2 currentProcess:(double)arg3 needAnimation:(BOOL)arg4;
- (void)updateProgressWithDuration:(double)arg0 currentIndex:(long long)arg1 currentProcess:(double)arg2 needAnimation:(BOOL)arg3;
- (void)setCurrentProgressIndex:(unsigned long long)arg0;
- (unsigned long long)currentProgressIndex;
- (void)tapProgressView:(id)arg0;
- (id)createProgressView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentProgressViewFrame;
- (struct CGSize { double x0; double x1; })currentProgressViewProgressSize;
- (void)layoutProViews;
- (long long)progressTotalCount;
- (void)setProgressTotalCount:(long long)arg0;
- (id)progressArr;
- (void)setProgressArr:(id)arg0;
- (void)setConfig:(id)arg0;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (id)accessibilityElements;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (long long)totalCount;
- (BOOL)isAccessibilityElement;
- (void)setBackgroundView:(id)arg0;
- (void)setAccessibilityElements:(id)arg0;
- (id)currentProgress;
- (BOOL)shouldGroupAccessibilityChildren;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg0;
- (long long)indexOfAccessibilityElement:(id)arg0;

@end
