//
//     Generated by private class-dump
//

@class HTSLiveScreenChatMessage;

@interface IESLiveScreenChatMessageDanmakuNodeStrategy : IESLiveDanmakuNodeBaseStrategy {
    HTSLiveScreenChatMessage *_screenChatMessage;
}

@property (retain, nonatomic) HTSLiveScreenChatMessage *screenChatMessage;

- (BOOL)isOfficial;
- (long long)buildingMode;
- (id)buildNodeSyncPartOnSyncMode:(BOOL)arg0;
- (id)buildNodeBasePart;
- (void)AsyncBuildNode:(id /* block */)arg0;
- (id)userName:(id)arg0 limitWithLength:(long long)arg1;
- (id)screenChatMessage;
- (void)buildNodeForOfficialPartForNode:(id)arg0;
- (void)buildNodeForAdminPartForNode:(id)arg0 syncBuild:(BOOL)arg1;
- (void)setScreenChatMessage:(id)arg0;
- (BOOL)filter;
- (void).cxx_destruct;
- (BOOL)isLandscape;
- (id)buildNode;

@end
