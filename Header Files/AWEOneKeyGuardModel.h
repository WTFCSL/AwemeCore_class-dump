//
//     Generated by private class-dump
//

@interface AWEOneKeyGuardModel : AWEBaseApiModel {
    BOOL _open;
    long long _buttonType;
    long long _protectDays;
}

@property (nonatomic) long long buttonType;
@property (nonatomic) BOOL open;
@property (nonatomic) long long protectDays;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)protectDays;
- (void)setProtectDays:(long long)arg0;
- (id)init;
- (long long)buttonType;
- (BOOL)open;
- (void)setOpen:(BOOL)arg0;
- (void)setButtonType:(long long)arg0;

@end
