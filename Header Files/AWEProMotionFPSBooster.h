//
//     Generated by private class-dump
//

@interface AWEProMotionFPSBooster : NSObject {
    double fps;
    id hint;
}

+ (void)boostFPSForScrolling;
+ (void)boostFPSForAppearance;
+ (id)setPreferredFPS:(double)arg0 hint:(id)arg1;
+ (void)unsetPreferredFPS:(id)arg0;
+ (void)setupBooster;
+ (BOOL)isEnabled;
+ (void)tick:(id)arg0;

- (void).cxx_destruct;

@end