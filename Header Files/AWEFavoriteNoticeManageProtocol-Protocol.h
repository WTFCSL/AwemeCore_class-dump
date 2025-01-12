//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEFavoriteNoticeManageProtocol <NSObject>

+ (id)sharedInstance;

@property (nonatomic) BOOL shouldHighlightWhenLandingToHomepage;
@property (nonatomic) BOOL hasFavoriteTransferButtonShowed;
@property (readonly, copy, nonatomic) NSString *justCollectionItemID;
@property (nonatomic) double lastClickConvertTimeStamp;

- (void)trackFavoriteTransferButtonShow:(id)arg0 isRed:(BOOL)arg1 enterFrom:(id)arg2 awemeModel:(id)arg3 extraParams:(id)arg4;
- (void)setHasFavoriteTransferButtonShowed:(BOOL)arg0;
- (BOOL)hasFavoriteTransferButtonShowed;
- (BOOL)isPopupViewShowing;
- (void)addNewFileWithItemID:(id)arg0 collectsName:(id)arg1 coverUrl:(id)arg2 topping:(BOOL)arg3 extraParam:(id)arg4 block:(id /* block */)arg5;
- (void)addNewFileWithItemID:(id)arg0 collectsName:(id)arg1 coverUrl:(id)arg2 topping:(BOOL)arg3 block:(id /* block */)arg4;
- (BOOL)canShowCoverAnimation;
- (id)justCollectionItemID;
- (void)switchToHomepageFrom:(id)arg0;
- (BOOL)shouldHighlightWhenLandingToHomepage;
- (BOOL)enableCollectedGuidance;
- (void)noticeViewDismiss;
- (void)setShouldHighlightWhenLandingToHomepage:(BOOL)arg0;
- (double)lastClickConvertTimeStamp;
- (BOOL)isFavoriteGuideForeverDismiss;
- (void)cacheForeverDismissKeyIfNeeded;
- (BOOL)isCoverAnimationShow;
- (BOOL)noticeViewShow;
- (void)addVideoWithVideoId:(id)arg0 collectsId:(id)arg1 completion:(id /* block */)arg2;
- (void)showFavoriteFileAddOrCreateViewControllerWithAwemeModel:(id)arg0 enterFrom:(id)arg1 alwaysShowFavoritesPopup:(BOOL)arg2 toastType:(id)arg3 enterMethod:(id)arg4 isFromCommentRedButton:(BOOL)arg5 shouldBlockNoticeView:(BOOL)arg6 clickBlock:(id /* block */)arg7;
- (void)updateMaxPlayBackTimeWithItemID:(id)arg0 maxPlayBackTime:(double)arg1;
- (void)setLastClickConvertTimeStamp:(double)arg0;

@end
