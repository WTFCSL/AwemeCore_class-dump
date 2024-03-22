//
//     Generated by private class-dump
//

@class IESMMEffectConfig, NSString, HTSGLContext;

@interface IESEffectTransitionRenderer : NSObject {
    double _progress;
    void *_renderMangerHandle;
    IESMMEffectConfig *_effectConfig;
    NSString *_preResourcePath;
    HTSGLContext *_context;
}

@property (nonatomic) void *renderMangerHandle;
@property (retain, nonatomic) IESMMEffectConfig *effectConfig;
@property (copy, nonatomic) NSString *preResourcePath;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) double progress;

- (void)setRenderMangerHandle:(void *)arg0;
- (void *)renderMangerHandle;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setEffectConfig:(id)arg0;
- (void)setPreResourcePath:(id)arg0;
- (BOOL)setupEngineHandler;
- (void)setLoadResourceTimeout:(int)arg0;
- (id)preResourcePath;
- (BOOL)checkInputParamsIsValid:(struct CGSize { double x0; double x1; })arg0;
- (void)checkEffectError:(int)arg0 msg:(id)arg1;
- (void)setTransitionInfo:(id)arg0 outputFrame:(id)arg1;
- (void)setPath:(id)arg0;
- (void)setResolution:(struct CGSize { double x0; double x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (id)effectConfig;
- (void)setContext:(id)arg0;
- (id)context;
- (double)progress;
- (void)dealloc;
- (void)setProgress:(double)arg0;
- (void)setDuration:(double)arg0;

@end