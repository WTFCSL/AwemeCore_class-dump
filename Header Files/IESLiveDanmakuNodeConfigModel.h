//
//     Generated by private class-dump
//

@class UIColor, NSString, NSArray, HTSLiveScreenChatMessage_Effect, HTSLiveImage, HTSLiveUser, GPBMessage, NSNumber, HTSLiveText;

@interface IESLiveDanmakuNodeConfigModel : NSObject {
    BOOL _onlyImageContent;
    BOOL _isLandscape;
    BOOL _isCurrentUser;
    BOOL _showNickname;
    BOOL _isOfficial;
    BOOL _isStar;
    BOOL _isCustomVerify;
    BOOL _sendReview;
    GPBMessage *_message;
    NSString *_content;
    HTSLiveText *_displayText;
    long long _msgId;
    HTSLiveUser *_userModel;
    NSString *_nickName;
    NSArray *_avatarUrls;
    NSString *_fullScreenTextColor;
    UIColor *_backGroundColor;
    NSArray *_fontColorValueArray;
    long long _priority;
    HTSLiveScreenChatMessage_Effect *_effectV2;
    HTSLiveImage *_authenticationBadge;
    NSNumber *_localTimeStamp;
    long long _eventTime;
    long long _qualityScore;
}

@property (retain, nonatomic) GPBMessage *message;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL onlyImageContent;
@property (nonatomic) long long msgId;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) HTSLiveUser *userModel;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL showNickname;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSArray *avatarUrls;
@property (copy, nonatomic) NSString *fullScreenTextColor;
@property (retain, nonatomic) UIColor *backGroundColor;
@property (nonatomic) BOOL isOfficial;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL isStar;
@property (copy, nonatomic) NSArray *fontColorValueArray;
@property (retain, nonatomic) HTSLiveScreenChatMessage_Effect *effectV2;
@property (nonatomic) BOOL isCustomVerify;
@property (retain, nonatomic) HTSLiveImage *authenticationBadge;
@property (retain, nonatomic) NSNumber *localTimeStamp;
@property (nonatomic) long long eventTime;
@property (nonatomic) BOOL sendReview;
@property (nonatomic) long long qualityScore;

- (id)localTimeStamp;
- (void)setLocalTimeStamp:(id)arg0;
- (BOOL)isStar;
- (id)avatarUrls;
- (void)setAvatarUrls:(id)arg0;
- (id)backGroundColor;
- (void)setBackGroundColor:(id)arg0;
- (void)setIsOfficial:(BOOL)arg0;
- (BOOL)isOfficial;
- (void)setIsStar:(BOOL)arg0;
- (BOOL)showNickname;
- (void)setShowNickname:(BOOL)arg0;
- (void)setFullScreenTextColor:(id)arg0;
- (id)authenticationBadge;
- (BOOL)sendReview;
- (void)setSendReview:(BOOL)arg0;
- (id)fullScreenTextColor;
- (void)setupForChatMessage:(id)arg0;
- (void)setupForScreenChatMessage:(id)arg0;
- (void)setupForAudioChatMessage:(id)arg0;
- (void)setupForEmojiChatMessage:(id)arg0;
- (void)setIsCustomVerify:(BOOL)arg0;
- (void)setAuthenticationBadge:(id)arg0;
- (void)setFontColorValueArray:(id)arg0;
- (id)effectV2;
- (void)setEffectV2:(id)arg0;
- (void)setOnlyImageContent:(BOOL)arg0;
- (BOOL)onlyImageContent;
- (id)fontColorValueArray;
- (BOOL)isCustomVerify;
- (void)setMessage:(id)arg0;
- (void)setNickName:(id)arg0;
- (long long)eventTime;
- (void).cxx_destruct;
- (void)setEventTime:(long long)arg0;
- (id)displayText;
- (id)content;
- (id)message;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setPriority:(long long)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (id)initWithMessage:(id)arg0;
- (void)setContent:(id)arg0;
- (id)nickName;
- (long long)qualityScore;
- (BOOL)isLandscape;
- (long long)priority;
- (void)setDisplayText:(id)arg0;
- (long long)msgId;
- (void)setMsgId:(long long)arg0;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)setQualityScore:(long long)arg0;

@end
