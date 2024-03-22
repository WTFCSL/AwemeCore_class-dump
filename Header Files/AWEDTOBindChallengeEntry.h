//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOBindChallengeEntry : MTLModel <MTLJSONSerializing> {
    NSString *_itemID;
    NSString *_moduleKey;
    NSString *_orderIndex;
    NSString *_challengeName;
}

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *moduleKey;
@property (copy, nonatomic) NSString *orderIndex;
@property (copy, nonatomic) NSString *challengeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)moduleKey;
- (void)setModuleKey:(id)arg0;
- (id)orderIndex;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)setOrderIndex:(id)arg0;

@end
