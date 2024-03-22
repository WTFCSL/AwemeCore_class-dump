//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSNumber;
@protocol AWEHttpTask;

@interface AWELiveAcqCastVideoSearchUserManager : NSObject {
    BOOL _hasMore;
    BOOL _hitLimit;
    NSString *_keyword;
    NSArray *_userList;
    NSDictionary *_logPassback;
    NSNumber *_cursor;
    id<AWEHttpTask> _task;
}

@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hitLimit;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSArray *userList;

- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (id)initWithKeyword:(id)arg0;
- (void)setUserList:(id)arg0;
- (BOOL)hitLimit;
- (void)setHitLimit:(BOOL)arg0;
- (void)loadMoreUser:(id /* block */)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setTask:(id)arg0;
- (id)task;
- (void)setCursor:(id)arg0;
- (id)userList;
- (void)setKeyword:(id)arg0;
- (id)keyword;

@end
