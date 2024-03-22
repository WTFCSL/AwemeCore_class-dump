//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEPOILiveDataCenterCommonSource : NSObject <AWEPOILiveDataCenterSource> {
    NSMutableDictionary *_dataSource;
}

@property (retain, nonatomic) NSMutableDictionary *dataSource;

- (void)setData:(id)arg0 data:(id)arg1 isAppLifeCycle:(BOOL)arg2;
- (void)handleRegisterMsgSubscriber:(id)arg0;
- (void)handleUnRegisterMsgSubscriber:(id)arg0;
- (void)handleReleaseMsgCenter:(unsigned long long)arg0 extra:(id)arg1;
- (void)addListener:(id)arg0 subscriber:(id)arg1;
- (void)removeListener:(id)arg0 subscriber:(id)arg1;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)getData:(id)arg0;

@end