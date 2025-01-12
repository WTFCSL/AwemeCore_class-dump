//
//     Generated by private class-dump
//

@class NSString, NSArray, UIButton, BDNovelReaderFont, UICollectionView, BDNovelReaderConfig, UILabel, NSMutableSet;

@interface BDNovelReaderFontView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate> {
    BOOL _isShow;
    id /* block */ _closeAction;
    id /* block */ _fontSelectAction;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UICollectionView *_collectionView;
    double _panTop;
    NSArray *_fonts;
    BDNovelReaderConfig *_config;
    NSMutableSet *_downloadSet;
    BDNovelReaderFont *_lastSelectFont;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double panTop;
@property (nonatomic) BOOL isShow;
@property (copy, nonatomic) NSArray *fonts;
@property (retain, nonatomic) BDNovelReaderConfig *config;
@property (retain, nonatomic) NSMutableSet *downloadSet;
@property (retain, nonatomic) BDNovelReaderFont *lastSelectFont;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ fontSelectAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)arg0;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg0;
- (void)setPanTop:(double)arg0;
- (double)panTop;
- (id)downloadSet;
- (void)setDownloadSet:(id)arg0;
- (void)setLastSelectFont:(id)arg0;
- (id /* block */)fontSelectAction;
- (id)lastSelectFont;
- (void)setFontSelectAction:(id /* block */)arg0;
- (void)setFonts:(id)arg0;
- (id)fonts;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)setConfig:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)downloadFont:(id)arg0;
- (id)config;
- (void)close;
- (void)show;
- (id)titleLabel;
- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id /* block */)closeAction;
- (void)pan:(id)arg0;
- (void)setCloseAction:(id /* block */)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setupView;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setupData;

@end
