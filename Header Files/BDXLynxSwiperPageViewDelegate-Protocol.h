//
//     Generated by private class-dump
//

@protocol BDXLynxSwiperPageViewDelegate <NSObject>

@optional

- (void)pagerViewDidScroll:(id)arg0;
- (void)pagerView:(id)arg0 initializeTransformAttributes:(id)arg1;
- (void)pagerView:(id)arg0 applyTransformToAttributes:(id)arg1;
- (void)pagerViewWillBeginScrollingAnimation:(id)arg0;
- (void)pagerView:(id)arg0 didSelectedItemCell:(id)arg1 atIndex:(long long)arg2;
- (void)pagerViewWillBeginDragging:(id)arg0;
- (void)pagerViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)pagerViewWillBeginDecelerating:(id)arg0;
- (void)pagerViewDidEndDecelerating:(id)arg0;
- (void)pagerViewDidEndScrollingAnimation:(id)arg0;
- (void)pagerView:(id)arg0 didScrollFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)pagerView:(id)arg0 didSelectedItemCell:(id)arg1 atIndexSection:(struct { long long x0; long long x1; })arg2;
- (void)notifyScrollViewDidScroll;
- (void)pagerView:(id)arg0 didStartScrollFromIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg0 fromIndex:(long long)arg1;
- (void)pagerView:(id)arg0 didEndScrollToIndex:(long long)arg1;

@end