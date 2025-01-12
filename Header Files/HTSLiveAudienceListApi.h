//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface HTSLiveAudienceListApi : HTSLiveApi {
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (void)getThisRoomAudienceListWithCompletion:(id /* block */)arg0;
- (void)getCombinedAudienceListWithCompletion:(id /* block */)arg0;
- (void)getThisWeekAudienceListWithCompletion:(id /* block */)arg0;
- (void)getTotalAudienceListWithCompletion:(id /* block */)arg0;
- (void)getVipAudienceListWithCompletion:(id /* block */)arg0;
- (void)getOnlineAudienceListWithCompletion:(id /* block */)arg0;
- (void)getSeqUserAudienceListWithcursor:(unsigned long long)arg0 count:(unsigned long long)arg1 isRefresh:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)requestRankListWithLinkUser:(id)arg0 scene:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;

@end
