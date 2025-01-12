//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEAwemeModel;

@interface AWEGeneralHotSpotDiscussionModel : AWEBaseApiModel {
    AWEAwemeModel *_awemeInfo;
    NSArray *_commentList;
    long long _cardStyle;
    NSString *_sentenceId;
    NSString *_keyword;
    NSString *_title;
}

@property (retain, nonatomic) AWEAwemeModel *awemeInfo;
@property (retain, nonatomic) NSArray *commentList;
@property (nonatomic) long long cardStyle;
@property (retain, nonatomic) NSString *sentenceId;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *title;

+ (id)commentListJSONTransformer;
+ (id)awemeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeInfo;
- (id)sentenceId;
- (void)setSentenceId:(id)arg0;
- (id)commentList;
- (void)setCommentList:(id)arg0;
- (void)setAwemeInfo:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (long long)cardStyle;
- (void)setCardStyle:(long long)arg0;

@end
