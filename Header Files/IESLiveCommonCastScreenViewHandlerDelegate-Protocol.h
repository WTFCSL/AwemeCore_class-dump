//
//     Generated by private class-dump
//

@protocol IESLiveCommonCastScreenViewHandlerDelegate <NSObject>

- (struct CGSize { double x0; double x1; })castCameraSize;
- (double)castCameraRightPadding;
- (double)castCameraBottomPadding;
- (id)fetchElementViewWithElementType:(unsigned long long)arg0;
- (void)updateCommonCastScreenWithElementType:(unsigned long long)arg0 elementSize:(struct CGSize { double x0; double x1; })arg1;
- (void)showCommonCastScreenElementWithType:(unsigned long long)arg0 needShow:(BOOL)arg1;
- (void)closeCommonCastScreenElementViewWithType:(unsigned long long)arg0;
- (void)castScreenContainerDidClickStop;
- (void)castScreenDidChangeUIStatus:(long long)arg0;
- (void)castScreenReturnButtonDidClick;
- (long long)castScreenInitializeBusinessUIStatus;

@end