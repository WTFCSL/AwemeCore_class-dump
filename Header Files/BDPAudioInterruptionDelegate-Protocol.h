//
//     Generated by private class-dump
//

@protocol BDPAudioInterruptionDelegate <NSObject>

@optional

- (void)heapPhonesUnavailable;
- (void)pauseByInterrupt;
- (void)resumeByInterrupt;
- (id)getInterruptUniqueID;
- (long long)getPageID;

@end
