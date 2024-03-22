//
//     Generated by private class-dump
//

@class NSString, WKWebView;

@interface BDPClientAISnapshotOperation : BDPClientAIFeatureCenterOperation <BDPClientAISnapshotOperation> {
    WKWebView *_webView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _detectRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeTask;
- (void)taskDone;
- (void)callCompletionBlocksWithError:(id)arg0 image:(id)arg1 shotDuration:(double)arg2;
- (id)initWithWebView:(id)arg0 detectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void).cxx_destruct;

@end