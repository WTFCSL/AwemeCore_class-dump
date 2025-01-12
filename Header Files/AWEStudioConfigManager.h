//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEStudioConfigManager : NSObject {
    NSMutableDictionary *_getterDict;
}

@property (retain, nonatomic) NSMutableDictionary *getterDict;

+ (void)initialize;
+ (id)sharedInstance;

- (void)registerStringABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 defaultValue:(id)arg2 title:(id)arg3 description:(id)arg4 author:(id)arg5 PMs:(id)arg6 appVersion:(id)arg7 linesOfBusiness:(id)arg8 modules:(id)arg9;
- (void)registerBoolABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 defaultValue:(BOOL)arg2 title:(id)arg3;
- (void)registerBoolABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 defaultValue:(BOOL)arg2 title:(id)arg3 description:(id)arg4 author:(id)arg5 PMs:(id)arg6 appVersion:(id)arg7 linesOfBusiness:(id)arg8 modules:(id)arg9;
- (void)registerEnumABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 serverTestCaseDataArray:(id)arg2 defaultValue:(long long)arg3 title:(id)arg4 testCaseMessages:(id)arg5;
- (void)registerEnumABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 serverTestCaseDataArray:(id)arg2 defaultValue:(long long)arg3 title:(id)arg4 testCaseMessages:(id)arg5 description:(id)arg6 author:(id)arg7 PMs:(id)arg8 appVersion:(id)arg9 linesOfBusiness:(id)arg10 modules:(id)arg11;
- (void)registerNumberABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 defaultValue:(id)arg2 title:(id)arg3;
- (void)registerNumberABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 defaultValue:(id)arg2 title:(id)arg3 description:(id)arg4 author:(id)arg5 PMs:(id)arg6 appVersion:(id)arg7 linesOfBusiness:(id)arg8 modules:(id)arg9;
- (void)registerNumberABTestCaseWithPropertyName:(id)arg0 serverString:(id)arg1 defaultValue:(id)arg2;
- (void)setGetter:(id /* block */)arg0 forKey:(id)arg1;
- (id)getterDict;
- (id /* block */)getterForKey:(id)arg0;
- (void)setGetterDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
