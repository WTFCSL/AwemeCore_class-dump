//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel;

@interface ACCTeenStickerPannelFilterImpl : NSObject <ACCStickerPannelFilter> {
    AWEVideoPublishViewModel *_repository;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCommerce;
- (id)customPanelName;
- (id)filterTags;
- (BOOL)isAlbumImage;
- (BOOL)isIMPhoto;
- (BOOL)isInfiniImagePrefferd;
- (void).cxx_destruct;
- (void)setRepository:(id)arg0;
- (id)repository;

@end
