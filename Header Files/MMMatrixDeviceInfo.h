//
//     Generated by private class-dump
//

@interface MMMatrixDeviceInfo : NSObject

+ (id)getSysInfoByName:(char *)arg0;
+ (int)totalMemory;
+ (id)SystemNameForDeviceType;
+ (int)getSysInfo:(unsigned int)arg0;
+ (int)cpuFrequency;
+ (int)busFrequency;
+ (int)userMemory;
+ (int)cacheLine;
+ (int)L1ICacheSize;
+ (int)L1DCacheSize;
+ (int)L2CacheSize;
+ (int)L3CacheSize;
+ (BOOL)isiPad;
+ (id)getDeviceType;
+ (id)model;
+ (id)platform;
+ (id)systemName;
+ (id)systemVersion;
+ (BOOL)isBeingDebugged;
+ (int)cpuCount;

@end