//
//     Generated by private class-dump
//

@class NSString;

@interface LOTSizeInterpolatorCallback : NSObject <LOTSizeValueDelegate> {
    double _currentProgress;
    struct CGSize { double width; double height; } _fromSize;
    struct CGSize { double width; double height; } _toSize;
}

@property (nonatomic) struct CGSize { double width; double height; } fromSize;
@property (nonatomic) struct CGSize { double width; double height; } toSize;
@property (nonatomic) double currentProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withFromSize:(struct CGSize { double x0; double x1; })arg0 toSize:(struct CGSize { double x0; double x1; })arg1;

- (void)setFromSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setToSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })fromSize;
- (struct CGSize { double x0; double x1; })sizeForFrame:(double)arg0 startKeyframe:(double)arg1 endKeyframe:(double)arg2 interpolatedProgress:(double)arg3 startSize:(struct CGSize { double x0; double x1; })arg4 endSize:(struct CGSize { double x0; double x1; })arg5 currentSize:(struct CGSize { double x0; double x1; })arg6;
- (double)currentProgress;
- (struct CGSize { double x0; double x1; })toSize;
- (void)setCurrentProgress:(double)arg0;

@end
