//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, CJPayDySignPayChooseCardViewController, CJPayBDCreateOrderResponse;
@protocol CJPayChooseDyPayMethodDelegate;

@interface CJPaySignPayChoosePayMethodManager : NSObject {
    BOOL _hasChangePayMethod;
    BOOL _closeChoosePageAfterChangeMethod;
    BOOL _needUpdatePayMethodList;
    id<CJPayChooseDyPayMethodDelegate> _delegate;
    CJPayBDCreateOrderResponse *_response;
    double _height;
    CJPayDySignPayChooseCardViewController *_signPayChoosePayMethodVC;
    NSArray *_payMethodList;
    NSDictionary *_indexLinkPayMethodGroupModelDict;
}

@property (retain, nonatomic) CJPayDySignPayChooseCardViewController *signPayChoosePayMethodVC;
@property (copy, nonatomic) NSArray *payMethodList;
@property (copy, nonatomic) NSDictionary *indexLinkPayMethodGroupModelDict;
@property (weak, nonatomic) id<CJPayChooseDyPayMethodDelegate> delegate;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (nonatomic) double height;
@property (nonatomic) BOOL hasChangePayMethod;
@property (nonatomic) BOOL closeChoosePageAfterChangeMethod;
@property (nonatomic) BOOL needUpdatePayMethodList;

+ (id)getPayMode:(unsigned long long)arg0;
+ (void)setMemberFirstPayMethod:(id)arg0 needLoading:(BOOL)arg1 completion:(id /* block */)arg2;

- (void)p_bindcardSuccess;
- (void)setNeedUpdatePayMethodList:(BOOL)arg0;
- (BOOL)needUpdatePayMethodList;
- (id)p_getPayMethodList;
- (BOOL)hasChangePayMethod;
- (void)setHasChangePayMethod:(BOOL)arg0;
- (BOOL)closeChoosePageAfterChangeMethod;
- (id)initWithOrderResponse:(id)arg0;
- (void)trackerWithEventName:(id)arg0 params:(id)arg1;
- (void)setCloseChoosePageAfterChangeMethod:(BOOL)arg0;
- (void)p_activateCreditAndPay:(id)arg0 completion:(id /* block */)arg1;
- (void)getChoosePayMethodList:(id /* block */)arg0;
- (void)closeSignPayChooseDyPayMethod;
- (void)gotoSignPayChooseDyPayMethod;
- (id)p_createSignPayChoosePayMethodVC;
- (void)setSignPayChoosePayMethodVC:(id)arg0;
- (id)signPayChoosePayMethodVC;
- (void)p_tryPushSignPayChoosePayMethodVC:(id)arg0;
- (id)payMethodList;
- (id)p_buildPayMethodListWithResponse;
- (void)setPayMethodList:(id)arg0;
- (id)p_buildPayMethodListInGroup:(id)arg0 showConfigDict:(id)arg1;
- (void)setIndexLinkPayMethodGroupModelDict:(id)arg0;
- (void)p_didSelectSignPayPayMethod:(id)arg0 loadingView:(id)arg1;
- (void)p_didChangeSignPayMethod:(id)arg0 loadingView:(id)arg1 needRefreshOrder:(BOOL)arg2;
- (void)p_setMemberFirstPayMethod:(id)arg0 loadingView:(id)arg1 needRefreshOrder:(BOOL)arg2;
- (id)p_setFirstPayMethodRequestParamWithConfig:(id)arg0;
- (void)p_modifyPayMethodGroupSort:(id)arg0;
- (id)p_payContextWithConfig:(id)arg0;
- (id)indexLinkPayMethodGroupModelDict;
- (id)p_extParams;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (double)height;
- (id)response;
- (id)delegate;
- (void)setHeight:(double)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;

@end
