//
//     Generated by private class-dump
//

@class VEMVPRenderer, NSString, HTSGLFramebuffer, HTSGLContext;

@interface VEScreenshotCompleteUnit : NSObject <VEProcessSampleDelegate> {
    NSString *_route;
    HTSGLFramebuffer *_hdr2sdrFramebuffer;
    VEMVPRenderer *_textureMvpRenderer;
    HTSGLContext *_htsGLContext;
}

@property (retain, nonatomic) HTSGLFramebuffer *hdr2sdrFramebuffer;
@property (retain, nonatomic) VEMVPRenderer *textureMvpRenderer;
@property (retain, nonatomic) HTSGLContext *htsGLContext;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)textureMvpRenderer;
- (void)setTextureMvpRenderer:(id)arg0;
- (void)setHtsGLContext:(id)arg0;
- (id)htsGLContext;
- (BOOL)processSampleData:(id)arg0;
- (id)transHDR2SDRProcess:(id)arg0;
- (id)hdr2sdrFramebuffer;
- (void)setHdr2sdrFramebuffer:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (id)route;
- (void)setRoute:(id)arg0;

@end