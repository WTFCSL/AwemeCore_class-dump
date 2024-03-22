//
//     Generated by private class-dump
//

@protocol AWEUGPendantTaskProtocol <NSObject>

@property (readonly, nonatomic) BOOL isInProcess;
@property (readonly, nonatomic) BOOL isPausing;
@property (copy, nonatomic) id /* block */ taskDoneHandler;

- (void)taskDone;
- (void)bindTaskStatusTarget:(id)arg0;
- (BOOL)isPausing;
- (id /* block */)taskDoneHandler;
- (void)setTaskDoneHandler:(id /* block */)arg0;
- (void)resume;
- (void)stop;
- (BOOL)isInProcess;
- (void)start;
- (void)pause;

@end