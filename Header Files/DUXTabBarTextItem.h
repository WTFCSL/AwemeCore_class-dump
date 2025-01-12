//
//     Generated by private class-dump
//

@class NSString, UIFont, UIColor;

@interface DUXTabBarTextItem : NSObject <DUXTabBarItemPrivateProtocol, DUXTabBarItemProtocol> {
    NSString *_text;
    UIFont *_defaultFont;
    UIFont *_selectedFont;
    UIColor *_defaultColor;
    UIColor *_selectedColor;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *defaultFont;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIColor *defaultColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithText:(id)arg0 defaultFont:(id)arg1 selectedFont:(id)arg2 defaultColor:(id)arg3 selectedColor:(id)arg4;

- (id)itemWithAutoFitWidth:(BOOL)arg0 preferItemWidth:(double)arg1 tabBarHeight:(double)arg2 type:(long long)arg3;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)selectedColor;
- (id)text;
- (void)setSelectedColor:(id)arg0;
- (id)defaultFont;
- (id)selectedFont;
- (void)setSelectedFont:(id)arg0;
- (id)defaultColor;
- (void)setDefaultColor:(id)arg0;
- (void)setDefaultFont:(id)arg0;

@end
