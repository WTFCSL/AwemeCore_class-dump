//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESECShopPopupManager : NSObject {
    NSMutableArray *_tasks;
}

@property (retain, nonatomic) NSMutableArray *tasks;

- (void)triggerPopupShow:(unsigned long long)arg0;
- (void)triggerPopupShow:(unsigned long long)arg0 fromContinue:(BOOL)arg1 skip:(BOOL)arg2;
- (id)findTaskByPriority:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)addTask:(id)arg0;
- (void)clear;
- (id)tasks;
- (void)setTasks:(id)arg0;

@end