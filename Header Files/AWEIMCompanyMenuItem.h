//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEIMCompanyMenuItem : MTLModel <MTLJSONSerializing> {
    long long _type;
    NSString *_title;
    NSString *_action;
    NSString *_menuKey;
    NSString *_logExtra;
    NSArray *_subMenuList;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *menuKey;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *subMenuList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subMenuListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)menuKey;
- (void)setMenuKey:(id)arg0;
- (id)subMenuList;
- (void)setSubMenuList:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (void)setAction:(id)arg0;
- (id)action;
- (void)setTitle:(id)arg0;

@end
