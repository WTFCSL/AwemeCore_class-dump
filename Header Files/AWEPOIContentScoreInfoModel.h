//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPOIContentScoreInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_score;
    NSString *_scoreText;
    NSString *_scoreContent;
    NSArray *_scoreIconList;
    NSArray *_scoreIconUrlList;
}

@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *scoreText;
@property (copy, nonatomic) NSString *scoreContent;
@property (copy, nonatomic) NSArray *scoreIconList;
@property (copy, nonatomic) NSArray *scoreIconUrlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scoreIconListJSONTransformer;
+ (id)scoreIconUrlListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)scoreText;
- (void)setScoreText:(id)arg0;
- (id)scoreContent;
- (void)setScoreContent:(id)arg0;
- (id)scoreIconList;
- (void)setScoreIconList:(id)arg0;
- (id)scoreIconUrlList;
- (void)setScoreIconUrlList:(id)arg0;
- (void)setScore:(id)arg0;
- (id)score;
- (void).cxx_destruct;

@end