//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface AWEStudioFeedbackRecorderParserItem : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    long long _count;
    long long _successCount;
    long long _cancelCount;
    NSMutableArray *_failInfoArray;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long count;
@property (nonatomic) long long successCount;
@property (nonatomic) long long cancelCount;
@property (retain, nonatomic) NSMutableArray *failInfoArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)failInfoArray;
- (void)setFailInfoArray:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)count;
- (void)setName:(id)arg0;
- (id)name;
- (long long)successCount;
- (long long)cancelCount;
- (void)setCancelCount:(long long)arg0;
- (void)setSuccessCount:(long long)arg0;

@end
