//
//     Generated by private class-dump
//

@class NSString, IESLiveDressStore;

@interface IESLiveDressFragment : IESLiveRoomComponent <IESLivePrivilegeBuyDressInterface> {
    IESLiveDressStore *_store;
}

@property (retain, nonatomic) IESLiveDressStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)buyDressFormGiftPanel:(id)arg0 trackParams:(id)arg1 rechargeBlock:(id /* block */)arg2 buyCompletion:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;

@end