//
//     Generated by private class-dump
//

@class HTSLiveCommentPushApi, NSString, HTSLiveUser;
@protocol IESLiveRoomService;

@interface HTSLiveCommentPushViewModel : NSObject {
    BOOL _isCommentMsgPush;
    BOOL _isGiftMsgPush;
    BOOL _isSystemMsgPush;
    BOOL _isUserEnterMsgPush;
    BOOL _shouldShowPushView;
    BOOL _shouldShowUnselectModeAlertView;
    BOOL _autoScrollToBottom;
    BOOL _didEndDragging;
    NSString *_toastString;
    id<IESLiveRoomService> _roomModel;
    long long _currentMode;
    HTSLiveCommentPushApi *_api;
    HTSLiveUser *_currentUser;
}

@property (retain, nonatomic) HTSLiveCommentPushApi *api;
@property (retain, nonatomic) HTSLiveUser *currentUser;
@property (nonatomic) BOOL isCommentMsgPush;
@property (nonatomic) BOOL isGiftMsgPush;
@property (nonatomic) BOOL isSystemMsgPush;
@property (nonatomic) BOOL isUserEnterMsgPush;
@property (nonatomic) BOOL shouldShowPushView;
@property (nonatomic) BOOL shouldShowUnselectModeAlertView;
@property (copy, nonatomic) NSString *toastString;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) long long currentMode;
@property (nonatomic) BOOL autoScrollToBottom;
@property (nonatomic) BOOL didEndDragging;

- (id)roomModel;
- (void)didSetAttachingDIContext;
- (id)toastString;
- (void)setToastString:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (BOOL)autoScrollToBottom;
- (id)initWithRoomModel:(id)arg0;
- (BOOL)liveAnchorInteractMsgFloatingStyleEnable;
- (void)setAutoScrollToBottom:(BOOL)arg0;
- (long long)liveAnchorInteractMsgFloatingStyleHeight;
- (void)setDidEndDragging:(BOOL)arg0;
- (void)updateAnchorCommentPushConfig;
- (void)setAllSettingStatus:(BOOL)arg0;
- (void)sendConfigRequestExplicitWithSettingType:(long long)arg0 isOn:(id)arg1;
- (void)sendConfigRequestWithSettingType:(long long)arg0 isOn:(id)arg1;
- (void)setShouldShowUnselectModeAlertView:(BOOL)arg0;
- (id)requestPushNotificationPermission;
- (void)setShouldShowPushView:(BOOL)arg0;
- (void)updateSettingTypeByGet:(id)arg0;
- (void)updateSettingType:(long long)arg0 status:(BOOL)arg1;
- (void)updateSettingTypeBySet:(id)arg0 error:(id)arg1;
- (void)setIsSystemMsgPush:(BOOL)arg0;
- (void)setIsGiftMsgPush:(BOOL)arg0;
- (void)setIsCommentMsgPush:(BOOL)arg0;
- (void)setIsUserEnterMsgPush:(BOOL)arg0;
- (BOOL)isCommentMsgPush;
- (BOOL)isGiftMsgPush;
- (BOOL)isSystemMsgPush;
- (BOOL)isUserEnterMsgPush;
- (BOOL)shouldShowPushView;
- (BOOL)shouldShowUnselectModeAlertView;
- (long long)currentMode;
- (void).cxx_destruct;
- (void)setCurrentMode:(long long)arg0;
- (id)currentUser;
- (void)setCurrentUser:(id)arg0;
- (id)api;
- (BOOL)didEndDragging;
- (void)setApi:(id)arg0;

@end