//
//     Generated by private class-dump
//

@interface AWEFansLocalUserHelper : NSObject

+ (id)currentLoginUser;
+ (long long)getLastFullTime;
+ (id)lastFullTimeKey;
+ (id)lastCursorKey;
+ (id)lastFullFailedKey;
+ (void)fetchUserDataWithContext:(id)arg0 completion:(id /* block */)arg1;
+ (void)setLastFullTimeWithTime:(long long)arg0;
+ (long long)getLastCursor;
+ (void)setLastCursorWithTime:(long long)arg0;
+ (BOOL)isLastFullFailed;
+ (void)setIsLastFullFailed:(BOOL)arg0;

@end
