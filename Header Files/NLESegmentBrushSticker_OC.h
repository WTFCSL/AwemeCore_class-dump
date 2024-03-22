//
//     Generated by private class-dump
//

@class NSString;

@interface NLESegmentBrushSticker_OC : NLESegmentSticker_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentBrushSticker> { struct NLESegmentBrushSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned long long optionType;
@property (nonatomic) unsigned long long undoCount;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *cachePath;
@property (copy, nonatomic) NSString *initalizeParam;
@property (copy, nonatomic) NSString *param;
@property (nonatomic) struct CGPoint { double x0; double x1; } touchPoint;
@property (nonatomic) long long updateMode;

- (void)setInitalizeParam:(id)arg0;
- (unsigned long long)undoCount;
- (void)setUndoCount:(unsigned long long)arg0;
- (void)setOptionType:(unsigned long long)arg0;
- (void)setTouchPoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentBrushSticker> { struct NLESegmentBrushSticker *x0; struct __shared_weak_count *x1; })arg0;
- (id)initalizeParam;
- (void)setParam:(id)arg0;
- (void)setPath:(id)arg0;
- (id)init;
- (id)path;
- (id)param;
- (id)cachePath;
- (long long)updateMode;
- (void)setCachePath:(id)arg0;
- (unsigned long long)optionType;
- (void)setUpdateMode:(long long)arg0;
- (struct CGPoint { double x0; double x1; })touchPoint;

@end