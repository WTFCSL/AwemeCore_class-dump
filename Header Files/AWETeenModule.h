//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenModule : NSObject <HTSAppLifeCycle> {
    unsigned long long _becomeActiveTime;
}

@property (nonatomic) unsigned long long becomeActiveTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppDidEnterBackground;
- (void)onAppWillEnterForeground;
- (unsigned long long)becomeActiveTime;
- (void)setBecomeActiveTime:(unsigned long long)arg0;

@end