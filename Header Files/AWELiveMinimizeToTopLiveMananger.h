//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UIView, NSNumber;
@protocol IESLiveRoomService;

@interface AWELiveMinimizeToTopLiveMananger : NSObject <CAAnimationDelegate, IESLiveRoomPopService, AWELiveRoomMinimizeProtocol> {
    id<IESLiveRoomService> _roomModel;
    NSTimer *_roomCheckTimer;
    UIView *_screenShotView;
    NSNumber *_toRoomID;
    UIView *_avatarView;
    UIImageView *_avatarImageView;
    UIImageView *_liveMarkView;
    UIImageView *_imageView;
    UIView *_reddot;
    UIView *_targetView;
    UIView *_holderView;
}

@property (retain, nonatomic) UIView *screenShotView;
@property (retain, nonatomic) NSNumber *toRoomID;
@property (retain, nonatomic) UIView *avatarView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *liveMarkView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *reddot;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *holderView;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) NSTimer *roomCheckTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)roomModel;
- (void)clearRoom;
- (id)reddot;
- (void)setReddot:(id)arg0;
- (id)holderView;
- (void)setHolderView:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (id)liveMarkView;
- (void)setLiveMarkView:(id)arg0;
- (void)checkRoomStatus;
- (id)roomCheckTimer;
- (void)trackMinimizeRedPointShow;
- (void)setRoomCheckTimer:(id)arg0;
- (BOOL)liveEnableMinimizeBackGes;
- (BOOL)minimizeEnableRedPoint;
- (double)minimizeRedPointShowDuration;
- (void)setReddotHiddenStatus:(BOOL)arg0;
- (id)toRoomID;
- (void)setScreenShotView:(id)arg0;
- (id)screenShotView;
- (void)playAvatarAnimation:(id)arg0;
- (void)removeMinimizeAnimation;
- (void)invalidateRoomCheckTimerIfNeeded;
- (void)minimizeRoomWithScreenshot:(id)arg0 room:(id)arg1 animated:(BOOL)arg2 progress:(double)arg3 completion:(id /* block */)arg4;
- (BOOL)isLiveEntranceInVC:(id)arg0;
- (void)removeReddot;
- (BOOL)hasMinimizedRoom;
- (void)startRoomCheckTimerIfNeeded;
- (void)setMinimizeHoldView:(id)arg0;
- (void)setToRoomID:(id)arg0;
- (id)init;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)targetView;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)setTargetView:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;

@end