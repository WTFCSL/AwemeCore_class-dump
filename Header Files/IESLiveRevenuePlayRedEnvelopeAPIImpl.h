//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveRevenuePlayRedEnvelopeAPIImpl : NSObject <IESLiveRevenuePlayRedEnvelopeAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchAllRedEnvelopesWithRoomId:(id)arg0;
- (id)fetchGrabRedEnvelopUserListWithEnvelopeID:(id)arg0 type:(id)arg1 dressId:(id)arg2 roomId:(id)arg3;
- (void)requestLuckyboxShortTouchApiWithRoomId:(id)arg0;
- (void)requestFollowInfoWithCompletion:(id /* block */)arg0 room:(id)arg1 user:(id)arg2;
- (void)requestLuckyBoxReceiveApiWithBoxIds:(id)arg0 completion:(id /* block */)arg1;

@end
