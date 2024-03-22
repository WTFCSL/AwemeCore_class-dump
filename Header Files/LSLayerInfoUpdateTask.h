//
//     Generated by private class-dump
//

@interface LSLayerInfoUpdateTask : NSObject {
    int _frames;
    struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } _srcInfo;
    struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } _dstInfo;
    struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } _curInfo;
    struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } _pace;
}

@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } srcInfo;
@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } dstInfo;
@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } curInfo;
@property (nonatomic) int frames;
@property (nonatomic) struct ILayerInfo { int layer_id_; int zOrder_; struct ILayerRect { float x; float y; float w; float h; } rect_; int render_mode_; BOOL enabled_; int rotation; float alpha; } pace;

- (id)initWithSrcInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)arg0 dstInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)arg1 frames:(int)arg2;
- (struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; } *)getUpdatedInfo;
- (struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })srcInfo;
- (void)setSrcInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })arg0;
- (struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })dstInfo;
- (void)setDstInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })arg0;
- (struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })curInfo;
- (void)setCurInfo:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })arg0;
- (int)frames;
- (void)setFrames:(int)arg0;
- (struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })pace;
- (void)setPace:(struct ILayerInfo { int x0; int x1; struct ILayerRect { float x0; float x1; float x2; float x3; } x2; int x3; BOOL x4; int x5; float x6; })arg0;
- (BOOL)shouldUpdate;

@end
