//
//     Generated by private class-dump
//

@class NSString;

@interface HMDOTSpanTTMonitorData : NSObject <HMDOTSpanMovinglineDataProtocol> {
    NSString *_logType;
    NSString *_serviceName;
}

@property (copy, nonatomic) NSString *logType;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateMovinglineData;
- (id)logType;
- (void).cxx_destruct;
- (id)serviceName;
- (void)setLogType:(id)arg0;
- (void)setServiceName:(id)arg0;

@end