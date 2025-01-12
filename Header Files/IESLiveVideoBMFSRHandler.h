//
//     Generated by private class-dump
//

@class NSString, BmfSuperResolution;

@interface IESLiveVideoBMFSRHandler : NSObject <IESLiveVideoSRHandlerAction> {
    int _scaleMode;
    BmfSuperResolution *_processor;
    NSString *_filePath;
}

@property (retain, nonatomic) BmfSuperResolution *processor;
@property (nonatomic) int scaleMode;
@property (retain, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSRScaleMode:(long long)arg0;
- (BOOL)setupTextureWithEncoder:(id)arg0 buffer:(struct __CVBuffer { } *)arg1 view:(id)arg2 tex_y:(id *)arg3 tex_uv:(id *)arg4 outPixelBufWidth:(unsigned long long *)arg5 outPixelBufHeight:(unsigned long long *)arg6 error:(id *)arg7;
- (id)init;
- (id)filePath;
- (void).cxx_destruct;
- (void)setFilePath:(id)arg0;
- (void)setup;
- (id)processor;
- (void)setScaleMode:(int)arg0;
- (int)scaleMode;
- (void)setProcessor:(id)arg0;

@end
