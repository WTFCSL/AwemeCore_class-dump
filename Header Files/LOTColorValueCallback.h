//
//     Generated by private class-dump
//

@class NSString;

@interface LOTColorValueCallback : NSObject <LOTColorValueDelegate> {
    struct CGColor { } *_colorValue;
}

@property (nonatomic) struct CGColor { } *colorValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withCGColor:(struct CGColor { } *)arg0;

- (struct CGColor { } *)colorForFrame:(double)arg0 startKeyframe:(double)arg1 endKeyframe:(double)arg2 interpolatedProgress:(double)arg3 startColor:(struct CGColor { } *)arg4 endColor:(struct CGColor { } *)arg5 currentColor:(struct CGColor { } *)arg6;
- (struct CGColor { } *)colorValue;
- (void)setColorValue:(struct CGColor { } *)arg0;

@end
