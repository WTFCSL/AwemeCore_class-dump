//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFilteredAwemeModel : MTLModel <MTLJSONSerializing> {
    NSString *_awemeID;
    long long _filteredReason;
}

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) long long filteredReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (long long)filteredReason;
- (void)setFilteredReason:(long long)arg0;
- (void).cxx_destruct;

@end
