//
//     Generated by private class-dump
//

@class NSString;

@interface BDNovelRecommendTrackerObj : NSObject {
    NSString *_categoryName;
    NSString *_groupId;
    NSString *_enterFrom;
    NSString *_logPb;
}

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *logPb;

+ (void)getDictionary:(id /* block */)arg0;
+ (void)getObject:(id /* block */)arg0 key:(id)arg1;
+ (void)setObject:(id)arg0 key:(id)arg1;
+ (id)localPath;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setLogPb:(id)arg0;
- (id)logPb;
- (void).cxx_destruct;
- (void)setGroupId:(id)arg0;
- (id)groupId;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;

@end
