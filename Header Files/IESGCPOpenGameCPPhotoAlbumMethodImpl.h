//
//     Generated by private class-dump
//

@protocol IESGCPPhotoLibraryService;

@interface IESGCPOpenGameCPPhotoAlbumMethodImpl : IESGCPOpenGameCPPhotoAlbumMethod {
    id<IESGCPPhotoLibraryService> _photoService;
}

@property (retain, nonatomic) id<IESGCPPhotoLibraryService> photoService;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)photoService;
- (void)setPhotoService:(id)arg0;
- (void).cxx_destruct;

@end