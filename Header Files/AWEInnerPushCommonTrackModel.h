//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface AWEInnerPushCommonTrackModel : NSObject {
    BOOL _isRecommendedByServer;
    NSString *_chatType;
    NSString *_enterFrom;
    NSString *_pushType;
    NSNumber *_ruleId;
    NSDictionary *_payloadDict;
    NSDictionary *_extraParams;
}

@property (copy, nonatomic) NSString *chatType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *pushType;
@property (retain, nonatomic) NSNumber *ruleId;
@property (copy, nonatomic) NSDictionary *payloadDict;
@property (nonatomic) BOOL isRecommendedByServer;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (id)chatType;
- (void)setChatType:(id)arg0;
- (void)setIsRecommendedByServer:(BOOL)arg0;
- (BOOL)isRecommendedByServer;
- (void).cxx_destruct;
- (void)setPushType:(id)arg0;
- (id)pushType;
- (id)payloadDict;
- (void)setPayloadDict:(id)arg0;
- (void)setRuleId:(id)arg0;
- (id)ruleId;

@end
