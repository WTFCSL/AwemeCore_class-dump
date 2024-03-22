//
//     Generated by private class-dump
//

@class UIButton, NSMutableArray;
@protocol BDXContainerProtocol;

@interface AnnieLiveBizButtons : NSObject {
    UIButton *_backBtn;
    UIButton *_shareBtn;
    UIButton *_closeBtn;
    UIButton *_halfScreenCloseButon;
    id<BDXContainerProtocol> _container;
    NSMutableArray *_wkObserverKeys;
}

@property (weak, nonatomic) id<BDXContainerProtocol> container;
@property (retain, nonatomic) NSMutableArray *wkObserverKeys;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIButton *shareBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIButton *halfScreenCloseButon;

- (id)closeBtn;
- (id)backBtn;
- (void)setBackBtn:(id)arg0;
- (void)setCloseBtn:(id)arg0;
- (void)setupPageBackBtnWithParams:(id)arg0 container:(id)arg1;
- (void)setupPageCloseBtnWithParams:(id)arg0 container:(id)arg1;
- (void)setupPageShareBtnWithParams:(id)arg0 container:(id)arg1;
- (void)setupPopupBackBtnWithParams:(id)arg0 container:(id)arg1;
- (void)setupPopupCloseBtnWithParams:(id)arg0 container:(id)arg1;
- (void)setupPopupShareBtnWithParams:(id)arg0 container:(id)arg1;
- (void)addUpToFullScreenCloseBtnWithSchemeParam:(id)arg0 container:(id)arg1;
- (void)addWKObserverWithContainer:(id)arg0;
- (id)AnnieLiveBizButtonWithBackGroundImage:(id)arg0 accessibilityLable:(id)arg1;
- (void)clickPageBackBtn:(id)arg0;
- (double)topBtnMarginWithPageVC:(id)arg0;
- (id)shareBtn;
- (BOOL)supportNativeShareInfo:(id)arg0;
- (void)setShareBtn:(id)arg0;
- (void)clickPageShareBtn:(id)arg0;
- (void)clickPageCloseBtn:(id)arg0;
- (id)getPuzzleContextWithSchemaParam:(id)arg0;
- (void)shareWithHybridView:(id)arg0 context:(id)arg1;
- (void)backBtnPopupClicked:(id)arg0;
- (void)updateBackBtnWithPopupVC:(id)arg0;
- (void)shareBtnPopupClicked:(id)arg0;
- (void)closeBtnPopupClicked:(id)arg0;
- (void)shareWithTargetURL:(id)arg0 title:(id)arg1 content:(id)arg2 imageURL:(id)arg3 context:(id)arg4;
- (void)getShareInfoOfWebView:(id)arg0 complete:(id /* block */)arg1;
- (id)halfScreenCloseButon;
- (void)setHalfScreenCloseButon:(id)arg0;
- (void)updateUpHalfScreenCloseBtnIcon:(id)arg0 container:(id)arg1;
- (void)halfCloseBtnClicked;
- (id)getHalfScreenCloseBtnImage:(id)arg0 container:(id)arg1;
- (id)wkObserverKeys;
- (void)setWkObserverKeys:(id)arg0;
- (void)setupWithContainer:(id)arg0;
- (void)didLoadFaildedWithContainer:(id)arg0;
- (void)shareWithShareInfo:(id)arg0 context:(id)arg1;
- (void)container:(id)arg0 updateHalfScreenButtonsTopOffsetWithContainerOnTop:(BOOL)arg1;
- (void)removeWKObserverWithContainer:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end
