//
//     Generated by private class-dump
//

@class NSString;

@interface AWEProfileBubbleUlikeInvitationLetterManager : NSObject {
    BOOL _showing;
    NSString *_title;
    NSString *_text;
    long long _days;
    long long _times;
    long long _maxCount;
    long long _intervalDays;
}

@property (nonatomic) BOOL showing;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long intervalDays;
@property (readonly, nonatomic) long long days;
@property (readonly, nonatomic) long long times;

+ (id)sharedInstance;

- (BOOL)canShow;
- (id)getStoregeKeyWithOriginKey:(id)arg0;
- (void)fetchUlikeAuthAccount;
- (long long)intervalDays;
- (BOOL)fetchAuthInfoWithSource;
- (void)setIntervalDays:(long long)arg0;
- (id)init;
- (void)didDismiss;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)setMaxCount:(long long)arg0;
- (id)title;
- (id)text;
- (long long)maxCount;
- (void)setTitle:(id)arg0;
- (void)didShow;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg0;
- (long long)days;
- (long long)times;

@end