//
//     Generated by private class-dump
//

@class NSString, BDXBridgeAuthModelV2BizConfig, BDXBridgeLynxSignVerifierContext, BDXBridgeLynxSign;

@interface BDXBridgeLynxSignVerifier : NSObject {
    BOOL _isSignParsed;
    BOOL _isDegrade;
    BDXBridgeLynxSignVerifierContext *_context;
    BDXBridgeAuthModelV2BizConfig *_tasmBizConfig;
    NSString *_feID;
    NSString *_verifyUrl;
    BDXBridgeLynxSign *_lynxSign;
    NSString *_authNamespace;
    NSString *_tasmFeId;
    unsigned long long _tasmSignVerifyType;
}

@property (retain, nonatomic) BDXBridgeLynxSignVerifierContext *context;
@property (retain, nonatomic) BDXBridgeLynxSign *lynxSign;
@property (nonatomic) BOOL isSignParsed;
@property (copy, nonatomic) NSString *authNamespace;
@property (copy, nonatomic) NSString *tasmFeId;
@property (copy, nonatomic) NSString *feID;
@property (copy, nonatomic) BDXBridgeAuthModelV2BizConfig *tasmBizConfig;
@property (copy, nonatomic) NSString *verifyUrl;
@property (nonatomic) unsigned long long tasmSignVerifyType;
@property (nonatomic) BOOL isDegrade;

- (void)setLynxSign:(id)arg0;
- (id)lynxSign;
- (BOOL)isDegrade;
- (void)setIsDegrade:(BOOL)arg0;
- (id)contentV2;
- (id)authNamespace;
- (void)setAuthNamespace:(id)arg0;
- (id)feID;
- (void)setFeID:(id)arg0;
- (id)bypassSignVerifyList;
- (id)authManager;
- (id)_degradedTasmBizAuthConfig;
- (void)setTasmBizConfig:(id)arg0;
- (void)setTasmSignVerifyType:(unsigned long long)arg0;
- (BOOL)enableLynxSignVerify;
- (BOOL)internalVerify;
- (id)tasmFeId;
- (id)verifyUrl;
- (id)tasmBizConfig;
- (unsigned long long)tasmSignVerifyType;
- (void)reportWithEventName:(id)arg0 metric:(id)arg1 category:(id)arg2;
- (BOOL)isSignParsed;
- (id)_parseResourceSignData;
- (void)setIsSignParsed:(BOOL)arg0;
- (void)setTasmFeId:(id)arg0;
- (BOOL)_verifyWithSign;
- (id)_currentVerifyUrl;
- (void)setVerifyUrl:(id)arg0;
- (BOOL)_verifyWithURL;
- (struct __SecKey { } *)_createSecKeyWithPublicKey:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (BOOL)verify;
- (id)verifyResult;

@end
