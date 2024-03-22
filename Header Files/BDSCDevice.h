//
//     Generated by private class-dump
//

@class NSString, NSDictionary, BDSCDeviceStrategy, NSMutableArray, BDByteCastService;

@interface BDSCDevice : NSObject <BDSCDeviceProtocol> {
    BOOL _liveSupportSeek;
    BOOL _isFromPreSearch;
    BOOL _isLastChoose;
    NSString *_deviceName;
    long long _deviceID;
    BDByteCastService *_byteCastService;
    unsigned long long _heartBeatErrorCount;
    NSString *_fromProtocol;
    NSString *_sinkOSVersion;
    NSDictionary *_updatedParams;
    NSString *_realDeviceName;
    BDSCDeviceStrategy *_deviceStrategy;
    NSMutableArray *_tempPlayerArray;
}

@property (retain, nonatomic) BDByteCastService *byteCastService;
@property (copy, nonatomic) NSString *realDeviceName;
@property (retain, nonatomic) BDSCDeviceStrategy *deviceStrategy;
@property (retain, nonatomic) NSMutableArray *tempPlayerArray;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (nonatomic) unsigned long long heartBeatErrorCount;
@property (copy, nonatomic) NSString *fromProtocol;
@property (nonatomic) BOOL liveSupportSeek;
@property (readonly, nonatomic) BOOL supportToXsg;
@property (copy, nonatomic) NSString *sinkOSVersion;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSDictionary *updatedParams;
@property (nonatomic) BOOL isFromPreSearch;
@property (nonatomic) BOOL isLastChoose;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic) long long deviceID;
@property (readonly, copy, nonatomic) NSDictionary *extraTrackParams;
@property (readonly, copy, nonatomic) NSString *deviceBrand;
@property (readonly, nonatomic) long long showPriority;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) long long sourceApp;
@property (readonly, nonatomic) unsigned long long protocolType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraTrackParams;
- (id)byteCastService;
- (void)sendMessage:(id)arg0 withCallback:(id /* block */)arg1;
- (BOOL)supportSendMessage;
- (BOOL)getBoolValueForKey:(id)arg0;
- (long long)showPriority;
- (id)fromProtocol;
- (void)setFromProtocol:(id)arg0;
- (BOOL)isFromPreSearch;
- (void)setIsFromPreSearch:(BOOL)arg0;
- (void)setIsLastChoose:(BOOL)arg0;
- (id)realDeviceName;
- (BOOL)liveSupportSeek;
- (id)initWithByteCastService:(id)arg0;
- (void)setLiveSupportSeek:(BOOL)arg0;
- (void)setUpdatedParams:(id)arg0;
- (id)sinkOSVersion;
- (BOOL)isEqualToDict:(id)arg0;
- (id)deviceValueForKey:(id)arg0;
- (unsigned long long)heartBeatErrorCount;
- (void)setHeartBeatErrorCount:(unsigned long long)arg0;
- (BOOL)isLastChoose;
- (void)setByteCastService:(id)arg0;
- (void)removeLelinkIfNeed;
- (BOOL)checkConnectSupportXsg;
- (id)deviceStrategy;
- (id)updatedParams;
- (id)tempPlayerArray;
- (BOOL)supportToXsg;
- (void)setSinkOSVersion:(id)arg0;
- (void)setRealDeviceName:(id)arg0;
- (void)setDeviceStrategy:(id)arg0;
- (void)setTempPlayerArray:(id)arg0;
- (id)manufacturerName;
- (id)manufacturer;
- (id)channel;
- (unsigned long long)source;
- (void).cxx_destruct;
- (id)deviceName;
- (long long)deviceID;
- (id)model;
- (id)modelName;
- (long long)sourceApp;
- (unsigned long long)hash;
- (BOOL)isEqualToDevice:(id)arg0;
- (id)ipAddress;
- (unsigned long long)protocolType;
- (id)deviceData;
- (id)toDict;
- (id)deviceBrand;

@end