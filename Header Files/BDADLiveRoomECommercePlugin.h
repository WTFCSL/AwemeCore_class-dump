//
//     Generated by private class-dump
//

@class BDADPreviewToRoomModel, BDLiveCommerceFragment, NSString;

@interface BDADLiveRoomECommercePlugin : NSObject <BDADLiveRoomPlugin> {
    BDADPreviewToRoomModel *_modelToLiveRoom;
    BDLiveCommerceFragment *_component;
}

@property (retain, nonatomic) BDADPreviewToRoomModel *modelToLiveRoom;
@property (weak, nonatomic) BDLiveCommerceFragment *component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)arg0;
- (id)modelToLiveRoom;
- (void)setModelToLiveRoom:(id)arg0;
- (void)fetchAdCouponForAudience;
- (void)fetchNonAdCouponForAudience;
- (void)fetchNonAdCouponForAudienceInnerLive;
- (void)requestLiveAdCouponWithParam:(id)arg0;
- (id)itemExplicitInfoDict;
- (id)enterLiveRoomData;
- (BOOL)shouldRecordNonAdAwemeModelToLiveRoomCouponToken;
- (void).cxx_destruct;
- (id)component;
- (void)setComponent:(id)arg0;

@end
