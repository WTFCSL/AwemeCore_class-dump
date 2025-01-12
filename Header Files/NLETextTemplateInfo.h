//
//     Generated by private class-dump
//

@class NSArray;

@interface NLETextTemplateInfo : NSObject {
    double _rotation;
    NSArray *_textInfos;
    struct CGPoint { double x; double y; } _scale;
    struct CGPoint { double x; double y; } _translation;
    struct CGSize { double width; double height; } _normalizSize;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _targetTimeRange;
}

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;
@property (nonatomic) double rotation;
@property (nonatomic) struct CGPoint { double x; double y; } scale;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (copy, nonatomic) NSArray *textInfos;

- (void)setTargetTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (struct CGSize { double x0; double x1; })normalizSize;
- (void)setNormalizSize:(struct CGSize { double x0; double x1; })arg0;
- (id)jsonDic;
- (void)setTextInfos:(id)arg0;
- (id)textInfos;
- (void)setRotation:(double)arg0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })translation;
- (struct CGPoint { double x0; double x1; })scale;
- (id)initWithSlot:(id)arg0;
- (double)rotation;
- (void)setScale:(struct CGPoint { double x0; double x1; })arg0;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })targetTimeRange;
- (id)initWithJson:(id)arg0;

@end
