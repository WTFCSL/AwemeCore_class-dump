//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWECommentActionParameterModel : NSObject {
    BOOL _isXiguaVideo;
    NSString *_commentID;
    NSString *_awemeID;
    long long _actionType;
    long long _levelType;
    long long _replyStyle;
    long long _adLinkType;
    NSString *_attitudeType;
    NSString *_enterFrom;
    NSString *_referString;
    NSString *_previousPage;
    NSDictionary *_extraParams;
}

@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long actionType;
@property (nonatomic) long long levelType;
@property (nonatomic) long long replyStyle;
@property (nonatomic) long long adLinkType;
@property (copy, nonatomic) NSString *attitudeType;
@property (nonatomic) BOOL isXiguaVideo;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *extraParams;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (id)commentID;
- (void)setCommentID:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setReplyStyle:(long long)arg0;
- (void)setAttitudeType:(id)arg0;
- (id)attitudeType;
- (id)extraParams;
- (long long)replyStyle;
- (void)setAdLinkType:(long long)arg0;
- (long long)adLinkType;
- (void)setExtraParams:(id)arg0;
- (BOOL)isXiguaVideo;
- (long long)levelType;
- (void)setLevelType:(long long)arg0;
- (void)setIsXiguaVideo:(BOOL)arg0;
- (void)setActionType:(long long)arg0;
- (long long)actionType;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end
