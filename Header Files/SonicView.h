//
//     Generated by private class-dump
//

@class NSString, CAEAGLLayer, UIView, NSMutableArray;
@protocol SonicViewPaintListener;

@interface SonicView : NSObject {
    struct Mutex<sonic::graphics::PlatformView *> { struct PlatformView *val_; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_; } platform_view_;
    float scale_;
    struct Mutex<id<SonicViewPaintListener>> { id<SonicViewPaintListener> val_; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex_; } paint_listener_;
    unsigned long long frame_count_;
    NSMutableArray *cbs_;
    UIView *_view;
    CAEAGLLayer *_layer;
}

@property (readonly, nonatomic) CAEAGLLayer *layer;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) NSString *unique_id;

- (BOOL)dispatchTouch:(long long)arg0 touches:(id)arg1 withEvent:(id)arg2;
- (void)setPaintListener:(id)arg0;
- (void *)getPlatformView;
- (void)removePlatformView;
- (void)onContentDrawing;
- (void)bindPlatformView:(void *)arg0;
- (void)addTouchCallback:(id)arg0 selector:(SEL)arg1;
- (void)removeTouchCallback:(id)arg0;
- (void)sendResize:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 needGestureProcessor:(BOOL)arg1;
- (void)sendTouchWithType:(unsigned char)arg0 touches:(id)arg1 current:(unsigned long long)arg2;
- (struct __CVBuffer { } *)createPixelBufferRef;
- (void)setOnFrameDelegate:(id)arg0;
- (void)setCastScreenPreferredFramePerSecond:(unsigned int)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layer;
- (id)view;
- (id).cxx_construct;
- (id)unique_id;

@end