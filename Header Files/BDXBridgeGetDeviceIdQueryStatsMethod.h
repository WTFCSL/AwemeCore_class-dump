//
//     Generated by private class-dump
//

@interface BDXBridgeGetDeviceIdQueryStatsMethod : BDXBridgeMethod

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (id)__getIDFAStateWithDateLimit:(long long)arg0;
- (id)__getIDFVStateWithDateLimit:(long long)arg0;
- (id)__getContactsStateWithDateLimit:(long long)arg0;
- (id)__fetchAPIStateWithName:(id)arg0 value:(id)arg1 dateLimit:(long long)arg2 storageKey:(id)arg3;
- (id)__maskPrivateString:(id)arg0;
- (long long)__fetchQueryCountWithRecordList:(id)arg0 dateLimit:(long long)arg1;
- (BOOL)__checkDate:(id)arg0 from:(id)arg1 to:(id)arg2;
- (id)methodName;

@end
