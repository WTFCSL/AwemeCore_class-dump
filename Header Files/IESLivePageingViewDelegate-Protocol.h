//
//     Generated by private class-dump
//

@protocol IESLivePageingViewDelegate <NSObject>

@optional

- (BOOL)pagingView:(id)arg0 showDelayScrollInView:(id)arg1;
- (long long)pagingView:(id)arg0 initedIndexWithIndex:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pagingView:(id)arg0 edgeInsetsForIndex:(long long)arg1;
- (void)pagingView:(id)arg0 didPageToIndex:(long long)arg1 isScrolled:(BOOL)arg2;
- (void)pagingView:(id)arg0 visiblePage:(id)arg1 index:(unsigned long long)arg2 offsetDidChange:(double)arg3;
- (void)pagingViewDidEndScroll:(id)arg0;
- (void)pagingViewDidEndDecelerating:(id)arg0 dragEndPosition:(struct CGPoint { double x0; double x1; })arg1;

@end