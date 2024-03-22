//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayPopoverMenuModel : NSObject {
    BOOL _disable;
    NSString *_title;
    id /* block */ _block;
    long long _titleTextAlignment;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) long long titleTextAlignment;
@property (nonatomic) BOOL disable;

+ (id)actionWithTitle:(id)arg0 titleTextAlignment:(long long)arg1 block:(id /* block */)arg2;

- (void)setDisable:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setBlock:(id /* block */)arg0;
- (id)title;
- (BOOL)disable;
- (id /* block */)block;
- (void)setTitle:(id)arg0;
- (void)setTitleTextAlignment:(long long)arg0;
- (long long)titleTextAlignment;

@end