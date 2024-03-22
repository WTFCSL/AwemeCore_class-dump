//
//     Generated by private class-dump
//

@class ACCEditorVolumeComponent, ACCEditorStickerComponent, ACCEditorMusicComponent;
@protocol ACCEditServiceProtocol;

@interface ACCEditorAssemblerComponent : ACCEditorComponent {
    BOOL _environmentLoad;
    id<ACCEditServiceProtocol> _editService;
    ACCEditorStickerComponent *_stickerComponent;
    ACCEditorVolumeComponent *_volumeComponent;
    ACCEditorMusicComponent *_musicComponent;
}

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCEditorStickerComponent *stickerComponent;
@property (retain, nonatomic) ACCEditorVolumeComponent *volumeComponent;
@property (retain, nonatomic) ACCEditorMusicComponent *musicComponent;
@property (nonatomic) BOOL environmentLoad;

- (id)editService;
- (void)setEditService:(id)arg0;
- (void)configEnvironmentIfNeed;
- (void)setupWithCompletion:(id /* block */)arg0;
- (id)stickerComponent;
- (id)volumeComponent;
- (id)musicComponent;
- (void)setEnvironmentLoad:(BOOL)arg0;
- (void)configEnvironment;
- (BOOL)environmentLoad;
- (void)setStickerComponent:(id)arg0;
- (void)setVolumeComponent:(id)arg0;
- (void)setMusicComponent:(id)arg0;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)initWithServiceProvider:(id)arg0;

@end