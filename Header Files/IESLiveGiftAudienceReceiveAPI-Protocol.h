//
//     Generated by private class-dump
//

@protocol IESLiveGiftAudienceReceiveAPI <NSObject>

- (void)updateAnchorSideAudienceGiftAuthInfoWithRoomID:(id)arg0 anchorID:(id)arg1 authSwitch:(id)arg2 completion:(id /* block */)arg3;
- (void)addAudienceGiftReceiverWithRoomID:(id)arg0 anchorID:(id)arg1 audienceID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchAnchorSideAudienceGiftAuthInfoWithRoomID:(id)arg0 anchorID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchAudienceGiftReceiverListWithRoomID:(id)arg0 anchorID:(id)arg1 fetchFrom:(id)arg2 completion:(id /* block */)arg3;

@end
