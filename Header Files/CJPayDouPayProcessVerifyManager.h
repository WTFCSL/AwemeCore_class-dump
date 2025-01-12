//
//     Generated by private class-dump
//

@class CJPaySkipPwdConfirmHalfPageViewController, NSDictionary, CJPayPopUpBaseViewController, CJPayDouPayProcessVerifyManagerQueen;
@protocol CJPayBaseLoadingProtocol;

@interface CJPayDouPayProcessVerifyManager : CJPayBaseVerifyManager {
    NSDictionary *_extParams;
    unsigned long long _lynxBindCardBizScence;
    CJPayDouPayProcessVerifyManagerQueen *_queen;
    CJPayPopUpBaseViewController<CJPayBaseLoadingProtocol> *_skipPwdVC;
    CJPaySkipPwdConfirmHalfPageViewController<CJPayBaseLoadingProtocol> *_skipPwdHalfPageVC;
}

@property (retain, nonatomic) CJPayDouPayProcessVerifyManagerQueen *queen;
@property (weak, nonatomic) CJPayPopUpBaseViewController<CJPayBaseLoadingProtocol> *skipPwdVC;
@property (weak, nonatomic) CJPaySkipPwdConfirmHalfPageViewController<CJPayBaseLoadingProtocol> *skipPwdHalfPageVC;
@property (copy, nonatomic) NSDictionary *extParams;
@property (nonatomic) unsigned long long lynxBindCardBizScence;

+ (id)managerWith:(id)arg0;

- (id)extParams;
- (void)setExtParams:(id)arg0;
- (void)onBindCardAndPayAction;
- (id)queen;
- (void)setLynxBindCardBizScence:(unsigned long long)arg0;
- (id)buildConfirmRequestParamsByCurPayChannel;
- (void)confirmRequestSuccess:(id)arg0 withChannelType:(unsigned long long)arg1;
- (id)verifyManagerQueen;
- (void)setQueen:(id)arg0;
- (id)otherExtsParamsForQueryOrder;
- (unsigned long long)lynxBindCardBizScence;
- (void)gotoBindCardWithCompletion:(id /* block */)arg0;
- (id)getPerformanceInfo;
- (void)p_bindCardAction;
- (void)p_secondaryConfirm;
- (void)p_closeBindCardWithObject:(unsigned long long)arg0;
- (id)p_confirmModel:(id)arg0;
- (void)setSkipPwdVC:(id)arg0;
- (void)setSkipPwdHalfPageVC:(id)arg0;
- (id)skipPwdHalfPageVC;
- (id)skipPwdVC;
- (void).cxx_destruct;

@end
