//
//     Generated by private class-dump
//

@interface VEAlgorithmSessionResultObjTrack : NSObject {
    float _prob;
    int _label;
    int _trackId;
    struct CGPoint { double x; double y; } _center;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) float prob;
@property (nonatomic) int label;
@property (nonatomic) int trackId;

- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)setLabel:(int)arg0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })arg0;
- (int)label;
- (struct CGPoint { double x0; double x1; })center;
- (void)setTrackId:(int)arg0;
- (float)prob;
- (void)setProb:(float)arg0;
- (int)trackId;

@end