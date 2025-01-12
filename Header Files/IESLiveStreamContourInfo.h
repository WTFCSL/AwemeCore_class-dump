//
//     Generated by private class-dump
//

@class UIBezierPath, NSString, NSArray;

@interface IESLiveStreamContourInfo : NSObject {
    NSString *_interactID;
    long long _width;
    long long _height;
    NSArray *_contourItems;
    struct CGPoint { double x; double y; } _scalePoint;
    struct CGPoint { double x; double y; } _offsetPoint;
    struct CGSize { double width; double height; } _cameraSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _drawBounds;
}

@property (nonatomic) double validTiming;
@property (retain, nonatomic) UIBezierPath *contourPath;
@property (copy, nonatomic) NSString *interactID;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSArray *contourItems;
@property (nonatomic) struct CGPoint { double x; double y; } scalePoint;
@property (nonatomic) struct CGPoint { double x; double y; } offsetPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawBounds;
@property (nonatomic) struct CGSize { double width; double height; } cameraSize;

- (id)interactID;
- (void)setInteractID:(id)arg0;
- (struct CGSize { double x0; double x1; })cameraSize;
- (void)setCameraSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setOffsetPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })offsetPoint;
- (void)setDrawBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setScalePoint:(struct CGPoint { double x0; double x1; })arg0;
- (id)initWithContourModel:(id)arg0;
- (double)validTiming;
- (id)contourPath;
- (void)setValidTiming:(double)arg0;
- (void)setContourPath:(id)arg0;
- (id)contourItems;
- (struct CGPoint { double x0; double x1; })scalePoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawBounds;
- (void)setContourItems:(id)arg0;
- (void).cxx_destruct;
- (long long)height;
- (void)setWidth:(long long)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;

@end
