//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEIMCompanyModernMenuResponseModel : AWEBaseApiModel {
    NSArray *_menuList;
}

@property (copy, nonatomic) NSArray *menuList;

+ (id)menuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)menuList;
- (void)setMenuList:(id)arg0;
- (void).cxx_destruct;

@end