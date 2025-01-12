//
//     Generated by private class-dump
//

@class NSString;

@interface LOTPathValueCallback : NSObject <LOTPathValueDelegate> {
    const struct CGPath { } *_pathValue;
}

@property (nonatomic) const struct CGPath { } *pathValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)withCGPath:(const struct CGPath { } *)arg0;

- (struct CGPath { } *)pathForFrame:(double)arg0 startKeyframe:(double)arg1 endKeyframe:(double)arg2 interpolatedProgress:(double)arg3;
- (const struct CGPath { } *)pathValue;
- (void)setPathValue:(const struct CGPath { } *)arg0;

@end
