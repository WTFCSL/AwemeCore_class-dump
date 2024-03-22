//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSArray, NSString, UIButton, NSMutableArray, UICollectionView, AWETeenImageAlbumImagePickerSelectIndicator, UILabel;
@protocol AWETeenImageAlbumImagePickerViewDataSource, AWETeenImageAlbumImagePickerViewControllerDelegate;

@interface AWETeenImageAlbumImagePickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWETeenImageAlbumImagePickerCollectionViewCellDelegate, AWETeenImageAlbumImagePickerViewControllerProtocol> {
    BOOL _isShowing;
    NSString *enterFrom;
    id<AWETeenImageAlbumImagePickerViewControllerDelegate> delegate;
    UIView *_backgroundView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    AWETeenImageAlbumImagePickerSelectIndicator *_selectAllIndicator;
    UIButton *_selectAllButton;
    UIButton *_saveButton;
    UICollectionView *_collectionView;
    UIView *_topView;
    AWEAwemeModel *_awemeModel;
    id /* block */ _completionBlock;
    NSArray *_images;
    NSMutableArray *_selectedIndices;
    id<AWETeenImageAlbumImagePickerViewDataSource> _dataProvide;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWETeenImageAlbumImagePickerSelectIndicator *selectAllIndicator;
@property (retain, nonatomic) UIButton *selectAllButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSArray *images;
@property (retain, nonatomic) NSMutableArray *selectedIndices;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AWETeenImageAlbumImagePickerViewDataSource> dataProvide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWETeenImageAlbumImagePickerViewControllerDelegate> delegate;

- (id)awemeModel;
- (void)setEnterFrom:(id)arg0;
- (void)setIsShowing:(BOOL)arg0;
- (void)setAwemeModel:(id)arg0;
- (id)enterFrom;
- (void)p_setupUI;
- (void)p_reloadCollectionView;
- (void)p_reset;
- (void)showOnView:(id)arg0 withImages:(id)arg1 awemeModel:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg0;
- (void)showOnView:(id)arg0 withDataProvide:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)imagePickerCellDidTapOnSelectIndicator:(id)arg0;
- (void)showOnView:(id)arg0 withImages:(id)arg1 awemeModel:(id)arg2 dataProvide:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setDataProvide:(id)arg0;
- (void)p_setupImageDataForDataProvideIfNeed;
- (void)p_clearSelection;
- (void)p_selectAllImages;
- (void)p_handleSelectionChanged;
- (id)dataProvide;
- (void)handleSave;
- (void)handleSelectAll;
- (void)setSelectAllIndicator:(id)arg0;
- (id)selectAllIndicator;
- (void)setSelectedIndices:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)images;
- (id)backgroundView;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)dismissAnimated:(BOOL)arg0;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id /* block */)completionBlock;
- (id)titleLabel;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setCollectionView:(id)arg0;
- (BOOL)isShowing;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setImages:(id)arg0;
- (id)topView;
- (void)setTopView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)saveButton;
- (void)setSaveButton:(id)arg0;
- (id)selectedIndices;
- (void)handleClose;

@end
