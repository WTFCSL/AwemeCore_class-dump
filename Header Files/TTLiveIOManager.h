//
//     Generated by private class-dump
//

@interface TTLiveIOManager : NSObject {
    void *mLogCallbackHandle;
}

+ (id)sharedInstance;

- (id)getStringValue:(int)arg0;
- (void)setValueVoidPTR:(void *)arg0 forKey:(int)arg1;
- (void)setConfig:(int)arg0 withConf:(id)arg1;
- (void)prepare:(id)arg0 withVpaas:(id)arg1;
- (void)notifyFinish:(id)arg0 withInfo:(id)arg1;
- (void)setIntValue:(int)arg0 withValue:(int)arg1;
- (void)setInt64ValueByStrKey:(int)arg0 withKey:(id)arg1 withValue:(long long)arg2;
- (void)setInt64Value:(int)arg0 withValue:(long long)arg1;
- (long long)getLongValueByStr:(id)arg0 withKey:(int)arg1;
- (long long)getLongValue:(int)arg0;
- (id)getStringValueByStr:(id)arg0 withKey:(int)arg1;
- (void)setStringValue:(int)arg0 withValue:(id)arg1;
- (void)preConnect:(id)arg0 withParams:(id)arg1;
- (void)set_logger_callback_handle:(void *)arg0;
- (void)close;
- (long long)start;

@end
