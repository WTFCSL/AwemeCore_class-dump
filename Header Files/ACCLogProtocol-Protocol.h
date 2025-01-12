//
//     Generated by private class-dump
//

@protocol ACCLogProtocol <NSObject>

- (void)appendLogData:(id)arg0;
- (void)uploadALogBeforeNow:(double)arg0 retryTimes:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)toolInfoLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })arg0 message:(id)arg1;
- (void)toolErrorLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })arg0 message:(id)arg1;
- (void)toolWarnLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })arg0 message:(id)arg1;
- (void)toolDebugLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })arg0 message:(id)arg1;
- (void)toolVerboseLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })arg0 message:(id)arg1;
- (void)appendCoreLogWithTag:(id)arg0 log:(id)arg1;
- (id)createLogTagWithTag:(unsigned long long)arg0 subtag:(id)arg1;
- (void)uploadALog;

@end
