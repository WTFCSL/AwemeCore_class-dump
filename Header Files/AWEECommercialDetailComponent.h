//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEECommercialDetailComponent : AWEUserDetailBaseComponent <AWEECommercialDetailProtocol> {
    BOOL _ecomReflowTracked;
    NSDictionary *_ecomShareTrackParams;
    NSString *_shareObject;
    NSString *_ecomEnterStoreProductId;
}

@property (copy, nonatomic) NSDictionary *ecomShareTrackParams;
@property (nonatomic) BOOL ecomReflowTracked;
@property (copy, nonatomic) NSString *shareObject;
@property (copy, nonatomic) NSString *ecomEnterStoreProductId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)enterFrom;
- (id)shareObject;
- (void)setShareObject:(id)arg0;
- (id)ecomShareTrackParams;
- (void)setEcomShareTrackParams:(id)arg0;
- (void)setEcomReflowTracked:(BOOL)arg0;
- (BOOL)ecomReflowTracked;
- (BOOL)onConfigWithRouterParamDict:(id)arg0;
- (void)setEcomEnterStoreProductId:(id)arg0;
- (id)ecomEnterStoreProductId;
- (id)userID;
- (id)user;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)onInit;

@end
