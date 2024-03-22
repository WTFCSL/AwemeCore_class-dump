//
//     Generated by private class-dump
//

@class NSNumber, UIViewController;

@protocol AWEPlayInteractionFavoriteElementViewModelProtocol <NSObject>

@property (nonatomic) BOOL mustShowFavoriteToast;
@property (retain, nonatomic) NSNumber *favoriteToastBottomPadding;
@property (nonatomic) BOOL favoriteToastShow;
@property (nonatomic) BOOL hiddenNoticeView;
@property (nonatomic) BOOL hideUnfavoriteBar;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) unsigned long long favoriteActionStatus;
@property (nonatomic) BOOL shouldShowAnimation;

- (BOOL)mustShowFavoriteToast;
- (void)setMustShowFavoriteToast:(BOOL)arg0;
- (id)favoriteToastBottomPadding;
- (void)setFavoriteToastBottomPadding:(id)arg0;
- (void)presentFavoriteFolderHint:(BOOL)arg0 toastType:(id)arg1 enterMethod:(id)arg2 isFromCommentRedButton:(BOOL)arg3 shouldBlockNoticeView:(BOOL)arg4;
- (void)onFavoriteButtonClicked:(id)arg0;
- (void)setFavoriteToastShow:(BOOL)arg0;
- (void)setHiddenNoticeView:(BOOL)arg0;
- (void)setHideUnfavoriteBar:(BOOL)arg0;
- (void)setFavoriteActionStatus:(unsigned long long)arg0;
- (unsigned long long)favoriteActionStatus;
- (BOOL)favoriteToastShow;
- (BOOL)canFavorite;
- (void)doSafeFavoriteWithConfig:(id)arg0;
- (void)resetFavoriteTime;
- (void)setShouldShowAnimation:(BOOL)arg0;
- (void)trackFavoriteEventWithFavoriteAction:(BOOL)arg0 Enterfrom:(id)arg1 enterMethod:(id)arg2;
- (BOOL)hideUnfavoriteBar;
- (BOOL)hiddenNoticeView;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (BOOL)shouldShowAnimation;

@end