//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDPBindingConectedWifiResult : NSObject {
    NSString *_SSID;
    NSString *_BSSID;
    NSNumber *_secure;
    NSNumber *_signalStrength;
}

@property (copy, nonatomic) NSString *SSID;
@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) NSNumber *secure;
@property (copy, nonatomic) NSNumber *signalStrength;

- (id)BSSID;
- (void)setSecure:(id)arg0;
- (void).cxx_destruct;
- (void)setBSSID:(id)arg0;
- (void)setSignalStrength:(id)arg0;
- (id)secure;
- (id)signalStrength;
- (id)SSID;
- (void)setSSID:(id)arg0;

@end
