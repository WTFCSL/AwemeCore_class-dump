//
//     Generated by private class-dump
//

@class LiveCoreRenderFilter, NSString, LSGLContext, UIImage, CAEAGLLayer, LSGLFramebuffer, LSGLProgram;
@protocol LSGLPreviewViewDelegate;

@interface LSGLPreviewView : UIView <LSGLInput> {
    unsigned long long inputRotation;
    CAEAGLLayer *_eaglLayer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewBound;
    LSGLFramebuffer *inputFramebufferForDisplay;
    unsigned int displayFramebuffer;
    unsigned int displayRenderbuffer;
    LSGLProgram *displayProgram;
    int displayPositionAttribute;
    int displayTextureCoordinateAttribute;
    int displayInputTextureUniform;
    struct CGSize { double width; double height; } inputImageSize;
    struct CGSize { double width; double height; } _cropInputImageSize;
    float imageVertices[8];
    float backgroundColorRed;
    float backgroundColorGreen;
    float backgroundColorBlue;
    float backgroundColorAlpha;
    struct CGSize { double width; double height; } boundsSizeAtFrameBufferEpoch;
    BOOL _frameRenderCallbackFlag;
    BOOL _layoutCallbackFlag;
    BOOL _updateTextureRect;
    float _textureCoord[8];
    float _cropImageVertices[8];
    BOOL _updateLandscapeRect;
    float _landscapeTextureCoord[8];
    float _landscapeImageVertices[8];
    BOOL _needRender;
    long long _next_frame_timestamp;
    long long _display_frame_interval;
    float _bgCropImageVertices[8];
    BOOL _enabled;
    BOOL _first_frame_rendered;
    BOOL _enableCustomMode;
    int _subFrameIndex;
    unsigned long long _fillMode;
    LSGLContext *_context;
    id<LSGLPreviewViewDelegate> _delegate;
    unsigned long long _aspectRatio;
    LiveCoreRenderFilter *_filter;
    NSString *_render_name;
    UIImage *_bgImage;
    struct __CVBuffer { } *_bgImageTexRef;
    struct CGSize { double width; double height; } _sizeInPixels;
    struct CGSize { double width; double height; } _offsetScale;
    struct CGSize { double width; double height; } _bgImageSize;
}

@property (retain, nonatomic) CAEAGLLayer *eaglLayer;
@property (retain, nonatomic) LSGLProgram *displayProgram;
@property (retain, nonatomic) LSGLFramebuffer *inputFramebufferForDisplay;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewBound;
@property (nonatomic) BOOL needRender;
@property (nonatomic) unsigned int displayFramebuffer;
@property (nonatomic) unsigned int displayRenderbuffer;
@property (nonatomic) int displayPositionAttribute;
@property (nonatomic) int displayTextureCoordinateAttribute;
@property (nonatomic) int displayInputTextureUniform;
@property (nonatomic) float backgroundColorRed;
@property (nonatomic) float backgroundColorGreen;
@property (nonatomic) float backgroundColorBlue;
@property (nonatomic) float backgroundColorAlpha;
@property (nonatomic) BOOL frameRenderCallbackFlag;
@property (nonatomic) BOOL updateTextureRect;
@property (nonatomic) struct CGSize { double width; double height; } sizeInPixels;
@property (nonatomic) unsigned long long aspectRatio;
@property (retain, nonatomic) CAEAGLLayer *eaglLayer;
@property (retain, nonatomic) LSGLProgram *displayProgram;
@property (retain, nonatomic) LSGLFramebuffer *inputFramebufferForDisplay;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewBound;
@property (nonatomic) BOOL needRender;
@property (nonatomic) BOOL updateTextureRect;
@property (nonatomic) BOOL frameRenderCallbackFlag;
@property (nonatomic) unsigned int displayFramebuffer;
@property (nonatomic) unsigned int displayRenderbuffer;
@property (nonatomic) int displayPositionAttribute;
@property (nonatomic) int displayTextureCoordinateAttribute;
@property (nonatomic) int displayInputTextureUniform;
@property (nonatomic) float backgroundColorRed;
@property (nonatomic) float backgroundColorGreen;
@property (nonatomic) float backgroundColorBlue;
@property (nonatomic) float backgroundColorAlpha;
@property (retain, nonatomic) LiveCoreRenderFilter *filter;
@property (copy, nonatomic) NSString *render_name;
@property (retain, nonatomic) UIImage *bgImage;
@property (nonatomic) struct CGSize { double width; double height; } bgImageSize;
@property (nonatomic) struct __CVBuffer { } *bgImageTexRef;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) struct CGSize { double width; double height; } offsetScale;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL first_frame_rendered;
@property (retain, nonatomic) LSGLContext *context;
@property (weak, nonatomic) id<LSGLPreviewViewDelegate> delegate;
@property (nonatomic) int subFrameIndex;
@property (nonatomic) BOOL enableCustomMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg0;
+ (Class)layerClass;

- (void)setInputRotation:(unsigned long long)arg0 atIndex:(long long)arg1;
- (void)setInputFramebuffer:(id)arg0 atIndex:(long long)arg1;
- (void)needRender:(BOOL)arg0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })arg0 atIndex:(long long)arg1;
- (void)endProcessing;
- (long long)nextAvailableTextureIndex;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (void)setOffsetScale:(struct CGSize { double x0; double x1; })arg0;
- (void)setViewBound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEaglLayer:(id)arg0;
- (id)eaglLayer;
- (void)setNeedRender:(BOOL)arg0;
- (void)setClearColorWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (void)setDisplayProgram:(id)arg0;
- (void)setDisplayPositionAttribute:(int)arg0;
- (void)setDisplayTextureCoordinateAttribute:(int)arg0;
- (void)setDisplayInputTextureUniform:(int)arg0;
- (void)setDisplayFramebuffer:(unsigned int)arg0;
- (void)setDisplayRenderbuffer:(unsigned int)arg0;
- (void)createDisplayFramebuffer;
- (BOOL)keepFrame:(long long)arg0;
- (id)inputFramebufferForDisplay;
- (BOOL)needRender;
- (id)displayProgram;
- (void)setDisplayFramebuffer;
- (float)backgroundColorRed;
- (float)backgroundColorGreen;
- (float)backgroundColorBlue;
- (float)backgroundColorAlpha;
- (int)displayInputTextureUniform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewBound;
- (int)displayPositionAttribute;
- (int)displayTextureCoordinateAttribute;
- (void)presentFramebuffer;
- (BOOL)frameRenderCallbackFlag;
- (void)setInputFramebufferForDisplay:(id)arg0;
- (BOOL)first_frame_rendered;
- (void)setFirst_frame_rendered:(BOOL)arg0;
- (void)commonInitWithMode:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 context:(id)arg1 mode:(unsigned long long)arg2;
- (void)destroyDisplayFramebuffer;
- (struct __CVBuffer { } *)bgImageTexRef;
- (void)setBgImageTexRef:(struct __CVBuffer { } *)arg0;
- (void)recalculateViewGeometry;
- (void)_updateCropBackGroundImageVertices;
- (struct CGSize { double x0; double x1; })calculateTexureCoord:(struct CGSize { double x0; double x1; })arg0 frameSize:(struct CGSize { double x0; double x1; })arg1;
- (struct CGSize { double x0; double x1; })offsetScale;
- (void)_updateCropImageVertices;
- (void)setBgImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)renderBackGroudImage;
- (id)render_name;
- (int)subFrameIndex;
- (void)setRender_name:(id)arg0;
- (struct __CVBuffer { } *)createCVOpenGLESTextureFromUIImage:(id)arg0;
- (struct CGSize { double x0; double x1; })bgImageSize;
- (void)updateViewVertexRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 TextureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setPreviewBgImage:(id)arg0;
- (void)setPreviewFps:(int)arg0;
- (void)displayTexture:(int)arg0 size:(struct CGSize { double x0; double x1; })arg1 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (struct __CVBuffer { } *)convertUIImageToCVPixelBuffer:(id)arg0;
- (unsigned int)CreateGLESTextureFromImage:(struct __CVBuffer { } *)arg0 andWidth:(int)arg1 andHeight:(int)arg2;
- (void)setSizeInPixels:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)updateTextureRect;
- (void)setUpdateTextureRect:(BOOL)arg0;
- (unsigned int)displayFramebuffer;
- (unsigned int)displayRenderbuffer;
- (void)setBackgroundColorRed:(float)arg0;
- (void)setBackgroundColorGreen:(float)arg0;
- (void)setBackgroundColorBlue:(float)arg0;
- (void)setBackgroundColorAlpha:(float)arg0;
- (void)setFrameRenderCallbackFlag:(BOOL)arg0;
- (void)setSubFrameIndex:(int)arg0;
- (BOOL)enableCustomMode;
- (void)setEnableCustomMode:(BOOL)arg0;
- (void)registerRenderFilter:(id)arg0 withName:(id)arg1;
- (void)renderFrame:(long long)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)updateViewTextureRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setAspectRatio:(unsigned long long)arg0;
- (void)updateConfiguration:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)setFillMode:(unsigned long long)arg0;
- (void)setFilter:(id)arg0;
- (BOOL)enabled;
- (unsigned long long)fillMode;
- (id)filter;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)aspectRatio;
- (id)delegate;
- (id)context;
- (id)initWithCoder:(id)arg0;
- (void)setEnabled:(BOOL)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)name;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 context:(id)arg1;
- (void)setBgImage:(id)arg0;
- (id)bgImage;

@end
