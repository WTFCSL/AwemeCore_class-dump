//
//     Generated by private class-dump
//

@class HeliumApp;

@interface GestureImpl : UIGestureRecognizer {
    HeliumApp *_app;
    HeliumApp *_wapp;
    struct ptDrawableEAGL { struct Window *x0; unsigned int x1; unsigned int x2; struct { int x0; int x1; int x2; } x3; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x4; int x5; int x6; int x7; int x8; int x9; struct DrawFrameBuffer { int x0; int x1; int x2; int x3; int x4; int x5; } x10[3]; void /* function */ *x11; unsigned char x12; unsigned int x13; unsigned int x14; } *_drawable;
}

- (id)init:(id)arg0 drawable:(struct ptDrawableEAGL { struct Window *x0; unsigned int x1; unsigned int x2; struct { int x0; int x1; int x2; } x3; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x4; int x5; int x6; int x7; int x8; int x9; struct DrawFrameBuffer { int x0; int x1; int x2; int x3; int x4; int x5; } x10[3]; void /* function */ *x11; unsigned char x12; unsigned int x13; unsigned int x14; } *)arg1;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;

@end
