//
//     Generated by private class-dump
//

@class CJPayBDCreateOrderResponse, NSDictionary, CJPayDefaultChannelShowConfig, UIViewController;
@protocol CJPayBaseLoadingProtocol;

@interface CJPayFrontCashierContext : NSObject {
    BOOL _hasChangePayMethod;
    id /* block */ _latestOrderResponseBlock;
    CJPayDefaultChannelShowConfig *_defaultConfig;
    NSDictionary *_createOrderParams;
    NSDictionary *_confirmRequestParams;
    id /* block */ _changeSelectConfigBlock;
    id /* block */ _gotoCardListBlock;
    id /* block */ _extCallback;
    UIViewController<CJPayBaseLoadingProtocol> *_homePageVC;
    id /* block */ _latestNotSufficientFundIds;
    NSDictionary *_extParams;
}

@property (readonly, nonatomic) CJPayBDCreateOrderResponse *orderResponse;
@property (copy, nonatomic) id /* block */ latestOrderResponseBlock;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *defaultConfig;
@property (copy, nonatomic) NSDictionary *createOrderParams;
@property (copy, nonatomic) NSDictionary *confirmRequestParams;
@property (copy, nonatomic) id /* block */ changeSelectConfigBlock;
@property (copy, nonatomic) id /* block */ gotoCardListBlock;
@property (copy, nonatomic) id /* block */ extCallback;
@property (weak, nonatomic) UIViewController<CJPayBaseLoadingProtocol> *homePageVC;
@property (copy, nonatomic) id /* block */ latestNotSufficientFundIds;
@property (copy, nonatomic) NSDictionary *extParams;
@property (readonly, nonatomic) BOOL isPreStandardDesk;
@property (readonly, nonatomic) BOOL isNeedResultPage;
@property (nonatomic) BOOL hasChangePayMethod;

- (id)extParams;
- (void)setExtParams:(id)arg0;
- (id)homePageVC;
- (id)orderResponse;
- (id /* block */)extCallback;
- (id /* block */)latestNotSufficientFundIds;
- (id /* block */)changeSelectConfigBlock;
- (id)confirmRequestParams;
- (id /* block */)gotoCardListBlock;
- (void)setHomePageVC:(id)arg0;
- (id)createOrderParams;
- (BOOL)hasChangePayMethod;
- (void)setHasChangePayMethod:(BOOL)arg0;
- (void)setLatestOrderResponseBlock:(id /* block */)arg0;
- (id /* block */)latestOrderResponseBlock;
- (BOOL)isPreStandardDesk;
- (BOOL)isNeedResultPage;
- (void)setCreateOrderParams:(id)arg0;
- (void)setConfirmRequestParams:(id)arg0;
- (void)setChangeSelectConfigBlock:(id /* block */)arg0;
- (void)setGotoCardListBlock:(id /* block */)arg0;
- (void)setExtCallback:(id /* block */)arg0;
- (void)setLatestNotSufficientFundIds:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)defaultConfig;
- (void)setDefaultConfig:(id)arg0;

@end