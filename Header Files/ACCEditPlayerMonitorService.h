//
//     Generated by private class-dump
//

@class NSString, VEEditorSession;

@interface ACCEditPlayerMonitorService : NSObject <ACCEditBuildListener, ACCEditPlayerMonitorProtocol> {
    VEEditorSession *_player;
}

@property (weak, nonatomic) VEEditorSession *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEditSessionProvider:(id)arg0;
- (void)inspectAssetIfNeeded;
- (void)onEditSessionInit:(id)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)player;

@end
