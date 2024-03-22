//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, UIImage, UIImageView, UIButton, AWEQuickFlashStickerModel, AWECollectionButton, UICollectionView, AWEFeedQuickFlashPanelStyleConfig, UILabel, DUXPopover;

@interface AWEFeedQuickFlashFullPageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _favoriteAnimating;
    UICollectionView *_quickFlashListCollectionView;
    UICollectionView *_quickFlashRecommandCollectionView;
    AWECollectionButton *_favoriteButton;
    id _delegate;
    id /* block */ _didTapFavouriteHintHandler;
    UIImageView *_configBgImageView;
    UIImage *_defaultGradientImage;
    UIImageView *_flashIconView;
    UILabel *_quickFlashTitleText;
    UILabel *_quickFlashAuthorText;
    UIView *_bar;
    NSArray *_fullPageModelList;
    NSArray *_tagList;
    AWEQuickFlashStickerModel *_quickFlashStickerModel;
    AWEFeedQuickFlashPanelStyleConfig *_styleConfig;
    UIView *_footerView;
    UIButton *_joinButton;
    UIButton *_createButton;
    UIButton *_closeButton;
    UILabel *_noMoreLabel;
    UIView *_whiteBottom;
    UIButton *_backButton;
    DUXPopover *_favoritePopover;
    UIView *_redPackBannal;
    UILabel *_redPackBannalText;
    UIImageView *_redPackImageView;
}

@property (retain, nonatomic) UIImageView *configBgImageView;
@property (copy, nonatomic) UIImage *defaultGradientImage;
@property (retain, nonatomic) UIImageView *flashIconView;
@property (retain, nonatomic) UILabel *quickFlashTitleText;
@property (retain, nonatomic) UILabel *quickFlashAuthorText;
@property (retain, nonatomic) UICollectionView *quickFlashListCollectionView;
@property (retain, nonatomic) UICollectionView *quickFlashRecommandCollectionView;
@property (retain, nonatomic) UIView *bar;
@property (retain, nonatomic) NSArray *fullPageModelList;
@property (retain, nonatomic) NSArray *tagList;
@property (retain, nonatomic) AWEQuickFlashStickerModel *quickFlashStickerModel;
@property (retain, nonatomic) AWEFeedQuickFlashPanelStyleConfig *styleConfig;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIButton *joinButton;
@property (retain, nonatomic) UIButton *createButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (retain, nonatomic) UIView *whiteBottom;
@property (retain, nonatomic) UIButton *backButton;
@property (weak, nonatomic) DUXPopover *favoritePopover;
@property (nonatomic) BOOL favoriteAnimating;
@property (retain, nonatomic) UIView *redPackBannal;
@property (retain, nonatomic) UILabel *redPackBannalText;
@property (retain, nonatomic) UIImageView *redPackImageView;
@property (retain, nonatomic) AWECollectionButton *favoriteButton;
@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) id /* block */ didTapFavouriteHintHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tagList;
- (void)setTagList:(id)arg0;
- (void)setDidTapFavouriteHintHandler:(id /* block */)arg0;
- (void)removeFavoriteHint;
- (id)favoritePopover;
- (id /* block */)didTapFavouriteHintHandler;
- (void)setFavoritePopover:(id)arg0;
- (id)quickFlashStickerModel;
- (void)setQuickFlashStickerModel:(id)arg0;
- (void)backButtonDidClicked:(id)arg0;
- (void)setStyleConfig:(id)arg0;
- (void)joinButtonDidClicked:(id)arg0;
- (void)favoriteButtonDidClicked:(id)arg0;
- (void)createButtonDidClicked:(id)arg0;
- (id)styleConfig;
- (void)closeButtonDidClicked:(id)arg0;
- (id)quickFlashListCollectionView;
- (id)fullPageModelList;
- (id)quickFlashRecommandCollectionView;
- (id)quickFlashTitleText;
- (id)quickFlashAuthorText;
- (id)whiteBottom;
- (id)generateFlashIconView;
- (void)setFlashIconView:(id)arg0;
- (id)flashIconView;
- (void)UIWithoutRankList;
- (id)generateBackBtn;
- (void)setupModernUI;
- (void)updateFullPageForRedPack2024;
- (id)redPackBannal;
- (void)setRedPackBannal:(id)arg0;
- (id)redPackBannalText;
- (void)setRedPackBannalText:(id)arg0;
- (id)redPackImageView;
- (void)setRedPackImageView:(id)arg0;
- (id)configBgImageView;
- (void)setFullPageModelList:(id)arg0;
- (BOOL)favoriteAnimating;
- (void)setFavoriteAnimating:(BOOL)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 quickFlashModel:(id)arg1 styleConfig:(id)arg2;
- (id)defaultGradientImage;
- (id)noMoreLabel;
- (id)generateQuickFlashRecommandCollectionView;
- (id)generateCloseBtn;
- (void)configWithModelList:(id)arg0;
- (void)configWithTagList:(id)arg0;
- (void)updateCollectionUIWithCollected:(BOOL)arg0;
- (void)setQuickFlashListCollectionView:(id)arg0;
- (void)setQuickFlashRecommandCollectionView:(id)arg0;
- (void)setConfigBgImageView:(id)arg0;
- (void)setDefaultGradientImage:(id)arg0;
- (void)setQuickFlashTitleText:(id)arg0;
- (void)setQuickFlashAuthorText:(id)arg0;
- (void)setNoMoreLabel:(id)arg0;
- (void)setWhiteBottom:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)bar;
- (void)setBar:(id)arg0;
- (id)footerView;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)setFooterView:(id)arg0;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)joinButton;
- (void)setJoinButton:(id)arg0;
- (id)favoriteButton;
- (void)setFavoriteButton:(id)arg0;
- (id)createButton;
- (void)setCreateButton:(id)arg0;
- (void)setUpUI;
- (void)setupBackgroundView;

@end