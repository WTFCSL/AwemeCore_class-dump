//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCVideoCoverModernEditorSessionProtocol;

@interface ACCVideoCoverEditTemplateWrapper : NSObject <ACCVideoCoverEditBuildListener, ACCVideoCoverEditTemplateProtocol> {
    id<ACCVideoCoverModernEditorSessionProtocol> _player;
}

@property (weak, nonatomic) id<ACCVideoCoverModernEditorSessionProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEditSessionProvider:(id)arg0;
- (id)getNleWrapper;
- (void)updateTemplateInfoAfterDownloadIfSuccess:(BOOL)arg0 downloadTemplateCache:(id)arg1 callBack:(id /* block */)arg2 data:(id)arg3;
- (void)updateOriginImageInfoForTemplate;
- (BOOL)applyTemplateFile:(id)arg0 diffJson:(id)arg1;
- (id)getNeedDownloadedResource;
- (id)getNleImageAlbumEditor;
- (void)setPlayerCenterOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)onEditSessionInit:(id)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)player;

@end