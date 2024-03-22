//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol IESLiveAnchorUploadBandwidthProberService <NSObject>

@property (nonatomic) long long liveType;
@property (nonatomic) unsigned long long businessStatus;
@property (nonatomic) BOOL isFinishWhenTesting;
@property (retain, nonatomic) NSDictionary *sourceParams;

- (void)setLiveType:(long long)arg0;
- (long long)liveType;
- (id)sourceParams;
- (void)setSourceParams:(id)arg0;
- (void)setIsFinishWhenTesting:(BOOL)arg0;
- (unsigned long long)businessStatus;
- (void)setBusinessStatus:(unsigned long long)arg0;
- (void)startProcessWithNeedCount:(BOOL)arg0;
- (void)stopProcessDestroyDataIfNeed:(BOOL)arg0;
- (void)addStatusChangeObserver:(id)arg0 block:(id /* block */)arg1;
- (void)removeAllStatusChangeObservers;
- (BOOL)isFinishWhenTesting;
- (void)removeStatusChangeObserver:(id)arg0;

@end