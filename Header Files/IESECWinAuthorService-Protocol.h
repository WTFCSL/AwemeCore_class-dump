//
//     Generated by private class-dump
//

@class IESECRelationFansClubModel;

@protocol IESECWinAuthorService <NSObject>

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarFrameInParent;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } followFrameInParent;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } windowTitleFrameInParent;
@property (nonatomic) BOOL hasSetAuthorService;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) double authorCardHeight;
@property (retain, nonatomic) IESECRelationFansClubModel *fansClubInfo;
@property (nonatomic) BOOL hasFansClubRedPackGuideBubble;
@property (nonatomic) BOOL showingFollowGuideBubble;
@property (nonatomic) BOOL showingFansClubGuideBubble;
@property (nonatomic) BOOL isFansClubRedPacketOpened;
@property (nonatomic) BOOL isFansClubGuideBubbleFirstShowed;

- (BOOL)isFollow;
- (void)setIsFollow:(BOOL)arg0;
- (id)fansClubInfo;
- (void)setFansClubInfo:(id)arg0;
- (void)jumpToDetailPageWithImpressionWord:(id)arg0;
- (BOOL)showingFollowGuideBubble;
- (void)setShowingFollowGuideBubble:(BOOL)arg0;
- (BOOL)showingFansClubGuideBubble;
- (void)setShowingFansClubGuideBubble:(BOOL)arg0;
- (void)setFrameWithSizeIfNeeded:(struct CGSize { double x0; double x1; })arg0 offset:(double)arg1 followRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 avatarRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg3 windowTitleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg4;
- (BOOL)isFansClubRedPacketOpened;
- (BOOL)isFansClubGuideBubbleFirstShowed;
- (void)setIsFansClubGuideBubbleFirstShowed:(BOOL)arg0;
- (void)reloadTabDataWithFollowStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarFrameInParent;
- (void)setAvatarFrameInParent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })followFrameInParent;
- (void)setFollowFrameInParent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowTitleFrameInParent;
- (void)setWindowTitleFrameInParent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (BOOL)hasSetAuthorService;
- (void)setHasSetAuthorService:(BOOL)arg0;
- (double)authorCardHeight;
- (void)setAuthorCardHeight:(double)arg0;
- (BOOL)hasFansClubRedPackGuideBubble;
- (void)setHasFansClubRedPackGuideBubble:(BOOL)arg0;
- (void)setIsFansClubRedPacketOpened:(BOOL)arg0;

@end
