//
//     Generated by private class-dump
//

@class NSArray, AFDSettingItem, NSString;

@interface AFDSettingResultItem : NSObject {
    AFDSettingItem *_settingItem;
    NSString *_detailTitle;
    NSArray *_pathItems;
    AFDSettingItem *_rootItem;
    NSArray *_parentItems;
}

@property (copy, nonatomic) NSArray *parentItems;
@property (retain, nonatomic) AFDSettingItem *rootItem;
@property (retain, nonatomic) AFDSettingItem *settingItem;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSArray *pathItems;
@property (readonly, nonatomic) AFDSettingItem *parentItem;

- (void)setSettingItem:(id)arg0;
- (id)pathItems;
- (void)setPathItems:(id)arg0;
- (id)parentItems;
- (void)setParentItems:(id)arg0;
- (void).cxx_destruct;
- (id)parentItem;
- (void)setRootItem:(id)arg0;
- (id)rootItem;
- (id)detailTitle;
- (void)setDetailTitle:(id)arg0;
- (id)settingItem;

@end
