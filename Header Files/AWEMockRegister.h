//
//     Generated by private class-dump
//

@interface AWEMockRegister : NSObject

+ (void)registerStringMockWithName:(id)arg0 settingKey:(id)arg1 defaultValue:(id)arg2 stable:(BOOL)arg3 mockBlock:(id /* block */)arg4;
+ (void)registerBoolMockWithName:(id)arg0 settingKey:(id)arg1 defaultValue:(BOOL)arg2 stable:(BOOL)arg3 mockBlock:(id /* block */)arg4;
+ (void)registerEnumMockWithName:(id)arg0 settingKey:(id)arg1 defaultValue:(long long)arg2 stable:(BOOL)arg3 mockBlock:(id /* block */)arg4;
+ (void)registerNumberMockWithName:(id)arg0 settingKey:(id)arg1 defaultValue:(id)arg2 stable:(BOOL)arg3 mockBlock:(id /* block */)arg4;

@end