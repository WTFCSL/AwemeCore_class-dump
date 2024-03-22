//
//     Generated by private class-dump
//

@interface LynxBounceView : LynxUIView {
    float _space;
    unsigned long long _direction;
    double _triggerBounceEventDistance;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) float space;
@property (nonatomic) double triggerBounceEventDistance;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__251;
+ (id)__lynx_prop_config__372;

- (void)direction:(id)arg0 requestReset:(BOOL)arg1;
- (void)setTriggerBounceEventDistance:(double)arg0 requestReset:(BOOL)arg1;
- (double)triggerBounceEventDistance;
- (void)setTriggerBounceEventDistance:(double)arg0;
- (id)init;
- (unsigned long long)direction;
- (void)setDirection:(unsigned long long)arg0;
- (float)space;
- (void)setSpace:(float)arg0;

@end