//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEPayNativeScanPayManager : NSObject <CJPayAPIDelegate> {
    NSString *_token;
    NSDictionary *_prePayInfoDic;
}

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *prePayInfoDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)onResponse:(id)arg0;
- (void)p_trackEvent:(id)arg0 param:(id)arg1;
- (void)beforeNativeScanPay;
- (void)handleWithCodeAddressInfoStr:(id)arg0;
- (void)afterNativeScanPay;
- (void)setPrePayInfoDic:(id)arg0;
- (id)prePayInfoDic;
- (void)scanPayWithCodeUrl:(id)arg0 token:(id)arg1;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;

@end
