//
//     Generated by private class-dump
//

@interface AFDMCEditNLEHelper : NSObject

+ (id)makeVideoSegmentWithImage:(id)arg0 path:(id)arg1;
+ (id)createNLEInterface;
+ (void)addNLEMainVideoOrImageResources:(id)arg0 WithNLEInterface:(id)arg1 completion:(id /* block */)arg2;
+ (void)addImageStickerSlot:(id)arg0 WithNLEInterface:(id)arg1 completion:(id /* block */)arg2;
+ (void)removeTextStickerFromNLE:(id)arg0 completion:(id /* block */)arg1;
+ (void)setCanvasSize:(struct CGSize { double x0; double x1; })arg0 WithNLEInterface:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)isNLEContainMainTrack:(id)arg0;
+ (id)getCanvasColorFromtNLE:(id)arg0;

@end