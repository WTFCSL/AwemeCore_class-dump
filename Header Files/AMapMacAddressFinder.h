//
//     Generated by private class-dump
//

@class NSString;

@interface AMapMacAddressFinder : NSObject {
    NSString *_AMF_IPAddress;
    NSString *_AMF_macAddress;
}

@property (copy, nonatomic) NSString *AMF_macAddress;
@property (readonly, nonatomic) NSString *AMF_IPAddress;

+ (id)sharedInstance;

- (id)initWithSignlton;
- (id)_getMacAddressWithIP:(id)arg0;
- (id)AMF_macAddress;
- (id)AMF_IPAddress;
- (void)setAMF_macAddress:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end