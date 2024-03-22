//
//     Generated by private class-dump
//

@class NSString, AWEECOMIMChatRichTextModel;

@interface AWEECOMIMAnnounceMentModel : NSObject {
    BOOL _tipTextHasLink;
    BOOL _isClear;
    NSString *_leftIconString;
    NSString *_rightIconString;
    NSString *_button_text;
    long long _warnType;
    long long _refreshTime;
    long long _pushRefreshTime;
    AWEECOMIMChatRichTextModel *_richTextModel;
    long long _annnoncementType;
    NSString *_skipURLString;
}

@property (copy, nonatomic) NSString *leftIconString;
@property (copy, nonatomic) NSString *rightIconString;
@property (copy, nonatomic) NSString *button_text;
@property (nonatomic) long long warnType;
@property (nonatomic) long long refreshTime;
@property (nonatomic) long long pushRefreshTime;
@property (retain, nonatomic) AWEECOMIMChatRichTextModel *richTextModel;
@property (nonatomic) BOOL tipTextHasLink;
@property (nonatomic) BOOL isClear;
@property (nonatomic) long long annnoncementType;
@property (copy, nonatomic) NSString *skipURLString;

- (id)button_text;
- (void)setButton_text:(id)arg0;
- (id)leftIconString;
- (void)setLeftIconString:(id)arg0;
- (id)rightIconString;
- (void)setRightIconString:(id)arg0;
- (long long)warnType;
- (void)setWarnType:(long long)arg0;
- (long long)pushRefreshTime;
- (void)setPushRefreshTime:(long long)arg0;
- (id)richTextModel;
- (void)setRichTextModel:(id)arg0;
- (BOOL)tipTextHasLink;
- (void)setTipTextHasLink:(BOOL)arg0;
- (long long)annnoncementType;
- (void)setAnnnoncementType:(long long)arg0;
- (id)skipURLString;
- (void)setSkipURLString:(id)arg0;
- (void)setRefreshTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)refreshTime;
- (id)initWithDict:(id)arg0;
- (BOOL)isClear;
- (void)setIsClear:(BOOL)arg0;

@end