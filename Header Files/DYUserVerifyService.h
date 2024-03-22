//
//     Generated by private class-dump
//

@class NSString;

@interface DYUserVerifyService : HTSService <AWEUserVerifyProtocol> {
    id /* block */ _qaVerifyCompletionBlock;
}

@property (copy, nonatomic) id /* block */ qaVerifyCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processNewPageFromMiddle:(id)arg0 urlString:(id)arg1 errorType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)handleUpstreamVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePasswordVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleThirdVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleIDVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSMSCodeVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleNotChineseMainLandPhoneWithRawData:(id)arg0 originalParams:(id)arg1 oriURL:(id)arg2 completion:(id /* block */)arg3;
- (void)handleHighRiskCountryWithRawData:(id)arg0 originalParams:(id)arg1 oriURL:(id)arg2 completion:(id /* block */)arg3;
- (void)handleCommonVerifyWithRawData:(id)arg0 originalParams:(id)arg1 oriURL:(id)arg2 completion:(id /* block */)arg3;
- (void)handleBlackSMSCodeVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleQAVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)callQAVerifyCompletionWithVerifyTicket:(id)arg0;
- (void)handleBytedCertWithRawData:(id)arg0 originalParams:(id)arg1 oriURL:(id)arg2 source:(id)arg3 completion:(id /* block */)arg4;
- (void)handleMTSMSCodeVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleEmailVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleBlockVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleVideoRecordAuthWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)trackWithParams:(id)arg0 enterUrl:(id)arg1 isOptionalVerify:(BOOL)arg2;
- (void)handleFaceLivenessVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handleAuthThreeElementVerifyWithRawData:(id)arg0 oriURL:(id)arg1 completion:(id /* block */)arg2;
- (void)handlePushVerifyWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)setQaVerifyCompletionBlock:(id /* block */)arg0;
- (id /* block */)qaVerifyCompletionBlock;
- (void)trackRealNameVerifyShow:(id)arg0;
- (void)trackRealNameVerifyClick:(id)arg0 clickType:(id)arg1;
- (void)trackRealNameVerifyResult:(id)arg0 clickType:(id)arg1 error:(id)arg2;
- (void)addBindPhoneAction:(id)arg0 originalParams:(id)arg1 oriURL:(id)arg2 highRisk:(BOOL)arg3 rawData:(id)arg4 alertView:(id)arg5 completion:(id /* block */)arg6;
- (void)addCertAction:(id)arg0 originalParams:(id)arg1 oriURL:(id)arg2 highRisk:(BOOL)arg3 rawData:(id)arg4 alertView:(id)arg5 completion:(id /* block */)arg6;
- (void).cxx_destruct;

@end
