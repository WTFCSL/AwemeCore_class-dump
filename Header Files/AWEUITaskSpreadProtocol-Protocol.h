//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEUITaskSpreadProtocol <NSObject>

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double runTime;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *groupID;

- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void)setBlock:(id /* block */)arg0;
- (id)taskID;
- (double)runTime;
- (void)setTaskID:(id)arg0;
- (id /* block */)block;
- (void)setRunTime:(double)arg0;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg0;

@end
