//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveConfigurableShortTouchApi : HTSLiveApi {
    id<IESLiveRoomService> _room;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)traceArriveTime:(BOOL)arg0;
- (BOOL)subscribeBackEndDataWithContext:(id)arg0 completion:(id /* block */)arg1;
- (void)realFetchConfigurableShortTouchInfo:(id)arg0 completion:(id /* block */)arg1 immediate:(BOOL)arg2;
- (void)dealShortTouchResponse:(id)arg0 serverTime:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchConfigurableShortTouchInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)dealShortTouchResponse:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
