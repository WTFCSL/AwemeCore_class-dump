//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPassportUtils : NSObject <AWEPassportUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackData:(id)arg0 logTypeStr:(id)arg1;
+ (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
+ (BOOL)isCurrentLanguage:(id)arg0;
+ (void)trackEvent:(id)arg0 params:(id)arg1 needStagingFlag:(BOOL)arg2;
+ (id)stringForCarrierType:(long long)arg0;
+ (id)translateString:(id)arg0;
+ (void)setupImplementation:(id)arg0;
+ (id)stringValueForCarrierType:(long long)arg0;
+ (id)currentCarrierNetworkType;
+ (id)currentNetworkType;
+ (id)currentLanguage;

@end
