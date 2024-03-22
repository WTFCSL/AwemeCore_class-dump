//
//     Generated by private class-dump
//

@interface POPDecayAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (readonly, copy, nonatomic) id originalVelocity;
@property (nonatomic) double deceleration;
@property (readonly, nonatomic) double duration;

+ (id)animationWithPropertyNamed:(id)arg0;
+ (id)animation;

- (void)_ensureComputedProperties;
- (void)_invalidateComputedProperties;
- (id)originalVelocity;
- (void)_appendDescription:(id)arg0 debug:(BOOL)arg1;
- (void)_initState;
- (id)reversedVelocity;
- (id)velocity;
- (id)init;
- (void)setVelocity:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)duration;
- (void)setFromValue:(id)arg0;
- (id)toValue;
- (void)setToValue:(id)arg0;
- (double)deceleration;
- (void)setDeceleration:(double)arg0;

@end