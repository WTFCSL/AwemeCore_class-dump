//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEAdFollowUserParamModel : BDXBridgeModel {
    NSString *_userID;
    NSNumber *_action;
    NSString *_creativeID;
    NSNumber *_from;
    NSNumber *_fromPreviouspage;
    NSNumber *_channelID;
    NSNumber *_fromPageType;
    NSNumber *_prePageType;
}

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSString *creativeID;
@property (retain, nonatomic) NSNumber *from;
@property (retain, nonatomic) NSNumber *fromPreviouspage;
@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) NSNumber *fromPageType;
@property (retain, nonatomic) NSNumber *prePageType;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCreativeID:(id)arg0;
- (void)setPrePageType:(id)arg0;
- (void)setFromPageType:(id)arg0;
- (id)fromPageType;
- (id)fromPreviouspage;
- (void)setFromPreviouspage:(id)arg0;
- (id)prePageType;
- (id)userID;
- (id)channelID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (void)setChannelID:(id)arg0;
- (id)from;
- (void)setFrom:(id)arg0;
- (id)creativeID;

@end
