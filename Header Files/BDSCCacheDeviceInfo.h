//
//     Generated by private class-dump
//

@class NSString;

@interface BDSCCacheDeviceInfo : NSObject <BDModelCustom> {
    NSString *_deviceName;
    NSString *_ip;
    NSString *_protocolName;
}

@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *protocolName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void)setDeviceName:(id)arg0;
- (void).cxx_destruct;
- (id)deviceName;
- (id)protocolName;
- (void)setProtocolName:(id)arg0;
- (void)setIp:(id)arg0;
- (id)ip;

@end
