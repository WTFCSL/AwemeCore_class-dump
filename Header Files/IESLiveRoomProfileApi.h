//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveRoomProfileApi : HTSLiveApi {
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (void)requestCurrentUserFansclubInfoWithFinished:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)arg0;

@end
