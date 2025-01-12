//
//     Generated by private class-dump
//

@class VEImageDetector, NSTimer, NSString;

@interface AWEImageDetectorProviderImpl : NSObject <AWEImageDetectorProviderProtocol> {
    VEImageDetector *_imageDetector;
    long long _useCount;
    NSTimer *_delayReleaseTimer;
}

@property (retain, nonatomic) VEImageDetector *imageDetector;
@property (nonatomic) long long useCount;
@property (retain, nonatomic) NSTimer *delayReleaseTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseImageDetector;
- (id)imageDetector;
- (void)setImageDetector:(id)arg0;
- (void)p_invalidateDelayReleaseTimerIfNeeded;
- (id)delayReleaseTimer;
- (void)p_releaseImageDetectorIfNeeded;
- (void)setDelayReleaseTimer:(id)arg0;
- (void)provideImageDetectorWithCompletion:(id /* block */)arg0;
- (void)tryReleaseImageDetector;
- (id)init;
- (void).cxx_destruct;
- (void)setUseCount:(long long)arg0;
- (long long)useCount;
- (void)dealloc;
- (void)applicationDidReceiveMemoryWarningNotification:(id)arg0;

@end
