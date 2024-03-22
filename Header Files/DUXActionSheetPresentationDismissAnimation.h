//
//     Generated by private class-dump
//

@class NSString;

@interface DUXActionSheetPresentationDismissAnimation : NSObject <UIViewControllerAnimatedTransitioning> {
    double _duration;
    unsigned long long _sheetAlignment;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long sheetAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)sheetAlignment;
- (void)animateWithBezierPointOne:(float)arg0 pointTwo:(float)arg1 pointThree:(float)arg2 pointFour:(float)arg3 andDuration:(double)arg4 andAnimations:(id /* block */)arg5 andCompletion:(id /* block */)arg6;
- (void)setSheetAlignment:(unsigned long long)arg0;
- (id)initWithDuration:(double)arg0 withSheetAlignment:(unsigned long long)arg1;
- (double)transitionDuration:(id)arg0;
- (void)animateTransition:(id)arg0;
- (double)duration;
- (void)setDuration:(double)arg0;

@end