//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveItemShareApi : HTSLiveApi {
    id<IESLiveRoomService> _room;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)fetchItemShareListWithCompletion:(id /* block */)arg0;
- (void)shareItemWithItem:(id)arg0 itemType:(id)arg1 targetSchema:(id)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
