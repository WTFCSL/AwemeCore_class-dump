//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHomePageBubbleTask : NSObject {
    BOOL _isValid;
    BOOL _hasInvokeTryShowCallBack;
    BOOL _hasInvokeReleaseCallBack;
    long long _taskID;
    double _pendingTime;
    NSString *_businessID;
    NSString *_scene;
    id /* block */ _tryShowCallBack;
    id /* block */ _releaseCallBack;
}

@property (readonly, nonatomic) long long taskID;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL hasInvokeTryShowCallBack;
@property (readonly, nonatomic) BOOL hasInvokeReleaseCallBack;
@property (nonatomic) double pendingTime;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) id /* block */ tryShowCallBack;
@property (copy, nonatomic) id /* block */ releaseCallBack;

+ (id)createTask;

- (void)closeTask;
- (void)setPendingTime:(double)arg0;
- (void)invokeReleaseCallBack;
- (void)setTryShowCallBack:(id /* block */)arg0;
- (double)pendingTime;
- (id /* block */)tryShowCallBack;
- (void)invokeTryShowCallBackWithResult:(long long)arg0;
- (void)setReleaseCallBack:(id /* block */)arg0;
- (BOOL)hasInvokeTryShowCallBack;
- (BOOL)hasInvokeReleaseCallBack;
- (id /* block */)releaseCallBack;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (long long)taskID;
- (BOOL)isEqual:(id)arg0;
- (id)businessID;
- (id)description;
- (void)setBusinessID:(id)arg0;
- (id)scene;
- (id)initWithTaskID:(long long)arg0;

@end