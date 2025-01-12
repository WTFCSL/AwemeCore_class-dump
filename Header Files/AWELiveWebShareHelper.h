//
//     Generated by private class-dump
//

@class HTSEventContext, NSString;
@protocol IESLiveRoomService;

@interface AWELiveWebShareHelper : NSObject <IESLiveShareActions> {
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    id /* block */ _completion;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)attachingDIContext;
- (void)processWebShareWithParam:(id)arg0 room:(id)arg1 completion:(id /* block */)arg2;
- (void)sharePanelDidDismiss;
- (void)shareFinishedWithResult:(id)arg0;
- (void)processH5ShareWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void)processLiveShareWithParams:(id)arg0 model:(id)arg1 completion:(id /* block */)arg2;
- (void)callbackWithCode:(long long)arg0 dict:(id)arg1 message:(id)arg2;
- (void)openImBoardWithParams:(id)arg0 model:(id)arg1;
- (void)shareToPlatformWithParams:(id)arg0 model:(id)arg1;
- (void)openSharePanelWithParams:(id)arg0 model:(id)arg1;
- (long long)getShareTypeWithPlatform:(id)arg0;
- (void)showSharePanelWithContentModel:(id)arg0;
- (id)getPosterActivityImageArray:(id)arg0;
- (id)init;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)room;
- (void)setRoom:(id)arg0;

@end
