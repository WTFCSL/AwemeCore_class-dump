//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveUpdateCategoryStore : IESLiveOptCategoryStore {
    id<IESLiveRoomService> _room;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;

- (void)updateFromLiveType:(unsigned long long)arg0 category:(id)arg1 toCategory:(id)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
