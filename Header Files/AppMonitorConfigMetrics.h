//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary;

@interface AppMonitorConfigMetrics : NSObject {
    NSMutableDictionary *_extra_dic;
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *extra_dic;
@property (retain, nonatomic) NSLock *lock;

- (id)getDimensionResultWithKey:(id)arg0 Dimension:(id)arg1;
- (id)getArgsResultWithKey:(id)arg0 Arg:(id)arg1;
- (void)parseExtraInfo:(id)arg0 Key:(id)arg1;
- (BOOL)compare:(id)arg0 Value:(id)arg1 Include:(int)arg2;
- (id)extra_dic;
- (void)setExtra_dic:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (void)setLock:(id)arg0;

@end
