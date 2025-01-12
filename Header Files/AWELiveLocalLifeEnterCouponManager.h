//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, AWELiveXBridgeEventSubscriber;
@protocol AWEPOILiveEnterCouponDelegate;

@interface AWELiveLocalLifeEnterCouponManager : NSObject <AWEPOILiveEnterCouponService> {
    id<AWEPOILiveEnterCouponDelegate> _delegate;
    AWELiveXBridgeEventSubscriber *_couponListSubscriber;
    AWELiveXBridgeEventSubscriber *_couponChangeSubscriber;
    NSArray *_couponList;
    NSDictionary *_collectedCouponMap;
}

@property (retain, nonatomic) AWELiveXBridgeEventSubscriber *couponListSubscriber;
@property (retain, nonatomic) AWELiveXBridgeEventSubscriber *couponChangeSubscriber;
@property (retain, nonatomic) NSArray *couponList;
@property (retain, nonatomic) NSDictionary *collectedCouponMap;
@property (weak, nonatomic) id<AWEPOILiveEnterCouponDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)couponList;
- (void)setCouponList:(id)arg0;
- (void)pickAndCollectCouponWithLiveRoomParams:(id)arg0 successBlock:(id /* block */)arg1;
- (id)collectedCouponList;
- (id)allCouponList;
- (void)openLiveLifePopup:(id)arg0;
- (void)addEnterCouponNotification;
- (void)receiveEnterCouponListInfo:(id)arg0;
- (void)setCouponListSubscriber:(id)arg0;
- (void)receiveEnterCouponChangeInfo:(id)arg0;
- (void)setCouponChangeSubscriber:(id)arg0;
- (void)mergeCollectedCouponWithList:(id)arg0;
- (id)collectedCouponMap;
- (void)setCollectedCouponMap:(id)arg0;
- (id)couponListSubscriber;
- (id)couponChangeSubscriber;
- (void)collectCouponResultTrack:(id)arg0 couponType:(long long)arg1 success:(BOOL)arg2 text:(id)arg3;
- (void)markCouponCollectedWithKeyCouponId:(id)arg0 couponInfo:(id)arg1;
- (void)postEnterCouponChangeNoticationWithCouponInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)unsubscribe;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
