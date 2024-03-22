//
//     Generated by private class-dump
//

@class UIImage, NSAttributedString, NSString;

@interface DUXTabBarTextIconItem : NSObject <DUXTabBarItemPrivateProtocol, DUXTabBarItemProtocol> {
    NSAttributedString *_defaultText;
    NSAttributedString *_selectedText;
    UIImage *_defaultIcon;
    UIImage *_selectedIcon;
}

@property (copy, nonatomic) NSAttributedString *defaultText;
@property (copy, nonatomic) NSAttributedString *selectedText;
@property (retain, nonatomic) UIImage *defaultIcon;
@property (retain, nonatomic) UIImage *selectedIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithDefaultText:(id)arg0 selectedText:(id)arg1 defaultIcon:(id)arg2 selectedIcon:(id)arg3;

- (void)setDefaultIcon:(id)arg0;
- (id)selectedIcon;
- (void)setSelectedIcon:(id)arg0;
- (id)itemWithAutoFitWidth:(BOOL)arg0 preferItemWidth:(double)arg1 tabBarHeight:(double)arg2 type:(long long)arg3;
- (id)selectedText;
- (void).cxx_destruct;
- (void)setSelectedText:(id)arg0;
- (id)defaultText;
- (void)setDefaultText:(id)arg0;
- (id)defaultIcon;

@end
