//
//     Generated by private class-dump
//

@protocol HTSLiveToolbarActions <NSObject>

@optional

- (void)onToolbar:(id)arg0 sizeChanged:(struct CGSize { double x0; double x1; })arg1;
- (void)onExpandGroupShow:(BOOL)arg0;
- (void)onExpandGroupShowWithDuration:(double)arg0 toolBarHeight:(double)arg1;
- (void)hideToolBarWithDuration:(double)arg0;
- (void)showBottomToolbarIfNeed;
- (void)toolbarItemsChange;

@end
