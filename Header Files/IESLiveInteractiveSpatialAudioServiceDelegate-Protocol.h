//
//     Generated by private class-dump
//

@protocol IESLiveInteractiveSpatialAudioServiceDelegate <NSObject>

- (void)removeRemotePositionWithLinkMicId:(id)arg0;
- (void)removeAllRemotePosition;
- (id)allInteractUserList;
- (long long)getUserUIPositionWihtID:(id)arg0;
- (long long)getUserAudioKTVPositionWithID:(id)arg0;
- (void)updateSpatialAudioPositionInfo:(id)arg0 linkMicId:(id)arg1 enable:(BOOL)arg2;
- (void)compositingLayout;

@end