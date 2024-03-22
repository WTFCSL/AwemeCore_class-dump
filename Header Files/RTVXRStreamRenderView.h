//
//     Generated by private class-dump
//

@class ByteRTCRemoteStreamKey, ByteRTCVideoFrameInfo, NSString, AVSampleBufferDisplayLayer;
@protocol RTVXRStreamRenderViewDelegate, RxInjector;

@interface RTVXRStreamRenderView : UIView <ByteRTCVideoSinkDelegate> {
    id<RTVXRStreamRenderViewDelegate> _delegate;
    NSString *_roomID;
    NSString *_uid;
    ByteRTCRemoteStreamKey *_remoteStreamKey;
    id<RxInjector> _injector;
    ByteRTCVideoFrameInfo *_firstRemoteVideoFrameInfo;
    long long _videoRotation;
    AVSampleBufferDisplayLayer *_sampleBufferDisplayLayer;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) ByteRTCRemoteStreamKey *remoteStreamKey;
@property (retain, nonatomic) ByteRTCVideoFrameInfo *firstRemoteVideoFrameInfo;
@property (nonatomic) long long videoRotation;
@property (retain, nonatomic) AVSampleBufferDisplayLayer *sampleBufferDisplayLayer;
@property (weak, nonatomic) id<RTVXRStreamRenderViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupForView:(id)arg0 roomID:(id)arg1 uid:(id)arg2;
+ (void)hiddenIfNeedWithView:(id)arg0;

- (void)onFrame:(id)arg0;
- (void)renderPixelBuffer:(struct __CVBuffer { } *)arg0 rotation:(long long)arg1 contentType:(long long)arg2 extendedData:(id)arg3;
- (int)getRenderElapse;
- (long long)videoRotation;
- (void)setVideoRotation:(long long)arg0;
- (void)setSampleBufferDisplayLayer:(id)arg0;
- (void)onFirstRemoteVideoFrameDecodedWithFrameInfo:(id)arg0;
- (id)remoteStreamKey;
- (void)__refreshSampleLayerLayout;
- (id)initWithRoomID:(id)arg0 uid:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)__prepareForReuseWithRoomID:(id)arg0 userID:(id)arg1;
- (void)setFirstRemoteVideoFrameInfo:(id)arg0;
- (id)firstRemoteVideoFrameInfo;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })__videoRenderLayerFrame;
- (double)__videoRenderLayerRotationAngle;
- (void)__displayPixelBuffer:(struct __CVBuffer { } *)arg0;
- (struct opaqueCMSampleBuffer { } *)__createSampleBufferWithPixelBuffer:(struct __CVBuffer { } *)arg0;
- (void)__didRenderPixelBuffer;
- (id)createByteRTCRemoteStreamKey;
- (void)setRemoteStreamKey:(id)arg0;
- (id)uid;
- (id)sampleBufferDisplayLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)injector;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (id)roomID;

@end
