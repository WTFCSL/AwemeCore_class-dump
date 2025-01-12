//
//     Generated by private class-dump
//

@protocol ACCStickerPlayerApplying <NSObject>

@property (readonly, nonatomic) double currentPlayerTime;

- (struct CGSize { double x0; double x1; })getstickerEditBoxSize:(long long)arg0;
- (struct CGSize { double x0; double x1; })getInfoStickerSize:(long long)arg0;
- (void)setStickerLayer:(long long)arg0 layer:(long long)arg1;
- (void)setSticker:(long long)arg0 startTime:(double)arg1 duration:(double)arg2;
- (void)removeInfoSticker:(long long)arg0;
- (void)setStickerScale:(long long)arg0 scale:(double)arg1;
- (void)setSticker:(long long)arg0 alpha:(double)arg1;
- (long long)addTextStickerWithUserInfo:(id)arg0;
- (void)setBrushCanvasAlpha:(double)arg0;
- (long long)currentBrushNumber;
- (void)setSticker:(long long)arg0 offsetX:(double)arg1 offsetY:(double)arg2;
- (void)setStickerAbove:(long long)arg0;
- (id)videoData;
- (void)continuePlay;
- (void)resetPlayerWithViews:(id)arg0;
- (double)currentPlayerTime;
- (void)setStickerEditMode:(BOOL)arg0;
- (id)previewEdge;
- (void)getStickerId:(long long)arg0 props:(id)arg1;
- (void)setHighFrameRateRender:(BOOL)arg0;
- (void)setAudioClipRange:(id)arg0 forAudioAsset:(id)arg1;
- (void)updateVideoData:(id)arg0 mvModel:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)resetPlayerWithView:(id)arg0;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)seekToTimeAndRender:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completionHandler:(id /* block */)arg1;
- (void)getSourcePreviewImageAtTime:(double)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)setSticker:(long long)arg0 offsetX:(double)arg1 offsetY:(double)arg2 angle:(double)arg3 scale:(double)arg4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (BOOL)needAdaptPlayer;
- (long long)addInfoSticker:(id)arg0 URS:(id)arg1 withEffectInfo:(id)arg2 userInfo:(id)arg3 alpha:(double)arg4;
- (void)setStickerAboveForPoiSticker:(long long)arg0;
- (void)setTextSticker:(long long)arg0 textParams:(id)arg1;
- (long long)addVirtualStickerWithUserInfo:(id)arg0;
- (double)stickerInitialEndTime;
- (id)calculateStickerLocationForGlobal:(id)arg0;
- (id)resetStickerLocation:(id)arg0 isRecover:(BOOL)arg1;
- (void)recoverLocation:(id)arg0;
- (void)removeStickerWithType:(unsigned long long)arg0;
- (void)setFixTopInfoSticker:(long long)arg0;
- (void)setSticker:(long long)arg0 angle:(double)arg1;
- (void)revertStickerLocationToRecover:(id)arg0;
- (long long)globalAddInfoSticker:(id)arg0 URS:(id)arg1 withEffectInfo:(id)arg2 userInfo:(id)arg3;
- (void)play;
- (void)pause;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end
