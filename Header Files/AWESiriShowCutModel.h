//
//     Generated by private class-dump
//

@class NSString, NSUUID, INIntent;

@interface AWESiriShowCutModel : NSObject {
    BOOL _isAddInSiri;
    BOOL _hasShow;
    NSString *_title;
    NSString *_subTitle;
    INIntent *_intent;
    NSUUID *_uuid;
    NSString *_accessibilityText;
    NSString *_shortcutType;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isAddInSiri;
@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *accessibilityText;
@property (copy, nonatomic) NSString *shortcutType;
@property (nonatomic) BOOL hasShow;

- (BOOL)hasShow;
- (void)setHasShow:(BOOL)arg0;
- (BOOL)isAddInSiri;
- (void)setIsAddInSiri:(BOOL)arg0;
- (void)setShortcutType:(id)arg0;
- (void)setIntent:(id)arg0;
- (id)intent;
- (void).cxx_destruct;
- (void)setUuid:(id)arg0;
- (id)title;
- (id)uuid;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)accessibilityText;
- (void)setAccessibilityText:(id)arg0;
- (id)shortcutType;

@end
