//
//     Generated by private class-dump
//

@interface ACCCanvasUtils : NSObject

+ (BOOL)enableSinglePhotoCanvasWhatYouSeeIsWhatYouGetWithPublishModel:(id)arg0;
+ (void)resetPreviewEdgeWithProject:(id)arg0 completion:(id /* block */)arg1;
+ (void)setUpCanvasWithPublishModel:(id)arg0 mediaContainerView:(id)arg1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })singlePhotoMediaContainerViewFrameWithImageSize:(struct CGSize { double x0; double x1; })arg0;
+ (void)p_reGenerateCanvasWithPublishModel:(id)arg0 mediaContainerView:(id)arg1;
+ (void)target:(id)arg0 mediaContainerView:(id)arg1;
+ (id)canvasVideoAssetWithPublishModel:(id)arg0 needSave:(BOOL)arg1;
+ (void)setupVideoDurationForVideoAsset:(id)arg0 publishModel:(id)arg1;
+ (id)canvasVideoWithPhoto:(id)arg0 publishModel:(id)arg1 needSave:(BOOL)arg2;
+ (void)p_updateCanvasContentWithPhoto:(id)arg0 publishModel:(id)arg1 needSave:(BOOL)arg2;
+ (struct CGSize { double x0; double x1; })singlePhotoCanvasSizeWithImageSize:(struct CGSize { double x0; double x1; })arg0 mediaContainerViewSize:(struct CGSize { double x0; double x1; })arg1;
+ (struct CGSize { double x0; double x1; })canvasExportSizeWithPublishModel:(id)arg0 mediaContainerView:(id)arg1;
+ (BOOL)isSinglePhotoCanvasWithPublishModel:(id)arg0;
+ (void)configPreviewEdge:(id)arg0 withPublishProject:(id)arg1 nle:(id)arg2 mediaContainerView:(id)arg3;
+ (void)updateCanvasContentWithPhoto:(id)arg0 publishModel:(id)arg1;

@end
