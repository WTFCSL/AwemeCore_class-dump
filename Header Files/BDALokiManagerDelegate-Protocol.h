//
//     Generated by private class-dump
//

@protocol BDALokiManagerDelegate <NSObject>

@optional

- (void)lokiStartLoad:(id)arg0;
- (void)lokiComponentDowngrade:(id)arg0 errorMsg:(id)arg1;
- (void)lokiManagerDowngrade;
- (id)getLayoutComponent:(id)arg0;
- (void)lokiRenderFinishComponent:(id)arg0;
- (void)lokiShowFinish:(id)arg0;
- (void)lokiClose:(id)arg0;
- (void)lokiComponent:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)getLynxGlobalProps:(id)arg0;

@end