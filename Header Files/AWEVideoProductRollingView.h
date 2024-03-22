//
//     Generated by private class-dump
//

@class NSTimer, NSArray, AWEVideoProductRollingLabelView;

@interface AWEVideoProductRollingView : UIView {
    NSArray *_dataArray;
    id /* block */ _block;
    double _showTime;
    double _animationTime;
    long long _indexNow;
    NSTimer *_timer;
    AWEVideoProductRollingLabelView *_currentView;
    AWEVideoProductRollingLabelView *_nextView;
    AWEVideoProductRollingLabelView *_tmpCurrentView;
    AWEVideoProductRollingLabelView *_tmpNextView;
    long long _direction;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _topRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _middleRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _btmRect;
}

@property (nonatomic) double showTime;
@property (nonatomic) double animationTime;
@property (nonatomic) long long indexNow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } middleRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } btmRect;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *currentView;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *nextView;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *tmpCurrentView;
@property (retain, nonatomic) AWEVideoProductRollingLabelView *tmpNextView;
@property (nonatomic) long long direction;
@property (retain, nonatomic) NSArray *dataArray;
@property (copy, nonatomic) id /* block */ block;

- (double)showTime;
- (void)setShowTime:(double)arg0;
- (void)setupSubViews;
- (id)nextView;
- (void)setNextView:(id)arg0;
- (void)executeAnimation;
- (void)btnClick;
- (void)setViewInfo;
- (void)setMiddleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTopRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBtmRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })btmRect;
- (id)tmpCurrentView;
- (id)tmpNextView;
- (id)initWithDirection:(long long)arg0 showTime:(double)arg1 animationTime:(double)arg2;
- (long long)indexNow;
- (void)setIndexNow:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })middleRect;
- (void)setTmpCurrentView:(id)arg0;
- (void)setTmpNextView:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)pauseAnimation;
- (long long)direction;
- (void)setBlock:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimer:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)resumeAnimation;
- (void)layoutSubviews;
- (void)startAnimation;
- (id /* block */)block;
- (void)setDirection:(long long)arg0;
- (void)stopAnimation;
- (id)dataArray;
- (void)setDataArray:(id)arg0;
- (double)preferredViewHeight;
- (double)animationTime;
- (void)setAnimationTime:(double)arg0;
- (id)currentView;
- (void)setCurrentView:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topRect;

@end
