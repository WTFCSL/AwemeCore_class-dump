//
//     Generated by private class-dump
//

@class NSString;

@interface AWERelationListActionButtonModel : NSObject {
    BOOL _show;
    BOOL _readInFocusForAccessibility;
    NSString *_title;
    NSString *_iconName;
    unsigned long long _style;
    id /* block */ _actionButtonClickBlock;
}

@property (nonatomic) BOOL show;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconName;
@property (nonatomic) BOOL readInFocusForAccessibility;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ actionButtonClickBlock;

- (id /* block */)actionButtonClickBlock;
- (BOOL)readInFocusForAccessibility;
- (void)setReadInFocusForAccessibility:(BOOL)arg0;
- (void)setActionButtonClickBlock:(id /* block */)arg0;
- (unsigned long long)style;
- (void).cxx_destruct;
- (BOOL)show;
- (id)title;
- (id)iconName;
- (void)setIconName:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (void)setTitle:(id)arg0;
- (void)setShow:(BOOL)arg0;

@end
