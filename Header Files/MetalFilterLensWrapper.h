//
//     Generated by private class-dump
//

@class MetalFilterLens;

@interface MetalFilterLensWrapper : FilterBase {
    MetalFilterLens *_lensInstance;
}

@property (retain, nonatomic) MetalFilterLens *lensInstance;

- (id)getEffectPatameterStr;
- (id)lensInstance;
- (void)setLensInstance:(id)arg0;
- (id)initWithLens:(id)arg0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0;
- (int)getValueForKey:(int)arg0;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (void)dealloc;
- (void)setValue:(float)arg0 forKey:(int)arg1;

@end
