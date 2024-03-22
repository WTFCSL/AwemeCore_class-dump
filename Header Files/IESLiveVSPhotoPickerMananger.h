//
//     Generated by private class-dump
//

@class NSArray, UIImage, UIView, NSMutableArray;
@protocol IESLiveRoomServiceAdapter;

@interface IESLiveVSPhotoPickerMananger : NSObject {
    NSArray *_phAssets;
    UIImage *_qrCode;
    id<IESLiveRoomServiceAdapter> _room;
    NSMutableArray *_images;
    UIView *_saveContainer;
}

@property (retain, nonatomic) UIImage *qrCode;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (copy, nonatomic) NSArray *phAssets;
@property (retain, nonatomic) NSMutableArray *images;
@property (retain, nonatomic) UIView *saveContainer;

- (id)createBottomView;
- (id)phAssets;
- (void)setPhAssets:(id)arg0;
- (id)saveImage:(id)arg0;
- (id)localImages;
- (id)getAllLocalPhotos;
- (id)createListView:(id)arg0 title:(id)arg1;
- (void)checkAuthorizationAndFetchAssets;
- (id)createSaveViewWith:(id)arg0;
- (id)getPhotosAssetInCollection:(id)arg0;
- (void)fetchQrCode;
- (void)loadLocalPhotos;
- (id)toSaveView:(id)arg0;
- (void)savePhotoToAlbum:(id)arg0 view:(id)arg1;
- (void)photoPathAtIndex:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)transAssetToImage:(id)arg0;
- (void)setSaveContainer:(id)arg0;
- (id)images;
- (void).cxx_destruct;
- (void)setImages:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)saveContainer;
- (id)initWithRoom:(id)arg0;
- (void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;
- (id)qrCode;
- (void)setQrCode:(id)arg0;

@end