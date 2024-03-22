//
//     Generated by private class-dump
//

@class NSArray, NSString, UIView, CAKAlbumViewController, UIButton;
@protocol AWEPOIImagePickerViewControllerDelegate;

@interface AWEPOIImagePickerViewController : UIViewController <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate> {
    BOOL _shouldShowTip;
    NSArray *_initialImages;
    long long _maxAssetsSelectionCount;
    long long _photoNumbersNotInAlbum;
    id<AWEPOIImagePickerViewControllerDelegate> _delegate;
    UIView *_headerView;
    NSArray *_selectedImages;
    UIButton *_nextStepButton;
    CAKAlbumViewController *_albumViewController;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSArray *selectedImages;
@property (retain, nonatomic) UIButton *nextStepButton;
@property (nonatomic) BOOL shouldShowTip;
@property (retain, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) NSArray *initialImages;
@property (nonatomic) long long maxAssetsSelectionCount;
@property (nonatomic) long long photoNumbersNotInAlbum;
@property (weak, nonatomic) id<AWEPOIImagePickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaxAssetsSelectionCount:(long long)arg0;
- (BOOL)albumViewControllerHiddenForHeader:(id)arg0;
- (BOOL)albumViewControllerHiddenForFooter:(id)arg0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)arg0;
- (id)listViewConfigForAlbumViewController:(id)arg0;
- (BOOL)albumViewController:(id)arg0 shouldSelectAlbumAsset:(id)arg1;
- (void)albumViewController:(id)arg0 didSelectAlbumAsset:(id)arg1 sourceType:(long long)arg2;
- (void)albumViewController:(id)arg0 didDeselectAlbumAsset:(id)arg1 sourceType:(long long)arg2;
- (long long)maxAssetsSelectionCount;
- (id)selectedImages;
- (void)setSelectedImages:(id)arg0;
- (void)showTips;
- (void)setInitialImages:(id)arg0;
- (void)setPhotoNumbersNotInAlbum:(long long)arg0;
- (void)setShouldShowTip:(BOOL)arg0;
- (id)albumViewController;
- (BOOL)shouldShowTip;
- (void)handleFinishSelection;
- (void)setNextStepButton:(id)arg0;
- (void)handleCancelSelection;
- (long long)photoNumbersNotInAlbum;
- (id)initialImages;
- (id)nextStepButton;
- (id)nextStepTitle;
- (void)setAlbumViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setHeaderView:(id)arg0;
- (id)delegate;
- (id)headerView;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setupHeaderView;

@end
