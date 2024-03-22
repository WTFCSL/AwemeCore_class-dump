//
//     Generated by private class-dump
//

@class UIImage, NSString;

@interface DUXActionPopoverAction : DUXActionPopoverBaseAction <NSCopying> {
    unsigned long long _use;
    UIImage *_icon;
    NSString *_title;
    id /* block */ _select;
}

@property (nonatomic) unsigned long long use;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ select;

+ (id)actionWithTitle:(id)arg0 icon:(id)arg1 use:(unsigned long long)arg2 selectBlock:(id /* block */)arg3;

- (id /* block */)select;
- (id)icon;
- (void).cxx_destruct;
- (void)setSelect:(id /* block */)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)title;
- (void)setIcon:(id)arg0;
- (void)setTitle:(id)arg0;
- (unsigned long long)use;
- (void)setUse:(unsigned long long)arg0;

@end
