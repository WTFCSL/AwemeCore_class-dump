//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveComponentSyncGroupSubscriber : NSObject {
    NSString *_taskID;
    id /* block */ _callback;
}

@property (retain, nonatomic) NSString *taskID;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (void)setCallback:(id /* block */)arg0;
- (id /* block */)callback;
- (id)taskID;
- (void)setTaskID:(id)arg0;

@end
