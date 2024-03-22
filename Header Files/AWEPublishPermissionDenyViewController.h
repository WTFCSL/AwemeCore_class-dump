//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWECodeGenDouyinContentPayChargePermissionResponse, AWEVideoPublishViewModel, UICollectionView, DUXButton, UILabel;

@interface AWEPublishPermissionDenyViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEPublishPermissionDenyDelegate, DUXSheetDelegate> {
    BOOL _hasVIPVideoPrivilege;
    id /* block */ _dismissActionBlock;
    id /* block */ _updateSheetHeight;
    AWECodeGenDouyinContentPayChargePermissionResponse *_permissionModel;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UICollectionView *_listCollectionView;
    DUXButton *_getButton;
    NSArray *_arrayCondition;
    AWEVideoPublishViewModel *_publishViewModel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UICollectionView *listCollectionView;
@property (retain, nonatomic) DUXButton *getButton;
@property (copy, nonatomic) NSArray *arrayCondition;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ dismissActionBlock;
@property (copy, nonatomic) id /* block */ updateSheetHeight;
@property (retain, nonatomic) AWECodeGenDouyinContentPayChargePermissionResponse *permissionModel;
@property (nonatomic) BOOL hasVIPVideoPrivilege;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)sheetDidClickMaskArea:(id)arg0;
- (id)publishViewModel;
- (id)permissionModel;
- (void)setPermissionModel:(id)arg0;
- (id)listCollectionView;
- (void)setPublishViewModel:(id)arg0;
- (void)setDismissActionBlock:(id /* block */)arg0;
- (id /* block */)dismissActionBlock;
- (void)setHasVIPVideoPrivilege:(BOOL)arg0;
- (BOOL)hasVIPVideoPrivilege;
- (void)setUpdateSheetHeight:(id /* block */)arg0;
- (id)trackPublishCommonParams;
- (void)dismiss:(BOOL)arg0 schemaName:(id)arg1 schema:(id)arg2;
- (id)getButton;
- (void)setArrayCondition:(id)arg0;
- (id)arrayCondition;
- (double)getTextHeight:(id)arg0;
- (id /* block */)updateSheetHeight;
- (id)getFailedItem;
- (void)trackPaidVideoUnavailablePageShowWithFailedItem:(id)arg0;
- (void)trackPaidVideoUnavailablePageClickWithName:(id)arg0 failedItem:(id)arg1;
- (void)setListCollectionView:(id)arg0;
- (void)setGetButton:(id)arg0;
- (void)dismiss;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end