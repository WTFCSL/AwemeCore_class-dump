//
//     Generated by private class-dump
//

@class NSString;

@protocol AWETheaterWatchTaskOutputerProtocol <AWEUGStateOutputerProtocol>

+ (void)setLvModuleStr:(id)arg0;
+ (id)lvModuleString;
+ (id)activityId;
+ (void)setActivityId:(id)arg0;

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *module;
@property (copy, nonatomic) NSString *videoHallPreviousPage;
@property (nonatomic) long long videoHallPageType;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setVideoHallPreviousPage:(id)arg0;
- (void)setVideoHallPageType:(long long)arg0;
- (long long)videoHallPageType;
- (id)videoHallPreviousPage;
- (id)module;
- (void)setModule:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end
