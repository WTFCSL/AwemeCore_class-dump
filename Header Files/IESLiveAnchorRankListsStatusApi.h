//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveAnchorRankListsStatusApi : HTSLiveApi {
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (void)fetchRankListStatusWithCompletion:(id /* block */)arg0;
- (void)updateRankListStatusWithRankName:(id)arg0 status:(long long)arg1 completion:(id /* block */)arg2;
- (void).cxx_destruct;

@end
