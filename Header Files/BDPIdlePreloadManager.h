//
//     Generated by private class-dump
//

@class NSTimer;

@interface BDPIdlePreloadManager : NSObject {
    NSTimer *_preloadTimer;
}

@property (retain, nonatomic) NSTimer *preloadTimer;

+ (id)sharedManager;

- (id)preloadTimer;
- (void)setPreloadTimer:(id)arg0;
- (void)setupPreloadTimer;
- (void).cxx_destruct;

@end
