//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDMannorSendThirdTrackParamModel : BDXBridgeModel {
    NSArray *_trackURLList;
    NSString *_trackLabel;
    NSString *_creativeID;
    NSString *_adID;
    NSString *_logExtra;
    NSString *_groupID;
}

@property (copy, nonatomic) NSArray *trackURLList;
@property (copy, nonatomic) NSString *trackLabel;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *groupID;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (void)setTrackLabel:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (id)trackURLList;
- (void)setTrackURLList:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (id)trackLabel;
- (id)creativeID;

@end
