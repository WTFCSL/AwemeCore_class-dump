//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDate;

@interface AFServiceCenter : NSObject {
    NSDate *_lastCallDate;
    NSMutableDictionary *_tasks;
}

@property (retain, nonatomic) NSDate *lastCallDate;
@property (retain, nonatomic) NSMutableDictionary *tasks;

+ (void)callService:(unsigned long long)arg0 withParams:(id)arg1 andCompletion:(id /* block */)arg2;
+ (void)handleResponseURL:(id)arg0 withCompletion:(id /* block */)arg1;
+ (id)bizNameByService:(unsigned long long)arg0;
+ (id)shared;

- (void)callService:(unsigned long long)arg0 withParams:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleResponseURL:(id)arg0 withCompletion:(id /* block */)arg1;
- (id)lastCallDate;
- (void)setLastCallDate:(id)arg0;
- (BOOL)checkIfRepeat;
- (id)findTaskWithSession:(id)arg0;
- (void).cxx_destruct;
- (id)tasks;
- (void)setTasks:(id)arg0;

@end
