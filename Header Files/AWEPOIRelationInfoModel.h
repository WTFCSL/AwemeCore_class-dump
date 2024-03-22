//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPOIRelationInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_relation;
    NSArray *_socialRelations;
    NSString *_rankDesc;
    NSArray *_recommReasons;
    NSArray *_pubOpinions;
}

@property (copy, nonatomic) NSString *relation;
@property (copy, nonatomic) NSArray *socialRelations;
@property (copy, nonatomic) NSString *rankDesc;
@property (copy, nonatomic) NSArray *recommReasons;
@property (copy, nonatomic) NSArray *pubOpinions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)rankDesc;
- (void)setRankDesc:(id)arg0;
- (id)socialRelations;
- (void)setSocialRelations:(id)arg0;
- (id)recommReasons;
- (void)setRecommReasons:(id)arg0;
- (id)pubOpinions;
- (void)setPubOpinions:(id)arg0;
- (void).cxx_destruct;
- (id)relation;
- (void)setRelation:(id)arg0;

@end