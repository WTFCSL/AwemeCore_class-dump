//
//     Generated by private class-dump
//

@class IESLivePlaybackAutoHideLockButton;

@protocol IESLivePlaybackAutoHideRouter <NSObject>

@property (readonly, nonatomic) IESLivePlaybackAutoHideLockButton *lockButton;

- (id)lockButton;
- (void)restartAutoHideByUserAction;
- (BOOL)isLocked;

@end