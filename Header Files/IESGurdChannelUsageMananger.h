//
//     Generated by private class-dump
//

@interface IESGurdChannelUsageMananger : NSObject

+ (void)accessDataWithType:(long long)arg0 accessKey:(id)arg1 channel:(id)arg2 hitData:(BOOL)arg3;
+ (BOOL)containsChannel:(id)arg0 channel:(id)arg1;
+ (void)addChannel:(id)arg0 channel:(id)arg1;
+ (void)removeChannel:(id)arg0 channel:(id)arg1;
+ (BOOL)isChannelUsed:(id)arg0 channel:(id)arg1;

@end