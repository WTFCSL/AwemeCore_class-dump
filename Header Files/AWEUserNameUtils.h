//
//     Generated by private class-dump
//

@interface AWEUserNameUtils : NSObject

+ (BOOL)enableRemarkNameForUnfollowedUser;
+ (void)clearAliasAfterUnfollow:(id)arg0;
+ (id)userNameWithScene:(id)arg0 userModel:(id)arg1;
+ (id)aliasWithScene:(id)arg0 userModel:(id)arg1;
+ (id)__downgradeStrategysFromArray:(id)arg0;
+ (id)__downgradeStrategys;
+ (id)__downgradeStrategyWithScene:(id)arg0;
+ (id)__userNameWithDowngradeStrategy:(id)arg0 userModel:(id)arg1;
+ (BOOL)__disableMarkNameCheck;
+ (void)trackAliasChechWithScene:(id)arg0 errCode:(id)arg1;
+ (id)__aliasWithDowngradeStrategy:(id)arg0 userModel:(id)arg1;

@end
