//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEFeedSlidingScrollViewDelegate;

@interface AWEFeedSlidingViewController : AWESlidingViewController <AWEFeedSlidingScrollViewDelegate, AWEFeedSlidingScrollViewLeftPanDelegate> {
    id<AWEFeedSlidingScrollViewDelegate> _gestureDelegate;
    id /* block */ _beginTransitionBlock;
    id /* block */ _beginDraggingBlock;
}

@property (weak, nonatomic) id<AWEFeedSlidingScrollViewDelegate> gestureDelegate;
@property (copy, nonatomic) id /* block */ beginTransitionBlock;
@property (copy, nonatomic) id /* block */ beginDraggingBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)currentSelectedIndex;
- (void)correctSelectedIndexIfNeededWithScrollView:(id)arg0;
- (Class)scrollViewClass;
- (id)currentSelectedController;
- (id /* block */)beginTransitionBlock;
- (id /* block */)beginDraggingBlock;
- (void)correctSelectLine:(id)arg0;
- (void)setBeginTransitionBlock:(id /* block */)arg0;
- (void)setBeginDraggingBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)viewDidLoad;
- (void)setContentScrollView:(id)arg0;
- (void)scrollToIndex:(long long)arg0 animated:(BOOL)arg1;
- (id)gestureDelegate;
- (void)setGestureDelegate:(id)arg0;

@end
