//
//     Generated by private class-dump
//

@protocol IESLiveRoomService;

@interface IESLiveKTVDecorateApi : HTSLiveApi {
    id<IESLiveRoomService> _room;
}

@property (weak, nonatomic) id<IESLiveRoomService> room;

- (void)handleApi:(id)arg0 params:(id)arg1 response:(id)arg2;
- (void)changeDress:(struct KTVDecorateChangeDressParams { int x0; id x1; id x2; int x3; BOOL x4; long long x5; int x6; })arg0 completion:(id /* block */)arg1;
- (void)wearMidiSkin:(long long)arg0 completion:(id /* block */)arg1;
- (void)getTagListwithMode:(int)arg0 completion:(id /* block */)arg1;
- (void)getMidiListWithMode:(int)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
