//
//     Generated by private class-dump
//

@class NSString;

@interface APOutputView : UIView <AVViewBackgroundProtocol> {
    struct Mutex { struct { char opaque[64]; } mutex; } mMutex;
    struct __CVBuffer { } *_bufferRef;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFrame:(struct __CVBuffer { } *)arg0;
- (struct __CVBuffer { } *)getFrame;
- (int)startWithRender:(void *)arg0;
- (void)avViewDidEnterBackground:(BOOL)arg0;
- (void)avViewDidBecomeActive;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (id).cxx_construct;

@end
