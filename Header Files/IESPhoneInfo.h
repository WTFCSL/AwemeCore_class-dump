//
//     Generated by private class-dump
//

@class NSString;

@interface IESPhoneInfo : NSObject {
    long long _hour;
    NSString *_access;
    long long _signal;
    NSString *_country;
    NSString *_his_page;
    NSString *_cur_page;
    NSString *_cur_tab_pos;
}

@property (nonatomic) long long hour;
@property (retain, nonatomic) NSString *access;
@property (nonatomic) long long signal;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *his_page;
@property (retain, nonatomic) NSString *cur_page;
@property (retain, nonatomic) NSString *cur_tab_pos;

- (id)cur_page;
- (void)setCur_page:(id)arg0;
- (id)his_page;
- (void)setHis_page:(id)arg0;
- (id)cur_tab_pos;
- (void)setCur_tab_pos:(id)arg0;
- (long long)signal;
- (id)country;
- (long long)hour;
- (void)setHour:(long long)arg0;
- (void).cxx_destruct;
- (id)access;
- (void)setSignal:(long long)arg0;
- (void)setCountry:(id)arg0;
- (void)setAccess:(id)arg0;

@end
