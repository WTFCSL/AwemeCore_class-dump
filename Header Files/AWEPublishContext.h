//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEPublishContext : NSObject <AWEPublishTaskMessage> {
    NSMutableDictionary *_context;
}

@property (retain, nonatomic) NSMutableDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyWithUID:(id)arg0;

- (void)task:(id)arg0 didWholeEndWithResult:(long long)arg1 error:(id)arg2;
- (void)p_removeTaskDictWithTaskId:(id)arg0;
- (id)valueForTaskId:(id)arg0 key:(id)arg1;
- (void)setValue:(id)arg0 forTaskId:(id)arg1 key:(id)arg2;
- (id)ignoreTaskIdValueWithKey:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;

@end
