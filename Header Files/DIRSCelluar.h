//
//     Generated by private class-dump
//

@class CTTelephonyNetworkInfo, NSString, NSDictionary;

@interface DIRSCelluar : NSObject {
    id /* block */ _accessTechnologyNotifier;
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
    NSString *_celluarIdeintifier;
    long long _networkType;
    NSDictionary *_carrierDictionary;
}

@property (retain, nonatomic) CTTelephonyNetworkInfo *telephonyNetworkInfo;
@property (copy) NSString *celluarIdeintifier;
@property long long networkType;
@property (copy) NSDictionary *carrierDictionary;
@property (copy, nonatomic) id /* block */ accessTechnologyNotifier;

+ (id)cellular;

- (void)setTelephonyNetworkInfo:(id)arg0;
- (void)_setupAccessTechnologyNotifiers;
- (void)_setupCarrierNotifiers;
- (void)_updateToLatest;
- (void)onAccessTechnologyDidChange;
- (void)_updateCellularIdentifier:(id)arg0;
- (void)_updateCarrier:(id)arg0;
- (void)setCelluarIdeintifier:(id)arg0;
- (void)setCarrierDictionary:(id)arg0;
- (id)celluarIdeintifier;
- (long long)convertNetwork:(id)arg0;
- (id /* block */)accessTechnologyNotifier;
- (void)setAccessTechnologyNotifier:(id /* block */)arg0;
- (id)carrierDictionary;
- (void).cxx_destruct;
- (void)setNetworkType:(long long)arg0;
- (void)commonInit;
- (id)currentRadioAccessTechnology;
- (long long)networkType;
- (id)telephonyNetworkInfo;

@end
