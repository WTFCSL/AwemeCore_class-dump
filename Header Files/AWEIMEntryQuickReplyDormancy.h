//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSDate;

@interface AWEIMEntryQuickReplyDormancy : NSObject {
    NSString *_uid;
    NSDate *_today;
    NSNumber *_result;
    long long _displayNDays;
    long long _dormantMDays;
    NSString *_version;
}

@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) NSDate *today;
@property (retain, nonatomic) NSNumber *result;
@property (nonatomic) long long displayNDays;
@property (nonatomic) long long dormantMDays;
@property (copy, nonatomic) NSString *version;

+ (void)resetDisplayedDays;
+ (BOOL)isDormantCacheWithNowDate:(id)arg0 uid:(id)arg1;
+ (BOOL)p_isDormantWithNowDate:(id)arg0 uid:(id)arg1;
+ (void)p_resetDisplayedDaysWithDate:(id)arg0;
+ (id)sharedInstance;
+ (BOOL)isDormant;

- (void)setDisplayNDays:(long long)arg0;
- (void)setDormantMDays:(long long)arg0;
- (long long)displayNDays;
- (long long)dormantMDays;
- (void)setUid:(id)arg0;
- (id)uid;
- (void)setResult:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)result;
- (id)today;
- (id)version;
- (void)setToday:(id)arg0;

@end
