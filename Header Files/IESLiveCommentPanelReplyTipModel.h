//
//     Generated by private class-dump
//

@class NSString, HTSLiveText, HTSLiveUser;

@interface IESLiveCommentPanelReplyTipModel : NSObject {
    BOOL _isValid;
    long long _repliedMessageId;
    NSString *_method;
    HTSLiveUser *_user;
    HTSLiveText *_displayText;
    NSString *_content;
    NSString *_triggerType;
}

@property (nonatomic) BOOL isValid;
@property (nonatomic) long long repliedMessageId;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *triggerType;

- (void)updateInfoWithMessage:(id)arg0;
- (BOOL)isValidReply;
- (long long)repliedMessageId;
- (id)initWithMessageId:(long long)arg0 message:(id)arg1;
- (id)initWithMessageId:(long long)arg0 method:(id)arg1 user:(id)arg2 displayText:(id)arg3 content:(id)arg4;
- (void)setRepliedMessageId:(long long)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (void)setIsValid:(BOOL)arg0;
- (void).cxx_destruct;
- (id)method;
- (void)setTriggerType:(id)arg0;
- (void)setMethod:(id)arg0;
- (id)displayText;
- (BOOL)isValid;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setDisplayText:(id)arg0;
- (id)triggerType;

@end
