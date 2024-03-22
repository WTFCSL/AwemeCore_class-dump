//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, IESGCPXPlayGameDownloadView, UIButton, NSMutableArray, IESGCPIdenticalPlayLynxView, UICollectionView, IESGCPImageButton, UILabel;
@protocol IESGCPXPlayGameFunctionPanelDelegate;

@interface IESGCPXPlayGameFunctionPanelView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESGCPXPlayGameDownloadViewDelegate> {
    BOOL _isShowing;
    id<IESGCPXPlayGameFunctionPanelDelegate> _delegate;
    long long _remainTrialTime;
    UIView *_contentView;
    UIView *_dismissTargetView;
    UIView *_backgroundView;
    IESGCPImageButton *_normalQuitButton;
    UIButton *_identicalPlayQuitButton;
    UICollectionView *_collectionView;
    UIButton *_feedbackButton;
    NSMutableArray *_panelItems;
    IESGCPXPlayGameDownloadView *_downloadView;
    IESGCPIdenticalPlayLynxView *_reserveView;
    UIButton *_fullGameButton;
    UILabel *_textSeparator;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dismissTargetView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESGCPImageButton *normalQuitButton;
@property (retain, nonatomic) UIButton *identicalPlayQuitButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *feedbackButton;
@property (retain, nonatomic) NSMutableArray *panelItems;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) IESGCPXPlayGameDownloadView *downloadView;
@property (retain, nonatomic) IESGCPIdenticalPlayLynxView *reserveView;
@property (retain, nonatomic) UIButton *fullGameButton;
@property (retain, nonatomic) UILabel *textSeparator;
@property (weak, nonatomic) id<IESGCPXPlayGameFunctionPanelDelegate> delegate;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long remainTrialTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)arg0;
- (long long)remainTrialTime;
- (void)updateLayoutWithStyle:(long long)arg0;
- (id)reserveView;
- (void)setReserveView:(id)arg0;
- (void)layoutNormalStyle;
- (void)onDownloadButtonClicked;
- (id)dismissTargetView;
- (void)_onBlankAreaClicked:(id)arg0;
- (void)setPanelItems:(id)arg0;
- (id)panelItems;
- (void)layoutIdenticalPlayStyle;
- (void)layoutReserveComponent;
- (void)layoutDownloadComponent;
- (id)textSeparator;
- (id)fullGameButton;
- (id)identicalPlayQuitButton;
- (id)normalQuitButton;
- (void)_onQuitButtonClicked:(id)arg0;
- (void)_onFullGameButtonClicked:(id)arg0;
- (void)_onFeedbackButtonClicked:(id)arg0;
- (void)reloadAll;
- (void)showInView:(id)arg0 style:(long long)arg1;
- (void)setDownloadViewHidden:(BOOL)arg0;
- (void)updateDownloadViewTitle:(id)arg0;
- (void)updateLayoutWithGameOrientation:(long long)arg0;
- (void)updateFunctionPanelReserveLynxPage:(id)arg0;
- (void)updateFunctionPanelDownloadNativePage;
- (void)clearConversionElement;
- (void)hideFullGameEntrance;
- (void)setDismissTargetView:(id)arg0;
- (void)setNormalQuitButton:(id)arg0;
- (void)setIdenticalPlayQuitButton:(id)arg0;
- (void)setFullGameButton:(id)arg0;
- (void)setTextSeparator:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)backgroundView;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (id)items;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadWithItems:(id)arg0;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)setBackgroundView:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)feedbackButton;
- (void)setFeedbackButton:(id)arg0;
- (void)setDownloadView:(id)arg0;
- (id)downloadView;
- (void)reloadItem:(id)arg0;

@end
