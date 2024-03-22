//
//     Generated by private class-dump
//

@class NSNumber, NSDictionary;

@protocol AFDMentionAilabDefaultUserListDataControllerProtocol <NSObject>

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSDictionary *logPassback;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)fetchDefaultDataWithRecentMentionByGroupId:(id)arg0 scene:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchDefaultDataWithGroupId:(id)arg0 scene:(long long)arg1 completion:(id /* block */)arg2;
- (id)cursor;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)reset;
- (void)setCursor:(id)arg0;

@end
