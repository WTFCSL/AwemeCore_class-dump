//
//     Generated by private class-dump
//

@protocol BDPXScreenSizeChangeMessage <NSObject>

@optional

- (void)XScreenWindowResizeWithController:(id)arg0 translateToValue:(double)arg1 contentHeight:(double)arg2 contentHeightRate:(double)arg3 adjustContent:(BOOL)arg4;
- (void)XScreenWindowSizeModeChangeWithController:(id)arg0 mode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)XScreenWindowWillCloseWithController:(id)arg0;
- (void)AppPageResizeWithController:(id)arg0 params:(id)arg1;

@end