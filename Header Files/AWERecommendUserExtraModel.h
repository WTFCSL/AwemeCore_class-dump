//
//     Generated by private class-dump
//

@class NSNumber, NSArray, NSString;

@interface AWERecommendUserExtraModel : AWEBaseApiModel {
    NSNumber *_userID;
    NSArray *_awemeList;
    NSString *_secUserID;
}

@property (retain, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSString *secUserID;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)secUserID;
- (void)setSecUserID:(id)arg0;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:(id)arg0;

@end