//
//     Generated by private class-dump
//

@protocol IESECStoreMonitorControllerProtocol <NSObject>

@property (readonly, nonatomic) double metricStart;

- (void)contentViewDidEndDisplay:(BOOL)arg0 reportInfo:(struct { unsigned long long x0; double x1; double x2; double x3; double x4; })arg1;
- (void)contentViewDidRenderFinish:(BOOL)arg0 perfInfo:(id)arg1;
- (void)storeContainerDidClose;
- (double)metricStart;

@end