//
//     Generated by private class-dump
//

@class NSObject, NSMutableDictionary, NSString, AWEStorage, NSMutableArray, NSDate;
@protocol OS_dispatch_queue, AWEDiskMetricDelegate, OS_dispatch_semaphore;

@interface AWEDiskMetric : NSObject <HMDDiskVisitor> {
    BOOL _shouldPauseTrack;
    BOOL _collectionEnable;
    BOOL _tracking;
    id<AWEDiskMetricDelegate> _delegate;
    NSMutableDictionary *_infos;
    NSMutableArray *_diskInfoParams;
    long long _pathTotal;
    long long _pathCount;
    AWEStorage *_universalStorage;
    NSDate *_lastTrack;
    NSObject<OS_dispatch_queue> *_diskMonitorQueue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (retain, nonatomic) NSMutableDictionary *infos;
@property (retain, nonatomic) NSMutableArray *diskInfoParams;
@property (nonatomic) long long pathTotal;
@property (nonatomic) long long pathCount;
@property (retain, nonatomic) AWEStorage *universalStorage;
@property (nonatomic) BOOL collectionEnable;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property (retain, nonatomic) NSDate *lastTrack;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *diskMonitorQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) BOOL shouldPauseTrack;
@property (weak, nonatomic) id<AWEDiskMetricDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)universalStorage;
- (void)visitFile:(id)arg0 size:(unsigned long long)arg1 lastAccessDate:(id)arg2 deepLevel:(long long)arg3;
- (void)visitDirectory:(id)arg0 size:(unsigned long long)arg1 deepLevel:(unsigned long long)arg2;
- (void)setLastTrack:(id)arg0;
- (id)diskMonitorQueue;
- (void)opt_trackIntrnal;
- (id)diskInfoParams;
- (long long)pathTotal;
- (id)lastTrack;
- (id)resourceAttributeWithPath:(id)arg0 size:(unsigned long long)arg1;
- (void)setPathTotal:(long long)arg0;
- (BOOL)shouldPauseTrack;
- (void)addDiskItemInfo:(id)arg0 attribute:(id)arg1;
- (void)recordPath:(id)arg0 size:(unsigned long long)arg1 deepLevel:(long long)arg2;
- (void)trackIfNeed;
- (void)addDiskItemInfoIfNeedWithAbsolutePath:(id)arg0 relativePath:(id)arg1;
- (void)setShouldPauseTrack:(BOOL)arg0;
- (void)setDiskInfoParams:(id)arg0;
- (void)setUniversalStorage:(id)arg0;
- (BOOL)collectionEnable;
- (void)setCollectionEnable:(BOOL)arg0;
- (void)setDiskMonitorQueue:(id)arg0;
- (id)init;
- (id)timestamp;
- (id)semaphore;
- (void).cxx_destruct;
- (void)setSemaphore:(id)arg0;
- (id)infos;
- (id)delegate;
- (void)setTracking:(BOOL)arg0;
- (BOOL)isTracking;
- (void)setDelegate:(id)arg0;
- (BOOL)shouldTrack;
- (long long)pathCount;
- (void)setInfos:(id)arg0;
- (void)setPathCount:(long long)arg0;

@end
