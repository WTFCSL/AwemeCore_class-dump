//
//     Generated by private class-dump
//

@class NLEImage_OC;

@interface ACCNLEImageWrapper : NSObject <NSCopying> {
    NLEImage_OC *_NLEImage;
}

@property (retain, nonatomic) NLEImage_OC *NLEImage;

+ (id)restore:(id)arg0;
+ (id)openImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
+ (id)createNLEImageWithWidth:(long long)arg0 height:(long long)arg1;

- (void)setRender:(id)arg0;
- (id)getExportImage;
- (int)applyTemplate:(id)arg0;
- (int)applyTemplateFile:(id)arg0;
- (void)redrawSync;
- (int)setRedrawCallback:(id /* block */)arg0 data:(id)arg1;
- (void)detachRender;
- (int)convertToNLEPoint:(struct CGPoint { double x0; double x1; } *)arg0;
- (int)convertToSurfacePoint:(struct CGPoint { double x0; double x1; } *)arg0;
- (id)getLayers;
- (void)deleteLayer:(id)arg0;
- (int)moveLayerOnTop:(id)arg0;
- (int)getLayerBounds:(id)arg0 bounds:(struct CGPoint { double x0; double x1; }[4])arg1;
- (int)getLayerBoundsInSurface:(id)arg0 bounds:(struct CGPoint { double x0; double x1; }[4])arg1;
- (void)setImageLayerTransformContent:(BOOL)arg0 redrawSync:(BOOL)arg1;
- (id)getResources;
- (id)getMainImageLayer;
- (int)scaleCanvas:(struct CGPoint { double x0; double x1; })arg0;
- (int)getLayerIndexInGroup:(id)arg0;
- (void)setText:(id)arg0 text:(id)arg1;
- (id)getLayerByLayerId:(id)arg0;
- (int)moveLayer:(id)arg0 destGroupId:(id)arg1 destToIndex:(long long)arg2;
- (struct CGPoint { double x0; double x1; })getCanvasScale;
- (int)addLayer:(id)arg0 parentId:(id)arg1;
- (int)addLayer:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (void)moveLayer:(id)arg0 point:(struct CGPoint { double x0; double x1; })arg1;
- (double)getCanvasWidth;
- (double)getCanvasHeight;
- (void)rotateLayer:(id)arg0 rotate:(double)arg1;
- (id)saveCurrentNLEImage;
- (id)NLEImage;
- (void)setNLEImage:(id)arg0;
- (struct CGPoint { double x0; double x1; })getCanvasPosition;
- (id)getLayerAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)exportImageToPath:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)layout;
- (void)dealloc;
- (int)updateLayer:(id)arg0;
- (int)addLayer:(id)arg0;
- (void)redraw;

@end
