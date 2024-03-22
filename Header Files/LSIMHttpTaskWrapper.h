//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHttpTask;

@interface LSIMHttpTaskWrapper : NSObject <LSIMHttpTask> {
    id<AWEHttpTask> _task;
}

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAWEHttpTask:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (long long)state;
- (void)suspend;
- (void)setPriority:(float)arg0;
- (void)setTask:(id)arg0;
- (void)cancel;
- (id)task;

@end
