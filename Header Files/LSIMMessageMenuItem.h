//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface LSIMMessageMenuItem : NSObject <LSIMMessageMenuItemProtocol> {
    unsigned long long _type;
    NSString *_title;
    UIView *_actionTarget;
    SEL _actionSelector;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) UIView *actionTarget;
@property (nonatomic) SEL actionSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setActionSelector:(SEL)arg0;
- (SEL)actionSelector;
- (void)setTitle:(id)arg0;
- (id)actionTarget;
- (void)setActionTarget:(id)arg0;

@end