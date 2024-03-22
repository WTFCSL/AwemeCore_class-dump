//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESECShopDynamicTabConfigModel : MTLModel <MTLJSONSerializing> {
    BOOL _needDynamicData;
    NSString *_tabEventName;
    NSString *_tabEventExtraParams;
    NSString *_tabApiPath;
    NSString *_tabApiExtraParams;
    NSArray *_tabScrollViewIds;
}

@property (copy, nonatomic) NSString *tabEventName;
@property (copy, nonatomic) NSString *tabEventExtraParams;
@property (nonatomic) BOOL needDynamicData;
@property (copy, nonatomic) NSString *tabApiPath;
@property (copy, nonatomic) NSString *tabApiExtraParams;
@property (copy, nonatomic) NSArray *tabScrollViewIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setNeedDynamicData:(BOOL)arg0;
- (id)tabEventName;
- (void)setTabEventName:(id)arg0;
- (id)tabEventExtraParams;
- (void)setTabEventExtraParams:(id)arg0;
- (BOOL)needDynamicData;
- (id)tabApiPath;
- (void)setTabApiPath:(id)arg0;
- (id)tabApiExtraParams;
- (void)setTabApiExtraParams:(id)arg0;
- (id)tabScrollViewIds;
- (void)setTabScrollViewIds:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
