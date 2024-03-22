//
//     Generated by private class-dump
//

@class NSString, AWEBarIconModel, AWEBarContainerInfoModel, AWEBarShowStrategyModel, NSDictionary, AWEBarTextModel, AWEBarSeparatorTextModel, AWETemplateBarRelatedSearchModel, NSNumber;

@interface AWETemplateBarModel : AWEBaseApiModel {
    NSString *_ID;
    NSString *_name;
    NSString *_descriptionb;
    NSString *_schema;
    NSNumber *_priority;
    unsigned long long _schemaType;
    unsigned long long _viewType;
    long long _businessType;
    AWEBarShowStrategyModel *_showStrategy;
    AWEBarContainerInfoModel *_containerInfo;
    AWEBarIconModel *_headerIcon;
    AWEBarTextModel *_title;
    AWEBarSeparatorTextModel *_separatorIcon;
    AWEBarTextModel *_mainContent;
    AWEBarTextModel *_subContent;
    AWEBarIconModel *_tailIcon;
    NSString *_extra;
    NSString *_logExtra;
    NSDictionary *_extraDic;
    NSDictionary *_logExtraDic;
}

@property (nonatomic) long long shouldShowType;
@property (nonatomic) long long currentIndexOfInterestDiscover;
@property (retain, nonatomic) AWETemplateBarRelatedSearchModel *relatedSearchExtraModel;
@property (copy, nonatomic) NSDictionary *extraDic;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *descriptionb;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *priority;
@property (nonatomic) unsigned long long schemaType;
@property (nonatomic) unsigned long long viewType;
@property (nonatomic) long long businessType;
@property (retain, nonatomic) AWEBarShowStrategyModel *showStrategy;
@property (retain, nonatomic) AWEBarContainerInfoModel *containerInfo;
@property (retain, nonatomic) AWEBarIconModel *headerIcon;
@property (retain, nonatomic) AWEBarTextModel *title;
@property (retain, nonatomic) AWEBarSeparatorTextModel *separatorIcon;
@property (retain, nonatomic) AWEBarTextModel *mainContent;
@property (retain, nonatomic) AWEBarTextModel *subContent;
@property (retain, nonatomic) AWEBarIconModel *tailIcon;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;

+ (id)titleJSONTransformer;
+ (id)viewTypeJSONTransformer;
+ (id)containerInfoJSONTransformer;
+ (id)showStrategyJSONTransformer;
+ (id)headerIconJSONTransformer;
+ (id)separatorIconJSONTransformer;
+ (id)mainContentJSONTransformer;
+ (id)subContentJSONTransformer;
+ (id)tailIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)logExtraDic;
- (void)setLogExtraDic:(id)arg0;
- (void)setSchemaType:(unsigned long long)arg0;
- (id)relatedSearchExtraModel;
- (id)extraDic;
- (void)setExtraDic:(id)arg0;
- (void)setBusinessType:(long long)arg0;
- (void)setContainerInfo:(id)arg0;
- (long long)shouldShowType;
- (long long)currentIndexOfInterestDiscover;
- (void)setShouldShowType:(long long)arg0;
- (void)setCurrentIndexOfInterestDiscover:(long long)arg0;
- (void)setRelatedSearchExtraModel:(id)arg0;
- (id)descriptionb;
- (void)setDescriptionb:(id)arg0;
- (id)showStrategy;
- (void)setShowStrategy:(id)arg0;
- (id)headerIcon;
- (void)setHeaderIcon:(id)arg0;
- (id)separatorIcon;
- (void)setSeparatorIcon:(id)arg0;
- (id)mainContent;
- (void)setMainContent:(id)arg0;
- (id)subContent;
- (void)setSubContent:(id)arg0;
- (id)tailIcon;
- (void)setTailIcon:(id)arg0;
- (void)setSchema:(id)arg0;
- (long long)businessType;
- (id)ID;
- (void)setID:(id)arg0;
- (void).cxx_destruct;
- (void)setPriority:(id)arg0;
- (id)extra;
- (id)title;
- (void)setName:(id)arg0;
- (unsigned long long)viewType;
- (id)schema;
- (id)priority;
- (id)name;
- (unsigned long long)schemaType;
- (void)setTitle:(id)arg0;
- (id)containerInfo;
- (void)setViewType:(unsigned long long)arg0;

@end