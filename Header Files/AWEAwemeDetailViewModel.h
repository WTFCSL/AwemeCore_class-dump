//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHttpTask;

@interface AWEAwemeDetailViewModel : NSObject {
    BOOL _gqActivityTaskRequestFailed;
    NSString *_taskToken;
    id<AWEHttpTask> _gqActivityDoneTask;
}

@property (copy, nonatomic) NSString *taskToken;
@property (nonatomic) BOOL gqActivityTaskRequestFailed;
@property (weak, nonatomic) id<AWEHttpTask> gqActivityDoneTask;
@property (readonly, nonatomic) BOOL hasGQActivity;

- (id)taskToken;
- (void)setTaskToken:(id)arg0;
- (id)initWithRouterParamDict:(id)arg0;
- (void)postRequestGQActivityTaskDoneIfNeeded;
- (BOOL)hasGQActivity;
- (BOOL)gqActivityTaskRequestFailed;
- (id)gqActivityDoneTask;
- (void)setGqActivityTaskRequestFailed:(BOOL)arg0;
- (void)setGqActivityDoneTask:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end