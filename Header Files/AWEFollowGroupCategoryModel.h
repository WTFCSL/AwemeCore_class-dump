//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEFollowGroupCategoryModel : AWEBaseApiModel {
    BOOL _isSpecialCreateItem;
    BOOL _isSpecialEditGroupItem;
    BOOL _isSelected;
    NSNumber *_groupID;
    NSString *_groupName;
    NSString *_groupDesc;
    unsigned long long _actionType;
    unsigned long long _category;
}

@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupDesc;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) BOOL isSpecialCreateItem;
@property (nonatomic) BOOL isSpecialEditGroupItem;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long category;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSpecialCreateItem;
- (BOOL)isDefaulGroup;
- (id)groupDesc;
- (void)setGroupDesc:(id)arg0;
- (void)setIsSpecialCreateItem:(BOOL)arg0;
- (BOOL)isSpecialEditGroupItem;
- (void)setIsSpecialEditGroupItem:(BOOL)arg0;
- (void)setGroupID:(id)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (id)groupID;
- (unsigned long long)category;
- (unsigned long long)actionType;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setCategory:(unsigned long long)arg0;
- (id)groupName;
- (void)setGroupName:(id)arg0;
- (BOOL)isSelected;

@end