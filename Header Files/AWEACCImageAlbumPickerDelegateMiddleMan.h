//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCAWEImageAlbumImagePickerViewDataSource;

@interface AWEACCImageAlbumPickerDelegateMiddleMan : NSObject <AWEImageAlbumImagePickerViewDataSource> {
    id<ACCAWEImageAlbumImagePickerViewDataSource> _originDelegate;
}

@property (weak, nonatomic) id<ACCAWEImageAlbumImagePickerViewDataSource> originDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)originDelegate;
- (long long)numberOfImagesForAlbumImagePicker;
- (void)fetchImageForIndex:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1 completionBlock:(id /* block */)arg2;
- (id)cachedImageForIndex:(long long)arg0;
- (id)itemExtraInfoForIndex:(long long)arg0;
- (void)setOriginDelegate:(id)arg0;
- (void).cxx_destruct;

@end
