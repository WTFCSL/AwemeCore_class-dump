//
//     Generated by private class-dump
//

@interface AWEHitTaskInfoModel : AWEBaseApiModel {
    long long _completedTaskCount;
    long long _totalTaskCount;
}

@property (nonatomic) long long completedTaskCount;
@property (nonatomic) long long totalTaskCount;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)completedTaskCount;
- (void)setCompletedTaskCount:(long long)arg0;
- (long long)totalTaskCount;
- (void)setTotalTaskCount:(long long)arg0;
- (id)initWithDict:(id)arg0;

@end
