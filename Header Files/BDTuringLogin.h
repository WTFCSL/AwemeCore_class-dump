//
//     Generated by private class-dump
//

@class BDTuringConfig, NSString, BDTuringLoginModel, NSMutableArray, BDTuringSettings;

@interface BDTuringLogin : NSObject <BDTuringVerifyService> {
    BDTuringConfig *_config;
    BDTuringLoginModel *_loginModel;
    id /* block */ _callback;
    NSString *_appID;
    NSString *_serviceName;
    NSString *_reportURL;
    NSString *_identityDomain;
    BDTuringSettings *_settings;
    NSMutableArray *_handlerArray;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *reportURL;
@property (copy, nonatomic) NSString *identityDomain;
@property (retain, nonatomic) BDTuringSettings *settings;
@property (retain, nonatomic) NSMutableArray *handlerArray;
@property (retain, nonatomic) BDTuringConfig *config;
@property (retain, nonatomic) BDTuringLoginModel *loginModel;
@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loginUtilWithWithConfig:(id)arg0;
+ (id)loginUtilWithAppID:(id)arg0;
+ (void)initialize;

- (id)handlerArray;
- (void)setHandlerArray:(id)arg0;
- (void)bdturingStartForceLogin:(id)arg0;
- (void)bdturingLoginWithCallback:(id /* block */)arg0;
- (id)loginModel;
- (void)setLoginModel:(id)arg0;
- (id)identityDomain;
- (void)setIdentityDomain:(id)arg0;
- (void)setAppID:(id)arg0;
- (void)setConfig:(id)arg0;
- (void)setReportURL:(id)arg0;
- (void).cxx_destruct;
- (void)setSettings:(id)arg0;
- (void)setCallback:(id /* block */)arg0;
- (id)config;
- (id /* block */)callback;
- (id)reportURL;
- (id)settings;
- (id)initWithConfig:(id)arg0;
- (void)addHandler:(id)arg0;
- (id)appID;
- (id)serviceName;
- (void)setServiceName:(id)arg0;

@end
