//
//     Generated by private class-dump
//

@class NSString, NSObject, AWEAwemeModel;
@protocol AWEPlayInteractionFavoriteElementViewModelProtocol;

@interface AWECommentFavoriteTransferButton : UIButton {
    BOOL _isHighlight;
    AWEAwemeModel *_awemeModel;
    NSString *_enterFrom;
    NSObject<AWEPlayInteractionFavoriteElementViewModelProtocol> *_favViewModel;
}

@property (nonatomic) BOOL isHighlight;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSObject<AWEPlayInteractionFavoriteElementViewModelProtocol> *favViewModel;

- (id)awemeModel;
- (void)setEnterFrom:(id)arg0;
- (void)setAwemeModel:(id)arg0;
- (id)enterFrom;
- (void)updateFavoriteTransferButtonColor;
- (BOOL)shouldHighlightFavoriteTransferButton;
- (id)currentFeedVC;
- (void)favoriteTransferButtonClick;
- (void)setIsHighlight:(BOOL)arg0;
- (void)storageItemID:(id)arg0;
- (BOOL)isItemIDStoraged:(id)arg0;
- (void)favoriteVideo;
- (id)favViewModel;
- (void)showFavoritePopup:(BOOL)arg0;
- (void)setFavViewModel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (BOOL)isHighlight;

@end