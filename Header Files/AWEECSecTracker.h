//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECSecTracker : NSObject <AWEECTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clean:(id)arg0;
- (void)initTrackGraph;
- (void)appendEntranceInfoWithModel:(id)arg0 btmTrackerModel:(id)arg1 scene:(id)arg2;
- (id)bcmBiz;
- (id)trackGraphKey;
- (id)defaultEcomSecJsonString;
- (id)removeOtherKeys:(id)arg0;

@end