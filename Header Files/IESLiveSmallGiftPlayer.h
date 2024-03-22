//
//     Generated by private class-dump
//

@class HTSEventContext;
@protocol IESLiveRoomServiceAdapter, IESLiveGiftPlayerDelegate;

@interface IESLiveSmallGiftPlayer : NSObject {
    BOOL _isVSRoom;
    id<IESLiveGiftPlayerDelegate> _delegate;
    id<IESLiveRoomServiceAdapter> _roomModel;
    HTSEventContext *_trackContext;
}

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveGiftPlayerDelegate> delegate;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) BOOL isVSRoom;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)roomModel;
- (BOOL)isVSRoom;
- (void)setRoomModel:(id)arg0;
- (void)setIsVSRoom:(BOOL)arg0;
- (id)initWithTrackContext:(id)arg0;
- (long long)isAnchorForTracker;
- (void)startPlayingGiftWithNode:(id)arg0 on:(id)arg1;
- (void)refreshComboStateWithNode:(id)arg0;
- (void)tapContainerWithNode:(id)arg0 animationModel:(id)arg1 on:(id)arg2;
- (void)tapAvatarViewWithNode:(id)arg0 animationModel:(id)arg1 on:(id)arg2;
- (void)trackForTrayViewShow:(id)arg0 withEndStep:(BOOL)arg1;
- (void)smallGiftViewDisplayFinishedFor:(id)arg0;
- (void)tapPreAnimationWithNode:(id)arg0 animationModel:(id)arg1 on:(id)arg2;
- (void)tapPostAnimationWithNode:(id)arg0 animationModel:(id)arg1 on:(id)arg2;
- (void)trackForPreAnimationWithNode:(id)arg0 animationModel:(id)arg1 trackEvent:(id)arg2;
- (void)trackForPostAnimationWithNode:(id)arg0 animationModel:(id)arg1 trackEvent:(id)arg2;
- (id)constructVectorFrom:(struct CGPoint { double x0; double x1; })arg0 to:(struct CGPoint { double x0; double x1; })arg1;
- (double)normOfVector:(id)arg0;
- (double)vector:(id)arg0 dotProduct:(id)arg1;
- (id)vector:(id)arg0 crossProduct:(id)arg1;
- (BOOL)vector:(id)arg0 hasSameDirectionWith:(id)arg1;
- (void)trackForGiftTrayPayingUserShow:(id)arg0;
- (void)trackForGiftViewClicked:(id)arg0 animationModel:(id)arg1;
- (BOOL)shouldOpenTraySchemaUrlWithNode:(id)arg0;
- (void)preloadDressPreviewIfNeeded:(id)arg0 schema:(id)arg1 on:(id)arg2 fromAvatar:(BOOL)arg3;
- (void)jumpToSameGift:(id)arg0;
- (void)showUserPreviewView:(id)arg0;
- (void)trackForAvatarViewClicked:(id)arg0 animationModel:(id)arg1;
- (void)toastWithNode:(id)arg0;
- (id)commonTrackParams:(id)arg0;
- (id)commonTrackParamsForTrayClickWithAnimationModel:(id)arg0;
- (id)getMissionInfoWithNode:(id)arg0;
- (id)trackParamsForTrayAnimation:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
