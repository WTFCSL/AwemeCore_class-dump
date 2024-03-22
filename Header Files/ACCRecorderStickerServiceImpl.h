//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel, ACCStickerContainerView, ACCStickerCompoundHandler;

@interface ACCRecorderStickerServiceImpl : NSObject <ACCRecorderStickerServiceProtocol> {
    BOOL containerInteracting;
    id /* block */ _getStickerContainerViewBlock;
    id /* block */ _getViewContainerBlock;
    id /* block */ _forceStoreStickersBlock;
    ACCStickerContainerView *_stickerContainerView;
    ACCStickerCompoundHandler *_compoundHandler;
    AWEVideoPublishViewModel *_repository;
}

@property (weak, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) ACCStickerCompoundHandler *compoundHandler;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) id /* block */ getStickerContainerViewBlock;
@property (copy, nonatomic) id /* block */ getViewContainerBlock;
@property (copy, nonatomic) id /* block */ forceStoreStickersBlock;
@property (nonatomic) BOOL containerInteracting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stickerContainerView;
- (void)setStickerContainerView:(id)arg0;
- (id)compoundHandler;
- (void)registerStickerHandler:(id)arg0;
- (void)addRecorderInteractionStickerInfoToArray:(id)arg0 idx:(long long)arg1;
- (void)toggleForbitHidingStickerContainerView:(BOOL)arg0;
- (void)toggleStickerContainerViewHidden:(BOOL)arg0;
- (void)startEditSticker:(long long)arg0;
- (void)endEditSticker:(long long)arg0;
- (void)recoverStickers;
- (void)updateStickerContainer;
- (void)forceStoreStickers;
- (BOOL)containerInteracting;
- (void)setContainerInteracting:(BOOL)arg0;
- (id)initWithRepository:(id)arg0;
- (void)setCompoundHandler:(id)arg0;
- (void)setGetStickerContainerViewBlock:(id /* block */)arg0;
- (void)setGetViewContainerBlock:(id /* block */)arg0;
- (void)setForceStoreStickersBlock:(id /* block */)arg0;
- (id /* block */)forceStoreStickersBlock;
- (id /* block */)getStickerContainerViewBlock;
- (id /* block */)getViewContainerBlock;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end