//
//     Generated by private class-dump
//

@protocol AWEProfileHeaderContentViewControllerProtocol <NSObject>

- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)refreshAlphaForHeaderView:(double)arg0;
- (void)refreshHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)heightOfListView;
- (void)scrollViewBeginDraging;
- (void)configWithContext:(id)arg0 user:(id)arg1 useCache:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfBGCorner;
- (id)avatarAnimationView;
- (id)avatarContentView;

@optional

- (void)onWillUpdateLayoutAnimate;
- (void)onCompleteUpdateLayoutAnimate;

@end