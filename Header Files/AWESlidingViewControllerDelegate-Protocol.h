//
//     Generated by private class-dump
//

@protocol AWESlidingViewControllerDelegate <NSObject>

- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;

@optional

- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1 transitionType:(long long)arg2;
- (void)slidingViewController:(id)arg0 willTransitionToViewController:(id)arg1;
- (void)slidingViewController:(id)arg0 willTransitionToViewController:(id)arg1 transitionType:(long long)arg2;
- (void)slidingViewController:(id)arg0 didFinishTransitionToIndex:(unsigned long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousViewController:(id)arg1 currentViewController:(id)arg2;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousIndex:(long long)arg1 currentIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)slidingViewControllerDidScroll:(id)arg0;
- (void)slidingViewControllerDidFinishScrollAnimation;
- (void)slidingViewControllerWillBeginDragging:(id)arg0;
- (void)slidingViewController:(id)arg0 willFinishTransitionFromPreviousIndex:(long long)arg1 currentIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)slidingViewControllerDidScroll:(id)arg0 isFigureDragging:(BOOL)arg1;
- (void)slidingViewControllerDidFinishScrollAnimation:(id)arg0 currentIndex:(long long)arg1;
- (void)slidingViewControllerDidEndScroll:(id)arg0;

@end
