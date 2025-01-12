//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEImageAlbumImagePickerViewControllerDelegate;

@protocol AWEImageAlbumImagePickerViewControllerProtocol <NSObject>

@property (copy, nonatomic) NSString *enterFrom;
@property (readonly, nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isSlides;
@property (weak, nonatomic) id<AWEImageAlbumImagePickerViewControllerDelegate> delegate;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)isSlides;
- (void)setIsSlides:(BOOL)arg0;
- (void)showOnView:(id)arg0 withImages:(id)arg1 awemeModel:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)showOnView:(id)arg0 withDataProvide:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dismissAnimated:(BOOL)arg0;
- (BOOL)isShowing;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
