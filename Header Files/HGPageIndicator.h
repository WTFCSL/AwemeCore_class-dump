//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, UIColor;

@interface HGPageIndicator : UIView <CAAnimationDelegate> {
    long long _currentPageIndex;
    NSMutableArray *_dotLayers;
    UIColor *_dotDefaultColor;
    UIColor *_dotHighlightColor;
}

@property (nonatomic) long long currentPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeFromColor:(id)arg0 toColor:(id)arg1 forDot:(id)arg2 animated:(BOOL)arg3;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setCurrentPageIndex:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (long long)currentPageIndex;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)setCurrentPageIndex:(long long)arg0 animated:(BOOL)arg1;
- (void)updatePageCount:(long long)arg0;

@end
