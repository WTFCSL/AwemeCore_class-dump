//
//     Generated by private class-dump
//

@protocol IESLivePhotoLibraryService;

@interface IESLiveOpenMultiSelectPhotoLibraryMethodImpl : IESLiveOpenMultiSelectPhotoLibraryMethod {
    id<IESLivePhotoLibraryService> _photoService;
}

@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)photoService;
- (void)setPhotoService:(id)arg0;
- (void).cxx_destruct;

@end
