//
//     Generated by private class-dump
//

@class NSString;

@interface AWELeftSideBarConfigCommonBubbleModel : AWELeftSideBarConfigBaseModel <NSCopying> {
    BOOL _needLogin;
    BOOL _necessaryOpenSidebar;
    NSString *_title;
    NSString *_schema;
    NSString *_businessId;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL needLogin;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) BOOL necessaryOpenSidebar;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)needLogin;
- (void)setNeedLogin:(BOOL)arg0;
- (BOOL)isEqualCommonBubbleModel:(id)arg0;
- (BOOL)necessaryOpenSidebar;
- (void)setNecessaryOpenSidebar:(BOOL)arg0;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)title;
- (id)description;
- (id)businessId;
- (id)schema;
- (void)setTitle:(id)arg0;
- (void)setBusinessId:(id)arg0;

@end
