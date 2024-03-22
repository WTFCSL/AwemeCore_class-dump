//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEGeneralHotSpotRelatedUserModel : AWEBaseApiModel {
    NSArray *_userList;
    long long _cardStyle;
    NSString *_sentenceId;
    NSString *_keyword;
    NSString *_title;
}

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long cardStyle;
@property (retain, nonatomic) NSString *sentenceId;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *title;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)sentenceId;
- (void)setSentenceId:(id)arg0;
- (void)setUserList:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)userList;
- (void)setTitle:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (long long)cardStyle;
- (void)setCardStyle:(long long)arg0;

@end
