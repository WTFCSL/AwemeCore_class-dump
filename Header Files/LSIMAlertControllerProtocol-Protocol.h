//
//     Generated by private class-dump
//

@class NSString, NSArray;

@protocol LSIMAlertControllerProtocol <NSObject>

+ (id)alertControllerWithStyle:(long long)arg0;
+ (id)alertControllerWithStyle:(long long)arg0 title:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;

@property (readonly, nonatomic) long long alertStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) id body;
@property (readonly, nonatomic) NSArray *actions;
@property (nonatomic) BOOL forbidDismissByClickMask;

- (void)setForbidDismissByClickMask:(BOOL)arg0;
- (BOOL)forbidDismissByClickMask;
- (void)setBody:(id)arg0;
- (id)body;
- (id)init;
- (void)dismiss;
- (void)addAction:(id)arg0;
- (id)actions;
- (long long)alertStyle;
- (id)title;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (void)showOnViewController:(id)arg0;

@end
