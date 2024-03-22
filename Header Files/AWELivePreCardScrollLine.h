//
//     Generated by private class-dump
//

@class NSString;

@interface AWELivePreCardScrollLine : UIView <CAAnimationDelegate> {
    long long _count;
    long long _maxNumber;
}

@property (nonatomic) long long count;
@property (nonatomic) long long maxNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshWith:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 numCount:(long long)arg1 maxNumber:(long long)arg2;
- (void)reloadLabel;
- (void)setCount:(long long)arg0;
- (long long)count;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setupUI;
- (long long)maxNumber;
- (void)setMaxNumber:(long long)arg0;

@end