//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AFDVisitorListUnAuthorizedViewConfigModel : NSObject {
    NSString *_title;
    NSString *_openAuthButtonTitle;
    NSString *_closeAuthButtonTitle;
    NSString *_closeAuthToastTitle;
    NSArray *_hintWords;
    id /* block */ _reloadBlock;
    id /* block */ _backBlock;
    long long _layoutStyle;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openAuthButtonTitle;
@property (copy, nonatomic) NSString *closeAuthButtonTitle;
@property (copy, nonatomic) NSString *closeAuthToastTitle;
@property (copy, nonatomic) NSArray *hintWords;
@property (copy, nonatomic) id /* block */ reloadBlock;
@property (copy, nonatomic) id /* block */ backBlock;
@property (nonatomic) long long layoutStyle;

- (void)setBackBlock:(id /* block */)arg0;
- (id /* block */)backBlock;
- (id)openAuthButtonTitle;
- (id)closeAuthButtonTitle;
- (id)hintWords;
- (void)setOpenAuthButtonTitle:(id)arg0;
- (void)setCloseAuthButtonTitle:(id)arg0;
- (id)closeAuthToastTitle;
- (void)setCloseAuthToastTitle:(id)arg0;
- (void)setHintWords:(id)arg0;
- (long long)layoutStyle;
- (void)setLayoutStyle:(long long)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setReloadBlock:(id /* block */)arg0;
- (id /* block */)reloadBlock;

@end
