//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer;

@interface AWEPOIUGCRecordUploadButtonComponent : ACCFeatureComponent <CAKPhotoLibraryChangeObserver> {
    BOOL _hasRegisterChangeObserver;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCRecorderViewContainer> _viewContainer;
    UIButton *_uploadButton;
    UILabel *_uploadLabel;
    UIImageView *_photoImageView;
}

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UIButton *uploadButton;
@property (retain, nonatomic) UILabel *uploadLabel;
@property (retain, nonatomic) UIImageView *photoImageView;
@property (nonatomic) BOOL hasRegisterChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (id)uploadLabel;
- (void)setUploadLabel:(id)arg0;
- (id)switchModeService;
- (void)setSwitchModeService:(id)arg0;
- (BOOL)hasRegisterChangeObserver;
- (void)addPHPhotoLibraryObserver;
- (void)refreshUploadImageView;
- (id)getAlbumPlaceHolder;
- (void)setHasRegisterChangeObserver:(BOOL)arg0;
- (id)uploadButton;
- (void)setUploadButton:(id)arg0;
- (void)loadChildViews;
- (BOOL)needRefreshUploadImageView;
- (void)trackAlbumButtonShow;
- (void)setupPhotoImageLoadProcess;
- (void)addPHPhotoLibraryObserverIfNeed;
- (void)jumpToPictureAlbum;
- (void)updateUploadImage;
- (void)updateUploadImageIfNeeded;
- (void)resetPhotoImageView;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)arg0;
- (void)dealloc;
- (void)setupUI;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)photoImageView;
- (void)setPhotoImageView:(id)arg0;

@end
