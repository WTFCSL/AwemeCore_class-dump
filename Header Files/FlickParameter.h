//
//     Generated by private class-dump
//

@interface FlickParameter : NSObject {
    float _duration;
    float _delta;
}

- (id)initFlick:(float)arg0 decelerationRate:(float)arg1 threshold:(float)arg2 oppositeBoundary:(float)arg3 positiveBoundary:(float)arg4;
- (void)setContentOffset:(id)arg0 destination:(struct CGPoint { double x0; double x1; })arg1;
- (float)delta;

@end