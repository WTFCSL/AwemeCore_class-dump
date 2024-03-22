//
//     Generated by private class-dump
//

@class CJPayBizWebViewController, NSString, NSDictionary, WKWebView, NSMutableDictionary, CJPayBaseVerifyManager;

@interface CJPay3DSVerifyModule : NSObject <CJPay3DSVerifyProtocol> {
    CJPayBaseVerifyManager *_verifyManager;
    NSDictionary *_setupDic;
    NSString *_referenceId;
    NSString *_sessionId;
    WKWebView *_dmWebview;
    WKWebView *_setupWebview;
    NSMutableDictionary *_cardToReferenceModel;
    CJPayBizWebViewController *_challengeVC;
    NSMutableDictionary *_cardToBlocks;
}

@property (copy, nonatomic) NSDictionary *setupDic;
@property (copy, nonatomic) NSString *referenceId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) WKWebView *dmWebview;
@property (retain, nonatomic) WKWebView *setupWebview;
@property (retain, nonatomic) NSMutableDictionary *cardToReferenceModel;
@property (retain, nonatomic) CJPayBizWebViewController *challengeVC;
@property (retain, nonatomic) NSMutableDictionary *cardToBlocks;
@property (weak, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerPlugin;

- (void)setup3DSVerify:(id)arg0 completion:(id /* block */)arg1 timeOut:(double)arg2;
- (void)prepareDM;
- (void)challengeFor3DS:(id)arg0 completion:(id /* block */)arg1;
- (id)default3DSRiskInfo;
- (id)buildConfirmRequestParams:(id)arg0;
- (BOOL)currentChannelIsForeignCard;
- (id)verifyManager;
- (void)setVerifyManager:(id)arg0;
- (void)setCardToReferenceModel:(id)arg0;
- (void)setChallengeVC:(id)arg0;
- (id)challengeVC;
- (id)cardToReferenceModel;
- (void)asyncReadContentFrom:(id)arg0 completion:(id /* block */)arg1;
- (void)prepareDMWith:(id)arg0;
- (id)cardToBlocks;
- (void)ddcWithUrl:(id)arg0 token:(id)arg1 completion:(id /* block */)arg2;
- (id)setupDic;
- (id)p_buildWebivew:(id)arg0 completion:(id /* block */)arg1;
- (void)setSetupDic:(id)arg0;
- (id)dmWebview;
- (void)setDmWebview:(id)arg0;
- (id)setupWebview;
- (void)setSetupWebview:(id)arg0;
- (void)setCardToBlocks:(id)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
- (id)sessionId;
- (void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (id)referenceId;
- (void)setReferenceId:(id)arg0;

@end