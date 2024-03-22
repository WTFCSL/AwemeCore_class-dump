//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBindCardTitleInfoModel : JSONModel {
    NSString *_displayIcon;
    NSString *_displayDesc;
    NSString *_title;
    NSString *_subTitle;
    NSString *_orderInfo;
    NSString *_iconURL;
}

@property (copy, nonatomic) NSString *displayIcon;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *orderInfo;
@property (copy, nonatomic) NSString *iconURL;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)orderInfo;
- (void)setOrderInfo:(id)arg0;
- (id)displayDesc;
- (void)setDisplayDesc:(id)arg0;
- (void).cxx_destruct;
- (void)setIconURL:(id)arg0;
- (id)iconURL;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)displayIcon;
- (void)setDisplayIcon:(id)arg0;

@end