//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEIMIncentiveChatTask : NSObject {
    BOOL _completed;
    long long _taskId;
    NSString *_taskKey;
    NSString *_token;
    NSDictionary *_extra;
    NSDictionary *_dictionaryRawData;
}

@property (copy, nonatomic) NSDictionary *dictionaryRawData;
@property (nonatomic) long long taskId;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL completed;

- (void)setExtra:(id)arg0;
- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (id)dictionaryRawData;
- (void)setDictionaryRawData:(id)arg0;
- (void)setCompleted:(BOOL)arg0;
- (BOOL)completed;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (void)setToken:(id)arg0;
- (id)extra;
- (id)token;
- (long long)taskId;
- (void)setTaskId:(long long)arg0;

@end
