//
//     Generated by private class-dump
//

@interface BDCRBouncePagerViewController : BDCRBouncePageViewController {
    unsigned long long _scrollDir;
}

@property (nonatomic) BOOL pagingEnabled;
@property (nonatomic) unsigned long long scrollDir;

- (unsigned long long)scrollDir;
- (void)setScrollDir:(unsigned long long)arg0;
- (void)resetPaging;
- (void)scrollPageRatio:(float)arg0 animated:(BOOL)arg1;
- (BOOL)shouldBeginGestureForTranslation:(struct CGPoint { double x0; double x1; })arg0;
- (id)getCollectionPageVC;
- (BOOL)shouldScrollToPreviousWithVelocity:(struct CGPoint { double x0; double x1; })arg0;
- (BOOL)shouldScrollToNextWithVelocity:(struct CGPoint { double x0; double x1; })arg0;
- (void)onPanChanged:(struct CGPoint { double x0; double x1; })arg0;
- (void)resetCurrentPageWithCmp:(id /* block */)arg0;
- (void)scrollToNextAnimation:(id)arg0 prevc:(id)arg1 completion:(id /* block */)arg2;
- (void)scrollToPreviousAnimation:(id)arg0 prevc:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)pagingEnabled;
- (void)viewDidLoad;
- (void)setPagingEnabled:(BOOL)arg0;

@end