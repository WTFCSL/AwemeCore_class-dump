//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol AWEIMQuestionsAndAnswersActivityActionProtocol <NSObject>

+ (id)sceneKey;
+ (id)submitAnswerIndexKey;
+ (id)teamIdKey;

@property (nonatomic) long long type;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) id /* block */ completion;

- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg0;
- (void)setUserInfo:(id)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)userInfo;

@end
