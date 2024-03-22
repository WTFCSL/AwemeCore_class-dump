//
//     Generated by private class-dump
//

@class NSString;

@interface AWEFollowContainerGroupModel : NSObject {
    NSString *_groupName;
    unsigned long long _actionType;
    unsigned long long _category;
}

@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) unsigned long long category;

- (id)initWithGroupCategoryModel:(id)arg0;
- (unsigned long long)category;
- (unsigned long long)actionType;
- (void).cxx_destruct;
- (BOOL)isCustomGroup;
- (id)groupName;

@end
