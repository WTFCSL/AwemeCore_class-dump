//
//     Generated by private class-dump
//

@class NSString;

@interface AWESubChallengeModel : MTLModel <MTLJSONSerializing> {
    BOOL _isCommerce;
    NSString *_subChallengeID;
    NSString *_subChallengeName;
    NSString *_subChallengeDescription;
}

@property (copy, nonatomic) NSString *subChallengeID;
@property (copy, nonatomic) NSString *subChallengeName;
@property (copy, nonatomic) NSString *subChallengeDescription;
@property (nonatomic) BOOL isCommerce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isCommerce;
- (void)setIsCommerce:(BOOL)arg0;
- (id)subChallengeID;
- (void)setSubChallengeID:(id)arg0;
- (id)subChallengeName;
- (void)setSubChallengeName:(id)arg0;
- (id)subChallengeDescription;
- (void)setSubChallengeDescription:(id)arg0;
- (void).cxx_destruct;

@end
