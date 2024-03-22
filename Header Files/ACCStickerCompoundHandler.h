//
//     Generated by private class-dump
//

@class NSArray, NSMutableArray, NSString;

@interface ACCStickerCompoundHandler : ACCStickerHandler <ACCStickerCompoundHandler> {
    NSMutableArray *_internalHandlers;
}

@property (retain, nonatomic) NSMutableArray *internalHandlers;
@property (readonly, nonatomic) NSArray *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compoundHandler;

- (id)stickerContainerView;
- (void)expressSticker:(id)arg0;
- (void)addInteractionStickerInfoToArray:(id)arg0 idx:(long long)arg1;
- (void)setUiContainerView:(id)arg0;
- (void)setStickerContainerLoader:(id /* block */)arg0;
- (void)apply:(id)arg0 index:(unsigned long long)arg1;
- (BOOL)canHandleSticker:(id)arg0;
- (BOOL)canRecoverSticker:(id)arg0;
- (void)recoverSticker:(id)arg0;
- (void)expressSticker:(id)arg0 onCompletion:(id /* block */)arg1;
- (void)applyAsNleVirtualSticker:(id)arg0 index:(unsigned long long)arg1;
- (void)setEditSticker:(id)arg0;
- (void)updateSticker:(long long)arg0 withNewId:(long long)arg1;
- (id)internalHandlers;
- (void)setInternalHandlers:(id)arg0;
- (id)handlers;
- (void).cxx_destruct;
- (void)finish;
- (void)removeHandler:(id)arg0;
- (void)setPlayer:(id)arg0;
- (void)addHandler:(id)arg0;
- (void)reset;
- (void)setLogger:(id)arg0;

@end