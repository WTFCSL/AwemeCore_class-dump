//
//     Generated by private class-dump
//

@protocol BDLOCSonicLoadListener <BDLiveOpenContainerLoadListener>

- (void)app:(id)arg0 resourceLoadProgress:(double)arg1;
- (void)app:(id)arg0 resourceDidFinishLoadWithError:(id)arg1 hasCache:(BOOL)arg2;
- (void)app:(id)arg0 loadProgress:(double)arg1;
- (void)app:(id)arg0 didFinishLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)app:(id)arg0 didRenderFirstFrame:(id)arg1;
- (void)app:(id)arg0 didLoadConfig:(id)arg1;
- (void)appDidStop:(id)arg0;

@optional

- (void)app:(id)arg0 sendFrameBuffer:(struct __CVBuffer { } *)arg1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)app:(id)arg0 didReceiveException:(id)arg1;
- (void)app:(id)arg0 finishLoadContent:(id)arg1;
- (void)app:(id)arg0 subContainerDidRenderFirstFrame:(id)arg1;

@end
