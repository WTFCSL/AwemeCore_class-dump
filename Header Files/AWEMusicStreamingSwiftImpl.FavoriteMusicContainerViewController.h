//
//     Generated by private class-dump
//

@interface AWEMusicStreamingSwiftImpl.FavoriteMusicContainerViewController : AWEBaseListViewController <AWEProfileTabCustomProtocol, AWERouterViewControllerProtocol, AWEMusicBottomPlayerViewDelegate> {
    void /* unknown type, empty encoding */ viewHasAppeared;
    void /* unknown type, empty encoding */ popView;
    void /* unknown type, empty encoding */ reloadRightFixedArea;
    void /* unknown type, empty encoding */ collectMusicChanged;
}

@property (nonatomic, copy) id /* block */ reloadRightFixedArea;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)customLayoutCollectionView:(id)arg0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)arg0 forSectionViewModel:(id)arg1;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id /* block */)reloadRightFixedArea;
- (void)setReloadRightFixedArea:(id /* block */)arg0;
- (id)bottomSpecialView;
- (struct CGSize { double x0; double x1; })bottomSpecialViewSize;
- (void)playerViewDidTapCover:(id)arg0;
- (void)playerViewDidTapInfo:(id)arg0;
- (void)playerViewDidTapConfirmBtn:(id)arg0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupCollectionView:(id)arg0;

@end
