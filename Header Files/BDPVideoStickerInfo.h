//
//     Generated by private class-dump
//

@class NSString;

@interface BDPVideoStickerInfo : NSObject {
    NSString *_resourcePath;
    double _alpha;
    double _scale;
    double _startTime;
    double _endTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (copy, nonatomic) NSString *resourcePath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double alpha;
@property (nonatomic) double scale;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;

- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setAlpha:(double)arg0;
- (double)scale;
- (double)endTime;
- (double)startTime;
- (double)alpha;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEndTime:(double)arg0;
- (void)setScale:(double)arg0;
- (id)resourcePath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setResourcePath:(id)arg0;

@end
