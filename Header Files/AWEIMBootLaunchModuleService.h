//
//     Generated by private class-dump
//

@class BFTaskCompletionSource, NSString;

@interface AWEIMBootLaunchModuleService : HTSService <HTSService, AWEIMBootLaunchModuleService> {
    BOOL _hasLaunchOptions;
    BOOL _isDefaultLanding;
    long long _state;
    double _initTime;
    BFTaskCompletionSource *_startIMTaskSource;
}

@property (retain, nonatomic) BFTaskCompletionSource *startIMTaskSource;
@property (nonatomic) BOOL hasLaunchOptions;
@property (nonatomic) BOOL isDefaultLanding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long state;
@property (nonatomic) double initTime;

- (BOOL)enableFeedReadyBootLaunchIM:(long long)arg0;
- (id)runFeedReadyIMTask:(long long)arg0;
- (long long)getStartIMState;
- (void)setIsDefaultLanding:(BOOL)arg0;
- (BOOL)isDefaultLanding;
- (void)executeIMBootLaunchImmediately:(BOOL)arg0;
- (BOOL)enableIMModuleServiceCallerOpt;
- (BOOL)enableFeedReadyLaunchABTest;
- (id)startIMTaskSource;
- (id)imBootColdLaunchConfig;
- (BOOL)hasLaunchOptions;
- (id)startIMTaskWithConfig:(id)arg0;
- (id)excuteFeedReadyIMBootLaunch;
- (id)runIMReadyTask:(long long)arg0;
- (void)executeIMBootLaunchFromDyld;
- (void)setStartIMTaskSource:(id)arg0;
- (void)setHasLaunchOptions:(BOOL)arg0;
- (void)setInitTime:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (int)delay;
- (double)initTime;

@end
