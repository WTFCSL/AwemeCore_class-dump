//
//     Generated by private class-dump
//

@interface BDLinkCacheTracker : NSObject {
    unsigned long long _port3530;
    unsigned long long _port4530;
    unsigned long long _port15550;
}

@property (nonatomic) unsigned long long port3530;
@property (nonatomic) unsigned long long port4530;
@property (nonatomic) unsigned long long port15550;

- (unsigned long long)overallTrackerStatus;
- (void)setStatus:(BOOL)arg0 withPort:(int)arg1;
- (unsigned long long)port3530;
- (void)setPort3530:(unsigned long long)arg0;
- (unsigned long long)port4530;
- (void)setPort4530:(unsigned long long)arg0;
- (unsigned long long)port15550;
- (void)setPort15550:(unsigned long long)arg0;
- (id)init;

@end
