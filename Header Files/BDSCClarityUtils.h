//
//     Generated by private class-dump
//

@class MMKV;

@interface BDSCClarityUtils : NSObject

@property (class, readonly, nonatomic) MMKV *mmkvStore;

+ (BOOL)checkClarityIsLimited:(id)arg0 inPlayItem:(id)arg1;
+ (id)getDefaultClarity;
+ (void)setDefaultClarity:(id)arg0;
+ (id)mmkvStore;
+ (BOOL)containsLimitedClarityInClarityList:(id)arg0;
+ (id)limitedClarityForPlayItem:(id)arg0;
+ (void)showClarityAlertWithDays:(long long)arg0 frequency:(long long)arg1 interval:(long long)arg2 show:(id /* block */)arg3 notShow:(id /* block */)arg4;
+ (BOOL)checkClarityIsLimited:(id)arg0;
+ (id)clarityFrom:(id)arg0 clarityList:(id)arg1 reduced:(BOOL)arg2;
+ (id)firstSupportedClarityForPlayItem:(id)arg0 belowSize:(long long)arg1;
+ (id)firstSupportedClarityForPlayItem:(id)arg0 lessThanOrEqualToSize:(long long)arg1;

@end
