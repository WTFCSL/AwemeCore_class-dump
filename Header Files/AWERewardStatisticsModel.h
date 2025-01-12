//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWERewardStatisticsModel : MTLModel <MTLJSONSerializing> {
    long long _type;
    long long _status;
    NSString *_result;
    AWEURLModel *_iconURL;
    NSString *_schema;
    NSString *_taskType;
}

@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *taskType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setSchema:(id)arg0;
- (id)taskType;
- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)result;
- (long long)type;
- (void)setType:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (id)schema;
- (void)setTaskType:(id)arg0;

@end
