//
//     Generated by private class-dump
//

@interface AWENovelPopup : BDNovelBasePopup

- (void)toast:(id)arg0 iconType:(id)arg1;
- (void)alert:(id)arg0 title:(id)arg1 message:(id)arg2 confirmText:(id)arg3 cancelText:(id)arg4 disableLandscape:(BOOL)arg5 confirmCallBack:(id /* block */)arg6 cancelCallBack:(id /* block */)arg7;
- (void)toast:(id)arg0 icon:(id)arg1;
- (void)toast:(id)arg0 inView:(id)arg1;
- (id)createLoadingToast:(id)arg0;
- (void)showWithText:(id)arg0 highlightedText:(id)arg1 highlightedLabelClickBlock:(id /* block */)arg2 withArrowIcon:(BOOL)arg3 withOffsetY:(double)arg4;

@end