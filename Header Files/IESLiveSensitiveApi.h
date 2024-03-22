//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveSensitiveApi : HTSLiveApi {
    id<IESLiveRoomService> _room;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (id)initWithRoomId:(id)arg0;
- (void)addSensitiveWord:(id)arg0 completion:(id /* block */)arg1;
- (void)delSensitiveWord:(id)arg0 completion:(id /* block */)arg1;
- (id)paramsWithRoom:(id)arg0;
- (void)getSensitiveWordCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
