//
//     Generated by private class-dump
//

@protocol ACCImageAlbumPickerControllerWrapDelegate;

@protocol ACCImageAlbumImagePickControllerProtocol <NSObject>

@property (weak, nonatomic) id<ACCImageAlbumPickerControllerWrapDelegate> delegate;
@property (nonatomic) BOOL isSlides;

- (BOOL)isSlides;
- (void)setIsSlides:(BOOL)arg0;
- (void)showImageAlbumImagePickViewWithDataSource:(id)arg0 enterFrom:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dismissAnimated:(BOOL)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end