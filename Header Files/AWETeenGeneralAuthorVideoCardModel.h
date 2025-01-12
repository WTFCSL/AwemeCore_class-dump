//
//     Generated by private class-dump
//

@class NSArray, AWEUserModel, NSMutableDictionary;

@interface AWETeenGeneralAuthorVideoCardModel : AWEBaseApiModel {
    AWEUserModel *_author;
    NSArray *_awemeList;
    NSMutableDictionary *_trackParams;
}

@property (retain, nonatomic) AWEUserModel *author;
@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSMutableDictionary *trackParams;

+ (id)awemeListJSONTransformer;
+ (id)authorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (void)setTrackParams:(id)arg0;
- (void).cxx_destruct;
- (id)author;
- (void)setAuthor:(id)arg0;

@end
