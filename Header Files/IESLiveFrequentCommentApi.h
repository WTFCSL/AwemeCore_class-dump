//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveFrequentCommentApi : HTSLiveApi {
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;

- (id)roomModel;
- (void)setRoomModel:(id)arg0;
- (id)initWithRoomModel:(id)arg0;
- (void)addFrequentCommentWithContent:(id)arg0 completion:(id /* block */)arg1;
- (void)deleteFrequentCommentWithContentID:(id)arg0 callback:(id /* block */)arg1;
- (void)updateFrequentCommentWithContentID:(id)arg0 content:(id)arg1 callback:(id /* block */)arg2;
- (void)sortFrequentCommentWithOrder:(id)arg0 callback:(id /* block */)arg1;
- (void)fetchFrequentCommentsCompletion:(id /* block */)arg0;
- (void)fetchRecommendContentsCompletion:(id /* block */)arg0;
- (void).cxx_destruct;

@end
