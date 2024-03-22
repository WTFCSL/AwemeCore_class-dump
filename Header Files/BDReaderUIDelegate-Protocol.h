//
//     Generated by private class-dump
//

@protocol BDReaderUIDelegate <NSObject>

@optional

- (void)didTapPageView:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (BOOL)shouldStartAutoRead:(id)arg0;
- (void)didFinishAutoRead:(id)arg0;
- (void)didChangePage:(id)arg0 fromPage:(id)arg1 toPage:(id)arg2;
- (void)didUpdateReaderBookInfo:(id)arg0;
- (void)willBeginPageTransition:(id)arg0;
- (void)pageVCWillBeginDraging:(id)arg0 isForward:(BOOL)arg1;
- (void)pageVCWillBeginGesture:(id)arg0;
- (BOOL)shouldBeginPageTransition:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1 translation:(struct CGPoint { double x0; double x1; })arg2;
- (BOOL)shouldTapPageView:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (BOOL)shouldPaging:(id)arg0 isForward:(BOOL)arg1 pageContext:(id)arg2;
- (BOOL)shouldDragContent:(id)arg0 pageContext:(id)arg1;
- (void)didClickSelectionText:(id)arg0 attachment:(id)arg1 pageContext:(id)arg2 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3 targetView:(id)arg4;
- (void)didJumpToOpenParams:(id)arg0 openParams:(id)arg1;
- (void)uiDidChangeFootnoteBubbleState:(id)arg0 toShow:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)transitionToSize:(id)arg0 toSize:(struct CGSize { double x0; double x1; })arg1 transitionBlock:(id /* block */)arg2;
- (BOOL)shouldBeginDragContent:(id)arg0 pageContext:(id)arg1;

@end
