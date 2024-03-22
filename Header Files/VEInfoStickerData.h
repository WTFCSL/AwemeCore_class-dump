//
//     Generated by private class-dump
//

@class HTSGLContext, NSMutableArray;

@interface VEInfoStickerData : NSObject {
    HTSGLContext *_htsGLContext;
    NSMutableArray *_infoStickers;
}

@property (retain, nonatomic) NSMutableArray *infoStickers;

- (id)infoStickers;
- (void)setInfoStickers:(id)arg0;
- (void)updateStickerLayers;
- (void)setStickerAbove:(long long)arg0;
- (long long)stickerCount;
- (id)getStickerByID:(long long)arg0;
- (void)addTextureInfoSticker:(id)arg0;
- (id)addSubTextSticker:(long long)arg0;
- (id)addSticker:(id)arg0 stickerID:(long long)arg1 effectInfo:(id)arg2 userInfo:(id)arg3 entityHandle:(void *)arg4;
- (id)addEmojiSticker:(long long)arg0 path:(id)arg1;
- (long long)preAddImageSticker;
- (void)removeSticker:(long long)arg0;
- (void)updateSticker:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)initWithContext:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
