//
//     Generated by private class-dump
//

@class NSObject, NSString, AWEAwemeModel, UIView, ACCStickerContainerView, AWEInteractionStickerModel;
@protocol ACCStickerContentProtocol, AWEFeedAlbumStickerDisplayManagerProtocol;

@interface AWEFeedStickerBasicAlbumHandler : NSObject <AWEFeedStickerAlbumDisplayHandler> {
    NSObject<AWEFeedAlbumStickerDisplayManagerProtocol> *_managerDelegate;
    long long index;
    AWEInteractionStickerModel *_sticker;
    ACCStickerContainerView *_stickerContainer;
    AWEAwemeModel *_model;
    NSString *_enterFrom;
    UIView<ACCStickerContentProtocol> *_contentView;
    struct CGSize { double width; double height; } _enlargeTapSize;
}

@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (retain, nonatomic) AWEInteractionStickerModel *sticker;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) struct CGSize { double width; double height; } enlargeTapSize;
@property (weak, nonatomic) NSObject<AWEFeedAlbumStickerDisplayManagerProtocol> *managerDelegate;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplaySticker:(id)arg0;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)stickerWillAppear;
- (void)removeSticker:(BOOL)arg0;
- (BOOL)isFromSearch;
- (id)stickerContainer;
- (void)setStickerContainer:(id)arg0;
- (BOOL)canHandleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)displaySticker:(BOOL)arg0;
- (void)fixStickerLocationIfNeeded;
- (BOOL)shouldFixLocation;
- (BOOL)displayByNative;
- (void)longPressAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })enlargeTapSize;
- (void)setEnlargeTapSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setModel:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)contentView;
- (long long)index;
- (void)setContentView:(id)arg0;
- (void)setSticker:(id)arg0;
- (id)sticker;
- (void)handleTapAtPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)setManagerDelegate:(id)arg0;
- (id)managerDelegate;

@end
