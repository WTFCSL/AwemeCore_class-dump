//
//     Generated by private class-dump
//

@protocol IESLiveRevenuePlayRedEnvelopeAPI <NSObject>

- (id)fetchAllRedEnvelopesWithRoomId:(id)arg0;
- (id)fetchGrabRedEnvelopUserListWithEnvelopeID:(id)arg0 type:(id)arg1 dressId:(id)arg2 roomId:(id)arg3;
- (void)requestLuckyboxShortTouchApiWithRoomId:(id)arg0;
- (void)requestFollowInfoWithCompletion:(id /* block */)arg0 room:(id)arg1 user:(id)arg2;
- (void)requestLuckyBoxReceiveApiWithBoxIds:(id)arg0 completion:(id /* block */)arg1;

@end