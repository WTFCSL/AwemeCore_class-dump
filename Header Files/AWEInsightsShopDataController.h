//
//     Generated by private class-dump
//

@class CAKModalTransitionDelegate, NSString, NSDictionary, NSTimer, UIViewController, NSNumber, AWEInsightsShopUploadImagePickerController;

@interface AWEInsightsShopDataController : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate> {
    BOOL _isFromImagePicker;
    BOOL _isSafeApi;
    UIViewController *_baseViewController;
    long long _source;
    unsigned long long _dataThreshold;
    NSString *_jsbUniqueId;
    id /* block */ _completion;
    NSString *_uploadPath;
    NSNumber *_maxFileSize;
    AWEInsightsShopUploadImagePickerController *_pickerController;
    CAKModalTransitionDelegate *_transitionDelegate;
    NSString *_type;
    NSDictionary *_uploadParameters;
    NSTimer *_timeoutTimer;
    double _compressRatio;
}

@property (retain, nonatomic) AWEInsightsShopUploadImagePickerController *pickerController;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *uploadParameters;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (nonatomic) double compressRatio;
@property (weak, nonatomic) UIViewController *baseViewController;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long dataThreshold;
@property (copy, nonatomic) NSString *jsbUniqueId;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL isFromImagePicker;
@property (copy, nonatomic) NSString *uploadPath;
@property (retain, nonatomic) NSNumber *maxFileSize;
@property (nonatomic) BOOL isSafeApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setUploadPath:(id)arg0;
- (id)uploadPath;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)arg0;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didClickAlbumAssetCell:(id)arg1;
- (void)albumViewControllerDidClickCancelButton:(id)arg0;
- (void)setUploadParameters:(id)arg0;
- (id)uploadParameters;
- (void)setDataThreshold:(unsigned long long)arg0;
- (void)setJsbUniqueId:(id)arg0;
- (void)setIsSafeApi:(BOOL)arg0;
- (void)openPhotoAlbum;
- (BOOL)isSafeApi;
- (id)errorToastOfImage:(id)arg0 imageFileSize:(double)arg1;
- (void)setIsFromImagePicker:(BOOL)arg0;
- (unsigned long long)dataThreshold;
- (void)setCompressRatio:(double)arg0;
- (id)jsbUniqueId;
- (double)compressRatio;
- (BOOL)isFromImagePicker;
- (id)maxFileSize;
- (long long)source;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)type;
- (void)setType:(id)arg0;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setSource:(long long)arg0;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)uploadImage:(id)arg0;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg0;
- (id)timeoutTimer;
- (void)setTimeoutTimer:(id)arg0;
- (void)setMaxFileSize:(id)arg0;
- (id)baseViewController;
- (void)setBaseViewController:(id)arg0;
- (void)setPickerController:(id)arg0;
- (id)pickerController;

@end
