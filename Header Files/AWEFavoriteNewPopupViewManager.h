//
//     Generated by private class-dump
//

@class NSString, DUXBasicSheet, AWEFavoriteNewPopupViewController;

@interface AWEFavoriteNewPopupViewManager : NSObject <DUXSheetDelegate, AWEFavoriteNewPopupViewManagerProtocol> {
    BOOL _dontFavoriteNoticeViewShow;
    AWEFavoriteNewPopupViewController *_popupViewController;
    id /* block */ _endFavoriteAddToFilePopupPromise;
    DUXBasicSheet *_sheet;
}

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (nonatomic) BOOL dontFavoriteNoticeViewShow;
@property (retain, nonatomic) AWEFavoriteNewPopupViewController *popupViewController;
@property (copy, nonatomic) id /* block */ endFavoriteAddToFilePopupPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)sheetDidClickMaskArea:(id)arg0;
- (void)sheetDidDismiss:(id)arg0;
- (void)updateSheetHeight:(double)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)popupViewController;
- (void)setPopupViewController:(id)arg0;
- (void)updateMask:(BOOL)arg0;
- (void)setDontFavoriteNoticeViewShow:(BOOL)arg0;
- (BOOL)dontFavoriteNoticeViewShow;
- (void)setEndFavoriteAddToFilePopupPromise:(id /* block */)arg0;
- (void)showFavoriteNewPopupView;
- (void)showFavoriteNewPopupViewWithItemIDArray:(id)arg0 coverUrl:(id)arg1 collectsIdFrom:(id)arg2 referString:(id)arg3 enterFrom:(id)arg4 enterMethod:(id)arg5 extraParams:(id)arg6 refreshItems:(BOOL)arg7 autoEnterCreateFolder:(BOOL)arg8 networkCompletionBlock:(id /* block */)arg9;
- (id /* block */)endFavoriteAddToFilePopupPromise;
- (void)dismissFavoriteNewPopupViewWithAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)showFavoriteNewPopupViewWithViewController:(id)arg0 dataController:(id)arg1;
- (void).cxx_destruct;
- (id)sheet;
- (void)setSheet:(id)arg0;

@end
