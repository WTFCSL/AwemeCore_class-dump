//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsInstallmentOpenInfoModel : IESECBaseApiModel {
    BOOL _shouldShow;
    NSString *_iconUrlStr;
    NSString *_openDesc;
    NSString *_openHint;
    NSString *_openUrlStr;
    NSString *_pageType;
    NSString *_activityType;
}

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) NSString *iconUrlStr;
@property (copy, nonatomic) NSString *openDesc;
@property (copy, nonatomic) NSString *openHint;
@property (copy, nonatomic) NSString *openUrlStr;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *activityType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)openUrlStr;
- (void)setOpenUrlStr:(id)arg0;
- (id)iconUrlStr;
- (void)setIconUrlStr:(id)arg0;
- (id)openDesc;
- (void)setOpenDesc:(id)arg0;
- (id)openHint;
- (void)setOpenHint:(id)arg0;
- (id)pageType;
- (void)setActivityType:(id)arg0;
- (void).cxx_destruct;
- (id)activityType;
- (void)setPageType:(id)arg0;
- (BOOL)shouldShow;
- (void)setShouldShow:(BOOL)arg0;

@end
