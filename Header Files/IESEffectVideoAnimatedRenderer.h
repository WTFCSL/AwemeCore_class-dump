//
//     Generated by private class-dump
//

@class NSString, NSDictionary, EffectCanvasHandler, HTSGLContext;

@interface IESEffectVideoAnimatedRenderer : NSObject {
    void *_engineHandler;
    EffectCanvasHandler *_canvasObject;
    NSDictionary *_canvasHandlerMap;
    NSString *_identifier;
    HTSGLContext *_context;
}

@property (nonatomic) void *engineHandler;
@property (retain, nonatomic) EffectCanvasHandler *canvasObject;
@property (retain, nonatomic) NSDictionary *canvasHandlerMap;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) HTSGLContext *context;

- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })arg0;
- (void)checkEffectError:(int)arg0 msg:(id)arg1;
- (void)setCanvasHandlerMap:(id)arg0;
- (void *)engineHandler;
- (void)setEngineHandler:(void *)arg0;
- (id)canvasHandlerMap;
- (id)canvasObject;
- (void)setCanvasObject:(id)arg0;
- (void)updateCanvasAnimation:(id)arg0;
- (void)removeAllCanvasKeyFramesWithTrackID:(id)arg0;
- (id)getCanvasKeyFrameInfo:(unsigned long long)arg0 withTrackID:(id)arg1;
- (void)updateVideoAnimatedParams:(id)arg0;
- (void)activeCanvasHandlerForKey:(id)arg0 animation:(id)arg1;
- (void)destoryCanvasHandlerForKey:(id)arg0;
- (void)setkeyFrameInfoWrapper:(id)arg0;
- (void)removeAllCanvasKeyFrames;
- (id)getCanvasKeyFrameInfo:(unsigned long long)arg0;
- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })arg0 identifier:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)identifier;
- (id)context;
- (void)dealloc;
- (void)setIdentifier:(id)arg0;

@end
