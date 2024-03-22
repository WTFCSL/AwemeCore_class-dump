//
//     Generated by private class-dump
//

@class NSString, NSDictionary, LBLelinkService, BDDlnaService, BDLinkDevice;

@interface BDByteCastService : NSObject {
    LBLelinkService *_lelinkService;
    BDDlnaService *_dlnaService;
    BDLinkDevice *_bdlinkDevice;
}

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, copy, nonatomic) NSString *data;
@property (readonly, copy, nonatomic) NSString *modelName;
@property (readonly, copy, nonatomic) NSString *modelNumber;
@property (readonly, copy, nonatomic) NSString *modelURL;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *manufacturerURL;
@property (readonly, copy, nonatomic) NSDictionary *deviceParamsDictionary;
@property (retain, nonatomic) LBLelinkService *lelinkService;
@property (retain, nonatomic) BDDlnaService *dlnaService;
@property (retain, nonatomic) BDLinkDevice *bdlinkDevice;
@property (readonly, nonatomic) unsigned long long sdkType;

- (id)lelinkService;
- (void)setLelinkService:(id)arg0;
- (unsigned long long)sdkType;
- (void)setBdlinkDevice:(id)arg0;
- (id)deviceParamsDictionary;
- (BOOL)isEqualToByteCastService:(id)arg0;
- (id)bdlinkDevice;
- (id)dlnaService;
- (void)setDlnaService:(id)arg0;
- (id)protocolsVersion;
- (id)manufacturerURL;
- (id)manufacturer;
- (id)data;
- (id)modelURL;
- (void).cxx_destruct;
- (id)modelName;
- (id)modelNumber;
- (id)serviceName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)ipAddress;

@end