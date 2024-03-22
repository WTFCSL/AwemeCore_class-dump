//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;
@protocol ACCStickerPannelFilterDataSource;

@interface ACCStickerPannelFilterImpl : NSObject <ACCStickerPannelFilter> {
    id<ACCStickerPannelFilterDataSource> _dataSource;
    AWEVideoPublishViewModel *_repository;
}

@property (weak, nonatomic) id<ACCStickerPannelFilterDataSource> dataSource;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCommerce;
- (id)filterTags;
- (BOOL)isAlbumImage;
- (BOOL)isIMPhoto;
- (BOOL)isInfiniImagePrefferd;
- (id)ultraCreationBlockStickers;
- (id)fansInteractionStickerTags;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end