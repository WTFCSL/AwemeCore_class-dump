//
//     Generated by private class-dump
//

@class NSString, AWEImageAlbumImageModel, AWEAwemeModel;

@interface AFDPaginatedProgressAlbumPreviewImageModel : AWEImageAlbumImageModel <AFDProgressPreviewImageModelProtocol> {
    AWEAwemeModel *awemeModel;
    long long indexInMultiContent;
    AWEImageAlbumImageModel *_imageModel;
}

@property (retain, nonatomic) AWEImageAlbumImageModel *imageModel;
@property (nonatomic) long long indexInMultiContent;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (void)setAwemeModel:(id)arg0;
- (long long)indexInMultiContent;
- (void)setIndexInMultiContent:(long long)arg0;
- (long long)previewImageType;
- (id)imageModel;
- (void)setImageModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWith:(id)arg0;

@end
