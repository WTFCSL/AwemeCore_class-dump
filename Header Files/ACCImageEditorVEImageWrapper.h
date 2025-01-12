//
//     Generated by private class-dump
//

@class VEImage, NSString, UIView;

@interface ACCImageEditorVEImageWrapper : NSObject <ACCImageAlbumEditorProtocol> {
    UIView *_preview;
    VEImage *_imageEditor;
    struct CGPoint { double x; double y; } _previewCenter;
}

@property (retain, nonatomic) VEImage *imageEditor;
@property (nonatomic) struct CGPoint { double x; double y; } previewCenter;
@property (readonly, nonatomic) UIView *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)setRedrawCallback:(id /* block */)arg0 data:(id)arg1;
- (void)renderLayerQueue;
- (void)scaleWithScale:(struct CGSize { double x0; double x1; })arg0 anchor:(struct CGPoint { double x0; double x1; })arg1;
- (void)setComposerSlideFilter:(id)arg0 pathTwo:(id)arg1 intensity:(double)arg2 progress:(double)arg3;
- (void)setColorPrimaries:(unsigned long long)arg0 TransferFunction:(unsigned long long)arg1 YCbCrMatrix:(unsigned long long)arg2;
- (void)removeComposerWithoutUndoWithPath:(id)arg0 tagName:(id)arg1;
- (int)addInfoStickerTemplate:(id)arg0 param:(id)arg1;
- (int)updateInfoStickerTemplateParam:(int)arg0 json:(id)arg1;
- (id)nativeGetInfoStickerTemplateParam:(int)arg0;
- (int)addStickerWithPath:(id)arg0 param:(id)arg1;
- (int)removeStickerWithIndex:(long long)arg0;
- (int)stickerSetScaleWithIndex:(long long)arg0 scale:(struct CGSize { double x0; double x1; })arg1;
- (int)stickerSetPositonWithIndex:(long long)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (int)stickerSetRotationWithIndex:(int)arg0 rotation:(double)arg1;
- (int)stickerSetAlphaWithIndex:(int)arg0 alpha:(double)arg1;
- (int)stickerSetOrderInLayer:(int)arg0 order:(int)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getStickerBoundingBoxWitnIndex:(int)arg0 needScale:(BOOL)arg1;
- (id)getCurrentImage:(BOOL)arg0 isPanoramic:(BOOL)arg1;
- (id)exportTemplateInfoOnlyImage;
- (id)getNLEImageWrapper;
- (BOOL)applyTemplateFile:(id)arg0 diffJson:(id)arg1;
- (id)getNeedDownloadedResource;
- (long long)addTextSticker:(id)arg0 params:(id)arg1;
- (void)setPreviewCenter:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })previewCenter;
- (BOOL)userAddedLayerFlag:(id)arg0;
- (int)updateTextStickerTextParams:(long long)arg0 textParams:(id)arg1;
- (id)initImageEditorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageEditor:(id)arg0;
- (id)imageEditor;
- (void)restoreTemplateDownloaderCache:(id)arg0;
- (void)addImageLayerWithImage:(id)arg0 imagePath:(id)arg1 imageTemplateJsonInfo:(id)arg2 enableHDR:(BOOL)arg3;
- (void)replaceImageLayerWithImage:(id)arg0 imagePath:(id)arg1 imageTemplateJsonInfo:(id)arg2 enableHDR:(BOOL)arg3;
- (void)doAdjustAspectFitWidthTask:(id /* block */)arg0 targetRenderSize:(struct CGSize { double x0; double x1; })arg1;
- (void)enableLensHDR:(BOOL)arg0;
- (void)initLensHDREngine:(id)arg0 count:(int)arg1 infoBuffer:(id)arg2;
- (void)updateImageTemplateInfoIfDownloadSuccess:(BOOL)arg0;
- (id)saveImageTemplateInfoOnly;
- (struct CGSize { double x0; double x1; })getTemplateCanvasSize;
- (void)configPreviewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (id)preview;
- (void)renderEffect;

@end
