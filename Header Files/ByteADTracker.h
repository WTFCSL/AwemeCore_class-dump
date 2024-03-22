//
//     Generated by private class-dump
//

@class BDATConfiguration, BDATC2STracker;

@interface ByteADTracker : NSObject {
    BDATConfiguration *_configuration;
    BDATC2STracker *_tracker;
}

@property (retain, nonatomic) BDATConfiguration *configuration;
@property (retain, nonatomic) BDATC2STracker *tracker;

+ (id)sharedADTracker;
+ (id)c2sTracker;
+ (void)registerMacroTokens:(id)arg0;
+ (void)registerUserAgent:(id)arg0;
+ (void)updateConfiguration:(id)arg0;

- (void)sdkSessionLaunchMonitor;
- (id)c2sTracker;
- (void)setupADTracker;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)versionNumber;
- (id)configuration;
- (void)setConfiguration:(id)arg0;

@end
