//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUndertakeFilterLoginCondition : AWEUndertakeFilterBaseCondition <AWEUserMessage> {
    NSString *_theme;
    long long _status;
}

@property (copy, nonatomic) NSString *theme;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (long long)statusWithData:(id)arg0 extraInfo:(id)arg1;
- (void)setTheme:(id)arg0;
- (void).cxx_destruct;
- (id)theme;
- (long long)status;
- (void)setup;
- (void)setStatus:(long long)arg0;
- (id)initWithTheme:(id)arg0;

@end