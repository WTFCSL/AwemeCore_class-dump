//
//     Generated by private class-dump
//

@protocol ACCDuetLayoutViewControllerDelegate <NSObject>

- (id)duetLayoutModels;
- (id)duetCommonTrackDic;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })duetCameraSwapButtonFrame;

@optional

- (void)duetLayoutController:(id)arg0 didSelectDuetLayoutAtIndex:(long long)arg1;
- (void)duetLayoutController:(id)arg0 didSwitchDuetLayoutAtIndex:(long long)arg1;
- (void)duetLayoutController:(id)arg0 didTapOnRetryButton:(id)arg1;
- (void)duetLayoutController:(id)arg0 didTapOnSwappedCameraButton:(id)arg1;

@end
