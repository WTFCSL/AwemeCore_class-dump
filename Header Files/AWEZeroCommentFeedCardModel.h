//
//     Generated by private class-dump
//

@class NSArray, AWEAwemeModel;

@interface AWEZeroCommentFeedCardModel : AWEBaseApiModel {
    AWEAwemeModel *_aweme;
    NSArray *_commentList;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSArray *commentList;

+ (id)awemeJSONTransformer;
+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (id)commentList;
- (void)setCommentList:(id)arg0;
- (void).cxx_destruct;

@end
