//
//     Generated by private class-dump
//

@interface ACCLiveStickerConfig : ACCCommonStickerConfig {
    BOOL _isImageTextSticker;
    id /* block */ _editLive;
    id /* block */ _editTitle;
}

@property (nonatomic) BOOL isImageTextSticker;
@property (copy, nonatomic) id /* block */ editLive;
@property (copy, nonatomic) id /* block */ editTitle;

- (void)setEditTitle:(id /* block */)arg0;
- (id /* block */)editTitle;
- (id)bubbleActionList;
- (BOOL)isImageTextSticker;
- (id /* block */)editLive;
- (void)setIsImageTextSticker:(BOOL)arg0;
- (void)setEditLive:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;

@end
