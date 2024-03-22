//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveNoticeApi : HTSLiveApi {
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (void)postTimeLimitBlockFinishedWithKey:(id)arg0;
- (void)rejectEducationLearningWithTaskID:(id)arg0 userAction:(long long)arg1 completion:(id /* block */)arg2;
- (void)sendDeblockMessage;
- (void)getLatestBanRecordWithBanType:(long long)arg0 finished:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)initWithRoom:(id)arg0;

@end