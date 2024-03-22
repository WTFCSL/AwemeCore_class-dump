//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDictionary;

@interface IESGCPADTrackerModel : NSObject {
    NSString *_event;
    NSString *_label;
    NSString *_logExtra;
    NSNumber *_creativeID;
    NSString *_groupID;
    NSString *_refer;
    NSDictionary *_extra;
    NSDictionary *_adExtraData;
    NSNumber *_adID;
}

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (retain, nonatomic) NSNumber *adID;

- (void)setExtra:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setAdExtraData:(id)arg0;
- (id)adExtraData;
- (void)setRefer:(id)arg0;
- (void)setCreativeID:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (id)refer;
- (void)setGroupID:(id)arg0;
- (void)setEvent:(id)arg0;
- (id)event;
- (id)groupID;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)extra;
- (id)label;
- (id)creativeID;

@end
