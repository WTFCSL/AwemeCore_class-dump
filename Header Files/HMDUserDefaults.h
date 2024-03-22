//
//     Generated by private class-dump
//

@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDUserDefaults : NSObject {
    struct __CFString { } *_appNameRef;
    NSDictionary *_historyDic;
    NSObject<OS_dispatch_queue> *_serialSetQueue;
}

@property (readonly) struct __CFString { } *appNameRef;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialSetQueue;

+ (id)standardUserDefaults;

- (struct __CFString { } *)appNameRef;
- (id)objectForKeyCompatibleWithHistory:(id)arg0;
- (id)serialSetQueue;
- (long long)integerForKey:(id)arg0;
- (double)doubleForKey:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (id)init;
- (id)stringForKey:(id)arg0;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)initWithSuiteName:(id)arg0;
- (void)removeObjectForKey:(id)arg0;
- (void)setString:(id)arg0 forKey:(id)arg1;
- (id)sharedHistory;
- (id)objectForKey:(id)arg0;
- (void)dealloc;
- (void)removeAllObjects;
- (id)dictForKey:(id)arg0;

@end
