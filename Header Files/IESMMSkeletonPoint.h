//
//     Generated by private class-dump
//

@interface IESMMSkeletonPoint : NSObject {
    BOOL _isDetect;
    double _x;
    double _y;
    double _score;
}

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) BOOL isDetect;
@property (nonatomic) double score;

- (BOOL)isDetect;
- (void)setIsDetect:(BOOL)arg0;
- (void)setScore:(double)arg0;
- (double)score;
- (void)setY:(double)arg0;
- (double)y;
- (double)x;
- (void)setX:(double)arg0;

@end