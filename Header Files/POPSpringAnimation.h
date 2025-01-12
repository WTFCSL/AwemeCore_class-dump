//
//     Generated by private class-dump
//

@interface POPSpringAnimation : POPPropertyAnimation

@property (copy, nonatomic) id velocity;
@property (nonatomic) double springBounciness;
@property (nonatomic) double springSpeed;
@property (nonatomic) double dynamicsTension;
@property (nonatomic) double dynamicsFriction;
@property (nonatomic) double dynamicsMass;

+ (void)convertTension:(double)arg0 friction:(double)arg1 toBounciness:(double *)arg2 speed:(double *)arg3;
+ (id)animationWithPropertyNamed:(id)arg0;
+ (void)convertBounciness:(double)arg0 speed:(double)arg1 toTension:(double *)arg2 friction:(double *)arg3 mass:(double *)arg4;
+ (id)animation;

- (void)_appendDescription:(id)arg0 debug:(BOOL)arg1;
- (void)_initState;
- (void)_updatedDynamicsTension;
- (void)_updatedDynamicsFriction;
- (void)_updatedDynamicsMass;
- (double)dynamicsTension;
- (void)setDynamicsTension:(double)arg0;
- (double)dynamicsFriction;
- (void)setDynamicsFriction:(double)arg0;
- (double)dynamicsMass;
- (void)setDynamicsMass:(double)arg0;
- (double)springSpeed;
- (void)setSpringSpeed:(double)arg0;
- (double)springBounciness;
- (void)setSpringBounciness:(double)arg0;
- (struct SpringSolver<POP::Vector4<double> > { double x0; double x1; double x2; double x3; double x4; double x5; double x6; struct SSState<POP::Vector4<double> > { struct Vector4<double> { double x0; double x1; double x2; double x3; } x0; struct Vector4<double> { double x0; double x1; double x2; double x3; } x1; } x7; struct Vector4<double> { double x0; double x1; double x2; double x3; } x8; BOOL x9; } *)solver;
- (id)velocity;
- (void)setSolver:(struct SpringSolver<POP::Vector4<double> > { double x0; double x1; double x2; double x3; double x4; double x5; double x6; struct SSState<POP::Vector4<double> > { struct Vector4<double> { double x0; double x1; double x2; double x3; } x0; struct Vector4<double> { double x0; double x1; double x2; double x3; } x1; } x7; struct Vector4<double> { double x0; double x1; double x2; double x3; } x8; BOOL x9; } *)arg0;
- (id)init;
- (void)setVelocity:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)dealloc;

@end
