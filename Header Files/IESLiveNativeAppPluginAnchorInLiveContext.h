//
//     Generated by private class-dump
//

@class HTSEventContext, ShelfInfo, IESLiveNativeAppApi, IESLiveComponentContext, NSString;
@protocol IESLiveRoomService;

@interface IESLiveNativeAppPluginAnchorInLiveContext : NSObject <IESLiveNativeAppPluginContext> {
    long long sceneType;
    IESLiveComponentContext *componentContext;
    HTSEventContext *trackContext;
    ShelfInfo *_shelfInfo;
    IESLiveNativeAppApi *_networkAPI;
    id<IESLiveRoomService> _roomInfo;
}

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (retain, nonatomic) id<IESLiveRoomService> roomInfo;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) IESLiveNativeAppApi *networkAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)castedContext:(id)arg0;

- (id)roomInfo;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)setRoomInfo:(id)arg0;
- (id)shelfInfo;
- (void)setShelfInfo:(id)arg0;
- (void)updateShelfInfo:(id)arg0 isReplace:(BOOL)arg1 at:(const char *)arg2;
- (id)networkAPI;
- (void).cxx_destruct;
- (long long)sceneType;
- (void)setSceneType:(long long)arg0;

@end
