//
//     Generated by private class-dump
//

@class IESLiveCreateCoverEditViewController, NSString, IESLiveGuideModel, UIImageView, UILabel, HTSLiveCoverImageApi, UIButton;
@protocol IESLivePhotoLibraryService;

@interface IESLiveXTMediaGuideContentPanelView : UIView <IESLiveAnchorCameraPermissionHandler, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    BOOL _isPickerShowing;
    id /* block */ _checkChangedBlock;
    IESLiveGuideModel *_guideModel;
    UIButton *_checkBoxBtn;
    UIImageView *_coverImageView;
    UILabel *_addCoverLbl;
    HTSLiveCoverImageApi *_coverImageApi;
    id<IESLivePhotoLibraryService> _photoService;
    IESLiveCreateCoverEditViewController *_createCoverEditController;
    NSString *_coverURI;
}

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) UIButton *checkBoxBtn;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *addCoverLbl;
@property (nonatomic) BOOL isPickerShowing;
@property (retain, nonatomic) HTSLiveCoverImageApi *coverImageApi;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (retain, nonatomic) IESLiveCreateCoverEditViewController *createCoverEditController;
@property (retain, nonatomic) NSString *coverURI;
@property (copy, nonatomic) id /* block */ checkChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)guideModel;
- (void)setGuideModel:(id)arg0;
- (void)checkBoxClicked:(id)arg0;
- (id)coverURI;
- (void)setCoverURI:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (BOOL)canHandleVideoCapture;
- (void)updateCheckStatus:(BOOL)arg0;
- (void)selectImage;
- (void)showCameraEntrance;
- (id)photoService;
- (void)setPhotoService:(id)arg0;
- (void)setCreateCoverEditController:(id)arg0;
- (id)createCoverEditController;
- (id)initWithGuideModel:(id)arg0 attachingDIContext:(id)arg1;
- (BOOL)currentXTSelectStatus;
- (void)setCheckChangedBlock:(id /* block */)arg0;
- (BOOL)hasLocalRecord;
- (id)coverRootViewController;
- (id)coverImageApi;
- (BOOL)isInLiveType:(unsigned long long)arg0;
- (void)setIsPickerShowing:(BOOL)arg0;
- (BOOL)isPickerShowing;
- (void)setCoverImageApi:(id)arg0;
- (void)setCheckBoxBtn:(id)arg0;
- (id)checkBoxBtn;
- (void)helpBtnClicked:(id)arg0;
- (id)checkBoxView;
- (void)setAddCoverLbl:(id)arg0;
- (id)addCoverLbl;
- (id /* block */)checkChangedBlock;
- (void)showPhotoEntrance;
- (void)showImagePickerController;
- (void)editImage:(id)arg0 pickerController:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)arg0;
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
- (void)uploadImage:(id)arg0;
- (void)setupUI;

@end