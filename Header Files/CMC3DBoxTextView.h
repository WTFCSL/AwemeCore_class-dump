//
//     Generated by private class-dump
//

@class NSTimer, UILabel, NSString;

@interface CMC3DBoxTextView : UIView <CAAnimationDelegate> {
    long long _value;
    long long _scrollTimes;
    id /* block */ _didScrollBlock;
    NSTimer *_scrollTimer;
    UILabel *_upLabel;
    UILabel *_downLabel;
}

@property (nonatomic) long long value;
@property (nonatomic) long long scrollTimes;
@property (copy, nonatomic) id /* block */ didScrollBlock;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (retain, nonatomic) UILabel *upLabel;
@property (retain, nonatomic) UILabel *downLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)didScrollBlock;
- (void)setDidScrollBlock:(id /* block */)arg0;
- (id)createValueLabel;
- (void)setUpLabel:(id)arg0;
- (id)upLabel;
- (void)setDownLabel:(id)arg0;
- (id)downLabel;
- (void)setScrollTimes:(long long)arg0;
- (void)animate3DScroll;
- (void)setScrollTimer:(id)arg0;
- (id)scrollTimer;
- (long long)scrollTimes;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })downLabelTransform;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })upLabelTransform;
- (void)updateWithValue:(long long)arg0 scrollTimes:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
- (long long)value;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)reset;
- (void)setValue:(long long)arg0;
- (void)updateText;
- (id)showText;

@end
