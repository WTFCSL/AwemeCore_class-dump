//
//     Generated by private class-dump
//

@class NSString, DUXBasicSheet, AWEFavoriteSnackBarAndAddToFileViewController;

@interface AWEFavoriteSnackBarAndAddToFileViewManager : NSObject <DUXSheetDelegate> {
    id /* block */ _endSnackBarAndAddToFilePromise;
    NSString *_itemID;
    NSString *_coverUrl;
    NSString *_enterFrom;
    NSString *_authorId;
    DUXBasicSheet *_sheet;
    AWEFavoriteSnackBarAndAddToFileViewController *_popupViewController;
}

@property (retain, nonatomic) DUXBasicSheet *sheet;
@property (retain, nonatomic) AWEFavoriteSnackBarAndAddToFileViewController *popupViewController;
@property (copy, nonatomic) id /* block */ endSnackBarAndAddToFilePromise;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *authorId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)setEnterFrom:(id)arg0;
- (void)sheetDidClickMaskArea:(id)arg0;
- (id)enterFrom;
- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (id)popupViewController;
- (void)setPopupViewController:(id)arg0;
- (void)setEndSnackBarAndAddToFilePromise:(id /* block */)arg0;
- (void)showFavoriteSnackBarAndAddToFileView;
- (id /* block */)endSnackBarAndAddToFilePromise;
- (void)trackPopupClickWithEndType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)sheet;
- (void)setSheet:(id)arg0;
- (id)authorId;
- (void)setAuthorId:(id)arg0;

@end
