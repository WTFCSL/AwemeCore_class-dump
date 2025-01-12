//
//     Generated by private class-dump
//

@class NSString, BDSCDeviceStrategy, NSDictionary;

@interface BDSCInvalidDevice : NSObject <BDSCDeviceProtocol> {
    BOOL _liveSupportSeek;
    BOOL _isFromPreSearch;
    BOOL _isLastChoose;
    unsigned long long _heartBeatErrorCount;
    NSString *_deviceName;
    BDSCDeviceStrategy *_deviceStrategy;
}

@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) BDSCDeviceStrategy *deviceStrategy;
@property (nonatomic) unsigned long long heartBeatErrorCount;
@property (nonatomic) BOOL liveSupportSeek;
@property (nonatomic) BOOL isFromPreSearch;
@property (nonatomic) BOOL isLastChoose;
@property (readonly, copy, nonatomic) NSString *realDeviceName;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) long long deviceID;
@property (readonly, copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly, copy, nonatomic) NSString *deviceBrand;
@property (readonly, nonatomic) long long showPriority;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) long long sourceApp;
@property (readonly, copy, nonatomic) NSString *sinkOSVersion;
@property (readonly, nonatomic) unsigned long long protocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraTrackParams;
- (void)sendMessage:(id)arg0 withCallback:(id /* block */)arg1;
- (BOOL)supportSendMessage;
- (BOOL)getBoolValueForKey:(id)arg0;
- (long long)showPriority;
- (BOOL)isFromPreSearch;
- (void)setIsFromPreSearch:(BOOL)arg0;
- (void)setIsLastChoose:(BOOL)arg0;
- (id)realDeviceName;
- (BOOL)liveSupportSeek;
- (void)setLiveSupportSeek:(BOOL)arg0;
- (id)sinkOSVersion;
- (BOOL)isEqualToDict:(id)arg0;
- (id)deviceValueForKey:(id)arg0;
- (unsigned long long)heartBeatErrorCount;
- (void)setHeartBeatErrorCount:(unsigned long long)arg0;
- (BOOL)isLastChoose;
- (id)deviceStrategy;
- (void)setDeviceStrategy:(id)arg0;
- (id)manufacturerName;
- (id)channel;
- (void)setDeviceName:(id)arg0;
- (unsigned long long)source;
- (void).cxx_destruct;
- (id)deviceName;
- (long long)deviceID;
- (id)modelName;
- (long long)sourceApp;
- (BOOL)isEqualToDevice:(id)arg0;
- (id)ipAddress;
- (unsigned long long)protocolType;
- (id)toDict;
- (id)deviceBrand;
- (id)initWithDeviceName:(id)arg0;

@end
