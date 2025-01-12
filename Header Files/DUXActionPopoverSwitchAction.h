//
//     Generated by private class-dump
//

@class NSString;

@interface DUXActionPopoverSwitchAction : DUXActionPopoverBaseAction {
    BOOL _isOn;
    BOOL _enable;
    BOOL _autoDismissWhileSwitchValueChange;
    NSString *_title;
    NSString *_disableText;
    id /* block */ _switchAction;
}

@property (nonatomic) BOOL isOn;
@property (readonly, copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *disableText;
@property (readonly, copy, nonatomic) id /* block */ switchAction;
@property (nonatomic) BOOL autoDismissWhileSwitchValueChange;

+ (id)actionWithTitle:(id)arg0 isOn:(BOOL)arg1 switchAction:(id /* block */)arg2;

- (void)setDisableText:(id)arg0;
- (id)initWithTitle:(id)arg0 isOn:(BOOL)arg1 switchAction:(id /* block */)arg2;
- (id)disableText;
- (BOOL)autoDismissWhileSwitchValueChange;
- (void)setAutoDismissWhileSwitchValueChange:(BOOL)arg0;
- (BOOL)enable;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isOn;
- (id)title;
- (void)setEnable:(BOOL)arg0;
- (id /* block */)switchAction;
- (void)setIsOn:(BOOL)arg0;

@end
