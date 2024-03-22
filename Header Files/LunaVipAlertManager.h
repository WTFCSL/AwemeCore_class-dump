//
//     Generated by private class-dump
//

@class NSString, AWEStorage;

@interface LunaVipAlertManager : NSObject <BDXContainerLifecycleProtocol> {
    BOOL _forbidShowInterceptViewFlag;
    BOOL _forbidShowVipPopView;
    BOOL _isPopupShowing;
    NSString *_lastPlayId;
    AWEStorage *_storage;
}

@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) BOOL isPopupShowing;
@property (nonatomic) BOOL forbidShowInterceptViewFlag;
@property (nonatomic) BOOL forbidShowVipPopView;
@property (retain, nonatomic) NSString *lastPlayId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)miniLunaCommerceOn;
+ (id)shared;

- (void)containerWillDestory:(id)arg0;
- (void)containerViewControllerViewDidDisAppear:(id)arg0;
- (void)setForbidShowInterceptViewFlag:(BOOL)arg0;
- (void)setForbidShowVipPopView:(BOOL)arg0;
- (BOOL)needVipIntercept:(id)arg0;
- (void)showVipPayInterceptViewFrom:(id)arg0 model:(id)arg1 eventParams:(id)arg2 completion:(id /* block */)arg3 actionBlock:(id /* block */)arg4;
- (id)lastPlayId;
- (void)showCommercePopupViewNeedLogin:(BOOL)arg0 model:(id)arg1 eventParams:(id)arg2;
- (BOOL)forbidShowInterceptViewFlag;
- (void)setLastPlayId:(id)arg0;
- (id)p_currentDay;
- (BOOL)isPopupShowing;
- (BOOL)forbidShowVipPopView;
- (id)p_cacheKey;
- (void)showCommercePopupViewNeedLogin:(BOOL)arg0 model:(id)arg1 eventParams:(id)arg2 completion:(id /* block */)arg3;
- (void)setIsPopupShowing:(BOOL)arg0;
- (id)p_popupUrl;
- (BOOL)canShowPopupView;
- (void)playInterceptPopupShowed;
- (void)prefetchLynxPopupView;
- (void)setStorage:(id)arg0;
- (void).cxx_destruct;
- (id)storage;
- (void)setup;

@end