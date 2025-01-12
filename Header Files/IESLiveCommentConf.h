//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveCommentConf : NSObject {
    BOOL _isAnchor;
    BOOL _isLandscape;
    BOOL _isAdmin;
    BOOL _isAcquaintanceRoom;
    BOOL _hideDanmakuSwitch;
    BOOL _hideAudioChatSwitch;
    BOOL _hideVideoShareSwitch;
    BOOL _danmukuSwitchOn;
    BOOL _grayedOutDanmaku;
    BOOL _onlyChat;
    double _slideOffset;
    double _bottomOffset;
    NSString *_placeholderText;
    NSString *_defaultContent;
    NSString *_pinCommentReplyHint;
    NSString *_payedDanmakuPriceHint;
    NSString *_grayedOutDanmakuString;
    unsigned long long _defaultKeyboardType;
    unsigned long long _defaultEmojiType;
    NSString *_disableInputCommentToast;
}

@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) double slideOffset;
@property (nonatomic) double bottomOffset;
@property (copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) NSString *defaultContent;
@property (copy, nonatomic) NSString *pinCommentReplyHint;
@property (copy, nonatomic) NSString *payedDanmakuPriceHint;
@property (nonatomic) BOOL isAcquaintanceRoom;
@property (nonatomic) BOOL hideDanmakuSwitch;
@property (nonatomic) BOOL hideAudioChatSwitch;
@property (nonatomic) BOOL hideVideoShareSwitch;
@property (nonatomic) BOOL danmukuSwitchOn;
@property (nonatomic) BOOL grayedOutDanmaku;
@property (nonatomic) BOOL onlyChat;
@property (copy, nonatomic) NSString *grayedOutDanmakuString;
@property (nonatomic) unsigned long long defaultKeyboardType;
@property (nonatomic) unsigned long long defaultEmojiType;
@property (retain, nonatomic) NSString *disableInputCommentToast;

- (void)setIsAnchor:(BOOL)arg0;
- (id)defaultContent;
- (BOOL)isAcquaintanceRoom;
- (void)setDefaultContent:(id)arg0;
- (void)setIsAdmin:(BOOL)arg0;
- (id)disableInputCommentToast;
- (void)setDisableInputCommentToast:(id)arg0;
- (void)setHideDanmakuSwitch:(BOOL)arg0;
- (BOOL)hideDanmakuSwitch;
- (unsigned long long)defaultKeyboardType;
- (id)grayedOutDanmakuString;
- (BOOL)grayedOutDanmaku;
- (id)payedDanmakuPriceHint;
- (id)pinCommentReplyHint;
- (void)setDanmukuSwitchOn:(BOOL)arg0;
- (void)setGrayedOutDanmaku:(BOOL)arg0;
- (id)initWithDefaultConf;
- (double)slideOffset;
- (void)setSlideOffset:(double)arg0;
- (void)setPinCommentReplyHint:(id)arg0;
- (void)setPayedDanmakuPriceHint:(id)arg0;
- (void)setIsAcquaintanceRoom:(BOOL)arg0;
- (BOOL)hideAudioChatSwitch;
- (void)setHideAudioChatSwitch:(BOOL)arg0;
- (BOOL)hideVideoShareSwitch;
- (void)setHideVideoShareSwitch:(BOOL)arg0;
- (BOOL)danmukuSwitchOn;
- (BOOL)onlyChat;
- (void)setOnlyChat:(BOOL)arg0;
- (void)setGrayedOutDanmakuString:(id)arg0;
- (void)setDefaultKeyboardType:(unsigned long long)arg0;
- (unsigned long long)defaultEmojiType;
- (void)setDefaultEmojiType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setIsLandscape:(BOOL)arg0;
- (BOOL)isLandscape;
- (void)setPlaceholderText:(id)arg0;
- (id)placeholderText;
- (BOOL)isAdmin;
- (double)bottomOffset;
- (void)setBottomOffset:(double)arg0;

@end
