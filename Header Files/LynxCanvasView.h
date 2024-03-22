//
//     Generated by private class-dump
//

@class KryptonApp, NSString, LynxCanvasViewLayerInfo;

@interface LynxCanvasView : UIView {
    struct unique_ptr<lynx::canvas::CanvasView, std::default_delete<lynx::canvas::CanvasView>> { struct __compressed_pair<lynx::canvas::CanvasView *, std::default_delete<lynx::canvas::CanvasView>> { struct CanvasView *__value_; } __ptr_; } native_canvas_view_;
    BOOL _initialized;
    BOOL _needProcessGesture;
    KryptonApp *_app;
    NSString *_name;
    LynxCanvasViewLayerInfo *_layerInfo;
}

@property (nonatomic) BOOL initialized;
@property (weak, nonatomic) KryptonApp *app;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL needProcessGesture;
@property (retain) LynxCanvasViewLayerInfo *layerInfo;

+ (Class)layerClass;

- (void)setLayerInfo:(id)arg0;
- (BOOL)needProcessGesture;
- (void)setNeedProcessGesture:(BOOL)arg0;
- (void)tryToInitCanvas;
- (void)_onFrameChanged;
- (void)InitCanvasInternal;
- (void)createNativeCanvasView;
- (void)sendTouch:(id)arg0 type:(unsigned char)arg1 index:(long long)arg2 length:(long long)arg3 clientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg4;
- (BOOL)dispatchTouch:(id)arg0 touches:(id)arg1 withEvent:(id)arg2 clientRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3;
- (void)setupWithName:(id)arg0 app:(id)arg1;
- (void)initLayerWithDefaultDrawableProperties;
- (void)freeCanvasMemory;
- (void)restoreCanvasView;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg0;
- (void).cxx_destruct;
- (id)app;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)appDidBecomeActive:(id)arg0;
- (void)didMoveToSuperview;
- (void)setApp:(id)arg0;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void)setName:(id)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (id).cxx_construct;
- (id)name;
- (id)layerInfo;

@end