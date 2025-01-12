//
//     Generated by private class-dump
//

@class AWENetworkQuailtyModel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWENqeTTNetAdaptor : NSObject {
    NSObject<OS_dispatch_queue> *_serial_queue;
    NSMutableArray *_nqeManager;
    AWENetworkQuailtyModel *_sharedNqeModel;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serial_queue;
@property (retain, nonatomic) NSMutableArray *nqeManager;
@property (retain, nonatomic) AWENetworkQuailtyModel *sharedNqeModel;

+ (id)shared;

- (void)handleReachabilityChangedNotification:(id)arg0;
- (void)addNetworkQuailityManager:(id)arg0;
- (void)removeNetworkQuailityManager:(id)arg0;
- (id)fetchCurrentQuailtyModel;
- (void)p_handleNeqChangeActionRtt:(long long)arg0 transportRtt:(long long)arg1 downstreamThroughputKbps:(long long)arg2;
- (void)p_handlePacageLossRateWithNetProtocol:(long long)arg0 upLossRate:(double)arg1 upLossRateVari:(double)arg2 downLossRate:(double)arg3 downLossRateVari:(double)arg4;
- (void)setSerial_queue:(id)arg0;
- (void)setNqeManager:(id)arg0;
- (void)setSharedNqeModel:(id)arg0;
- (id)serial_queue;
- (id)sharedNqeModel;
- (void)p_handleNeqLevelChangeNotification:(id)arg0;
- (id)nqeManager;
- (id)init;
- (void).cxx_destruct;
- (void)notifyObserver;

@end
