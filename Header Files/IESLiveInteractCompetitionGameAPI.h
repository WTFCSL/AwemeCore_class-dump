//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveInteractCompetitionGameAPI : HTSLiveApi {
    id<IESLiveRoomService> _room;
}

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (id)initWithRoom:(id)arg0 DIContext:(id)arg1;
- (void)setUser:(id)arg0 asPerformerWithCallback:(id /* block */)arg1;
- (void)unsetPerformer:(id)arg0 callback:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
