//
//     Generated by private class-dump
//

@class FilterBase;

@interface MetalFilterCommonWrapper : FilterBase {
    float strength;
    BOOL _isUsing;
    FilterBase *_filterInstance;
}

@property (retain, nonatomic) FilterBase *filterInstance;

- (float)getFloatValueForKey:(int)arg0;
- (void)setIsUsing:(BOOL)arg0;
- (BOOL)isUsing;
- (id)getEffectPatameterStr;
- (id)releaseFilter;
- (id)filterInstance;
- (void)setFilterInstance:(id)arg0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0;
- (int)getValueForKey:(int)arg0;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (id)description;
- (void)setValue:(float)arg0 forKey:(int)arg1;
- (id)initWithFilter:(id)arg0;

@end