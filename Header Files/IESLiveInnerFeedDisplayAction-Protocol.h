//
//     Generated by private class-dump
//

@protocol IESLiveInnerFeedDisplayAction <NSObject>

@optional

- (void)innerFeedWillAppear;
- (void)innerFeedDidAppear;
- (void)innerFeedWillDisappear;
- (void)innerFeedDidDisappear;
- (void)innerFeedWillDisplayObject:(id)arg0 atIndex:(long long)arg1;
- (void)innerFeedDidEndDisplayObject:(id)arg0 atIndex:(long long)arg1;
- (void)innerFeedWillBeginDragging:(id)arg0;
- (void)innerFeedDidEndDecelerating:(id)arg0;
- (void)innerFeedDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)innerFeedWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;

@end
