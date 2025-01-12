//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, BDCLServiceModel;

@interface BDCLUPnPDevice : NSObject {
    long long _checkCounter;
    BOOL _isMediaRender;
    BOOL _supportSubscriber;
    BOOL _isSubscribed;
    int _customizedServiceVersion;
    NSString *_uuid;
    NSURL *_location;
    NSString *_URLHeader;
    NSString *_friendlyName;
    NSString *_sinkVersion;
    NSString *_modelName;
    NSString *_modelNumber;
    NSString *_deviceType;
    NSString *_modelURL;
    NSString *_manufacturer;
    NSString *_manufacturerURL;
    NSString *_httpHeaderServer;
    NSString *_data;
    NSString *_sinkCustomVersion;
    NSDictionary *_deviceParamsDictionary;
    BDCLServiceModel *_AVTransport;
    BDCLServiceModel *_RenderingControl;
    BDCLServiceModel *_CustomizedService;
    NSString *_subscribeUUID;
    NSString *_ipAddress;
    long long _port;
    NSString *_deviceKey;
}

@property (retain, nonatomic) NSString *ipAddress;
@property (nonatomic) long long port;
@property (retain, nonatomic) NSString *deviceKey;
@property (nonatomic) BOOL isMediaRender;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSURL *location;
@property (copy, nonatomic) NSString *URLHeader;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSString *sinkVersion;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelNumber;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *modelURL;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *manufacturerURL;
@property (copy, nonatomic) NSString *httpHeaderServer;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *sinkCustomVersion;
@property (nonatomic) BOOL supportSubscriber;
@property (copy, nonatomic) NSDictionary *deviceParamsDictionary;
@property (retain, nonatomic) BDCLServiceModel *AVTransport;
@property (retain, nonatomic) BDCLServiceModel *RenderingControl;
@property (retain, nonatomic) BDCLServiceModel *CustomizedService;
@property (nonatomic) long long checkCounter;
@property (nonatomic) int customizedServiceVersion;
@property (copy, nonatomic) NSString *subscribeUUID;
@property (nonatomic) BOOL isSubscribed;

+ (void)setDlnaXmlParserKeyArray:(id)arg0;

- (id)AVTransport;
- (id)RenderingControl;
- (id)URLHeader;
- (void)setURLHeader:(id)arg0;
- (void)setAVTransport:(id)arg0;
- (void)setRenderingControl:(id)arg0;
- (id)deviceParamsDictionary;
- (id)httpHeaderServer;
- (id)manufacturerURL;
- (id)sinkVersion;
- (id)CustomizedService;
- (void)setDeviceParamsDictionary:(id)arg0;
- (void)setSinkVersion:(id)arg0;
- (void)setIsMediaRender:(BOOL)arg0;
- (void)setManufacturerURL:(id)arg0;
- (id)URLHeaderComponents;
- (void)setArray:(id)arg0 withRootElement:(id)arg1;
- (long long)checkCounter;
- (void)setCheckCounter:(long long)arg0;
- (void)setHttpHeaderServer:(id)arg0;
- (BOOL)isMediaRender;
- (id)sinkCustomVersion;
- (void)setSinkCustomVersion:(id)arg0;
- (BOOL)supportSubscriber;
- (void)setSupportSubscriber:(BOOL)arg0;
- (void)setCustomizedService:(id)arg0;
- (int)customizedServiceVersion;
- (void)setCustomizedServiceVersion:(int)arg0;
- (id)subscribeUUID;
- (void)setSubscribeUUID:(id)arg0;
- (void)setModelURL:(id)arg0;
- (id)manufacturer;
- (long long)port;
- (id)init;
- (void)setPort:(long long)arg0;
- (id)data;
- (id)modelURL;
- (id)deviceType;
- (void).cxx_destruct;
- (BOOL)isSubscribed;
- (void)setUuid:(id)arg0;
- (void)setModelName:(id)arg0;
- (void)setData:(id)arg0;
- (id)modelName;
- (id)friendlyName;
- (id)location;
- (id)modelNumber;
- (void)setFriendlyName:(id)arg0;
- (void)setDeviceType:(id)arg0;
- (void)setLocation:(id)arg0;
- (id)description;
- (id)uuid;
- (void)setModelNumber:(id)arg0;
- (void)setManufacturer:(id)arg0;
- (id)ipAddress;
- (void)setIsSubscribed:(BOOL)arg0;
- (id)deviceKey;
- (void)setIpAddress:(id)arg0;
- (void)setDeviceKey:(id)arg0;

@end
