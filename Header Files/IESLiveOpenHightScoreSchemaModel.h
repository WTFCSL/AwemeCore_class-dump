//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveOpenHightScoreSchemaModel : IESLiveWebcastBaseModel {
    NSString *_queryUserName;
    long long _queryUserId;
    NSString *_requestPage;
}

@property (copy, nonatomic) NSString *queryUserName;
@property (nonatomic) long long queryUserId;
@property (copy, nonatomic) NSString *requestPage;

- (id)requestPage;
- (void)setRequestPage:(id)arg0;
- (id)parsedKeys;
- (long long)queryUserId;
- (void)setQueryUserId:(long long)arg0;
- (void)setQueryUserName:(id)arg0;
- (id)queryUserName;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg0;

@end