//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEFormatRealtimeChatMsg : NSObject {
    BOOL _isFinished;
    BOOL _hasTextContent;
    BOOL _hasMultiMediaContent;
    float _audioDuration;
    NSString *_msgPkgID;
    NSString *_msgID;
    unsigned long long _roleType;
    unsigned long long _msgType;
    NSString *_textContent;
    NSArray *_multiMediaInfos;
    NSArray *_audioInfos;
    NSString *_reviewID;
    NSString *_hisOffsetID;
    NSString *_context;
}

@property (copy, nonatomic) NSString *msgPkgID;
@property (copy, nonatomic) NSString *msgID;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) unsigned long long roleType;
@property (nonatomic) unsigned long long msgType;
@property (nonatomic) BOOL hasTextContent;
@property (copy, nonatomic) NSString *textContent;
@property (nonatomic) BOOL hasMultiMediaContent;
@property (retain, nonatomic) NSArray *multiMediaInfos;
@property (retain, nonatomic) NSArray *audioInfos;
@property (nonatomic) float audioDuration;
@property (copy, nonatomic) NSString *reviewID;
@property (copy, nonatomic) NSString *hisOffsetID;
@property (copy, nonatomic) NSString *context;

- (id)msgID;
- (void)setMsgID:(id)arg0;
- (void)setRoleType:(unsigned long long)arg0;
- (unsigned long long)roleType;
- (void)setAudioInfos:(id)arg0;
- (id)audioInfos;
- (id)reviewID;
- (id)hisOffsetID;
- (BOOL)hasMultiMediaContent;
- (id)multiMediaInfos;
- (void)setReviewID:(id)arg0;
- (void)setHisOffsetID:(id)arg0;
- (void)setMsgPkgID:(id)arg0;
- (void)setHasMultiMediaContent:(BOOL)arg0;
- (void)setMultiMediaInfos:(id)arg0;
- (id)msgPkgID;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)description;
- (id)textContent;
- (void)setTextContent:(id)arg0;
- (void)setIsFinished:(BOOL)arg0;
- (BOOL)hasTextContent;
- (float)audioDuration;
- (void)setAudioDuration:(float)arg0;
- (void)setHasTextContent:(BOOL)arg0;
- (unsigned long long)msgType;
- (void)setMsgType:(unsigned long long)arg0;

@end
