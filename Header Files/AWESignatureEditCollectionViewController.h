//
//     Generated by private class-dump
//

@class NSTimer, UIView, NSString, DUXBasicSheet, AWESignatureEditCollectionDataController, AWESpecialPersonSheetViewController, DUXCheckBox, UICollectionView, UIImageView, UILabel;
@protocol AWESignatureEditCollectionDelegate;

@interface AWESignatureEditCollectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWESpecialPersonSearchViewDelegate, DUXSheetDelegate, AWESignatureEditManagerDelegate> {
    BOOL _isRequestMoreMentionList;
    float _contentOffsetY;
    id<AWESignatureEditCollectionDelegate> _delegate;
    UICollectionView *_specialPersonCollectionView;
    unsigned long long _style;
    AWESignatureEditCollectionDataController *_dataController;
    UILabel *_numberTextLabel;
    DUXBasicSheet *_sheet;
    AWESpecialPersonSheetViewController *_specialPersonSheetVC;
    NSTimer *_searchTimer;
    id /* block */ _searchBlock;
    DUXCheckBox *_checkBoxButton;
    UIView *_leftContainer;
    UIView *_rightContainer;
    UILabel *_goRecordLabel;
    UIImageView *_arrow;
}

@property (retain, nonatomic) UICollectionView *specialPersonCollectionView;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWESignatureEditCollectionDataController *dataController;
@property (nonatomic) BOOL isRequestMoreMentionList;
@property (retain, nonatomic) UILabel *numberTextLabel;
@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWESpecialPersonSheetViewController *specialPersonSheetVC;
@property (retain, nonatomic) NSTimer *searchTimer;
@property (copy, nonatomic) id /* block */ searchBlock;
@property (nonatomic) float contentOffsetY;
@property (retain, nonatomic) DUXCheckBox *checkBoxButton;
@property (retain, nonatomic) UIView *leftContainer;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) UILabel *goRecordLabel;
@property (retain, nonatomic) UIImageView *arrow;
@property (weak, nonatomic) id<AWESignatureEditCollectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidDismiss:(id)arg0;
- (void)setDataController:(id)arg0;
- (id)leftContainer;
- (id)rightContainer;
- (float)contentOffsetY;
- (void)setContentOffsetY:(float)arg0;
- (void)setRightContainer:(id)arg0;
- (void)setLeftContainer:(id)arg0;
- (void)p_setupUI;
- (id)searchTimer;
- (void)setSearchTimer:(id)arg0;
- (void)setSearchBlock:(id /* block */)arg0;
- (BOOL)p_networkAvailable;
- (void)setArrow:(id)arg0;
- (id)arrow;
- (void)finishSearch;
- (void)p_stopTimer;
- (void)p_startTimer;
- (id)checkBoxButton;
- (void)setCheckBoxButton:(id)arg0;
- (id)numberTextLabel;
- (void)showSignatureDailyEntrance;
- (BOOL)checkBoxButtonIsOn;
- (void)setCheckBoxEnable:(BOOL)arg0;
- (void)switchCollectionViewControllerToMentionStyle;
- (void)showSpecialPersonSheetWithString:(id)arg0 keyword:(id)arg1;
- (void)presentNumberTextLabelWithString:(id)arg0 textColor:(id)arg1;
- (void)resetDefaultStyle;
- (void)setNumberTextLabel:(id)arg0;
- (id)specialPersonCollectionView;
- (void)p_collectionviewReloadData;
- (void)p_collectionviewReloadDataWithUserInteractionEnabled:(BOOL)arg0;
- (id)specialPersonSheetVC;
- (void)requestMentionListWithKeyword:(id)arg0;
- (void)setSpecialPersonSheetVC:(id)arg0;
- (void)configSelfViewFrame;
- (void)configCollectionViewFrame;
- (void)configSignatureDailyEntrance;
- (void)setIsRequestMoreMentionList:(BOOL)arg0;
- (void)p_addMentionLoadMorePlaceholderModels;
- (void)p_removeMentionLoadMorePlaceholderModels;
- (BOOL)isRequestMoreMentionList;
- (void)p_loadMoreMentionList;
- (void)p_onSearchTimer;
- (id /* block */)searchBlock;
- (void)checkBoxTapped;
- (void)pushToRecordEditing;
- (void)setGoRecordLabel:(id)arg0;
- (id)goRecordLabel;
- (void)configLeftContainer;
- (void)configRightContainer;
- (void)searchUser:(id)arg0;
- (BOOL)isInDefaultStyle;
- (void)setSpecialPersonCollectionView:(id)arg0;
- (unsigned long long)style;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)keyboardWillShow:(id)arg0;
- (void)keyboardWillHide:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setStyle:(unsigned long long)arg0;
- (id)dataController;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end