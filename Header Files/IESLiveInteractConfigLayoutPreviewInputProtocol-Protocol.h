//
//     Generated by private class-dump
//

@protocol IESLivePlayerProtocol;

@protocol IESLiveInteractConfigLayoutPreviewInputProtocol <IESLiveInteractConfigLayoutContainerAdjustable>

@property (nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (nonatomic) long long contentMode;
@property (weak, nonatomic) id<IESLivePlayerProtocol> previewStreamPlayer;

- (id)previewStreamPlayer;
- (void)setPreviewStreamPlayer:(id)arg0;
- (void)setContentMode:(long long)arg0;
- (long long)contentMode;
- (struct CGSize { double x0; double x1; })mediaSize;
- (void)setMediaSize:(struct CGSize { double x0; double x1; })arg0;

@end
