//
//     Generated by private class-dump
//

@protocol ILCRTCVideoSinkProtocol <NSObject>

@property (copy, nonatomic) id /* block */ videoBufferCallBack;

- (void)pushVideoBuffer:(struct __CVBuffer { } *)arg0 timeInfo:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 extraData:(id)arg2;
- (void)setVideoBufferCallBack:(id /* block */)arg0;
- (id /* block */)videoBufferCallBack;

@end