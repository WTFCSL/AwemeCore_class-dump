//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXTracertMonitorConfig : NSObject {
    NSString *_tracertID;
    NSString *_schema;
    NSString *_containerType;
    NSString *_containerVersion;
    NSDictionary *_commonCategory;
    long long _cardOptimizeMode;
}

@property (copy, nonatomic) NSString *tracertID;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *containerType;
@property (copy, nonatomic) NSString *containerVersion;
@property (copy, nonatomic) NSDictionary *commonCategory;
@property (nonatomic) long long cardOptimizeMode;

- (id)commonCategory;
- (void)setTracertID:(id)arg0;
- (void)setCommonCategory:(id)arg0;
- (void)setCardOptimizeMode:(long long)arg0;
- (long long)cardOptimizeMode;
- (id)tracertID;
- (id)containerVersion;
- (void)setContainerVersion:(id)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)schema;
- (id)containerType;
- (void)setContainerType:(id)arg0;

@end
