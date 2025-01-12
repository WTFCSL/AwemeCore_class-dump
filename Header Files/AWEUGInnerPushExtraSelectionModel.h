//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface AWEUGInnerPushExtraSelectionModel : MTLModel <MTLJSONSerializing> {
    BOOL _selected;
    NSArray *_settingActions;
    NSDictionary *_actionMap;
    NSArray *_pushGroups;
    NSString *_selectionType;
    NSString *_title;
    NSString *_iconUrlString;
    NSString *_confirmButtonText;
}

@property (retain, nonatomic) NSArray *settingActions;
@property (retain, nonatomic) NSDictionary *actionMap;
@property (retain, nonatomic) NSArray *pushGroups;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *selectionType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrlString;
@property (copy, nonatomic) NSString *confirmButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pushGroupsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrlString;
- (void)setConfirmButtonText:(id)arg0;
- (id)settingActions;
- (void)setSettingActions:(id)arg0;
- (void)setActionMap:(id)arg0;
- (void)setIconUrlString:(id)arg0;
- (BOOL)selected;
- (void).cxx_destruct;
- (id)title;
- (void)setSelected:(BOOL)arg0;
- (void)setSelectionType:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)selectionType;
- (id)confirmButtonText;
- (id)actionMap;
- (id)pushGroups;
- (void)setPushGroups:(id)arg0;

@end
