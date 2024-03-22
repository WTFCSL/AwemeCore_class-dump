//
//     Generated by private class-dump
//

@protocol HeliumPlatform <LoaderImpl>

- (id)loadMedia:(id)arg0;
- (void)dipatchToJSContextRunningThreadAsync:(id /* block */)arg0;
- (void)requestMedia:(const struct HeliumMediaRequest { BOOL x0; BOOL x1; unsigned int x2; } *)arg0 callback:(id /* block */)arg1;

@optional

- (void)firstFrameDidDraw;
- (id)getBDPCameraImplFactory;
- (id)getJSThreadDispatchQueue;
- (id)imageGetType:(id)arg0;
- (id)imageWithData:(id)arg0;
- (id)displayLink;

@end
