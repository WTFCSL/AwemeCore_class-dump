//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOFilterModel : MTLModel <MTLJSONSerializing> {
    BOOL _editedWithLightingFilter;
    BOOL _capturedWithLightningFilter;
    BOOL _enableUrs;
    BOOL _filterFromSmartBeauty;
    NSString *_editFilterId;
    double _filterIntensity;
    NSString *_editFilterLabel;
    NSString *_editFilterName;
}

@property (copy, nonatomic) NSString *editFilterId;
@property (nonatomic) BOOL editedWithLightingFilter;
@property (nonatomic) double filterIntensity;
@property (nonatomic) BOOL capturedWithLightningFilter;
@property (copy, nonatomic) NSString *editFilterLabel;
@property (copy, nonatomic) NSString *editFilterName;
@property (nonatomic) BOOL enableUrs;
@property (nonatomic) BOOL filterFromSmartBeauty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setFilterIntensity:(double)arg0;
- (id)editFilterId;
- (void)setEditFilterId:(id)arg0;
- (BOOL)editedWithLightingFilter;
- (void)setEditedWithLightingFilter:(BOOL)arg0;
- (double)filterIntensity;
- (BOOL)capturedWithLightningFilter;
- (void)setCapturedWithLightningFilter:(BOOL)arg0;
- (id)editFilterLabel;
- (void)setEditFilterLabel:(id)arg0;
- (id)editFilterName;
- (void)setEditFilterName:(id)arg0;
- (BOOL)enableUrs;
- (void)setEnableUrs:(BOOL)arg0;
- (BOOL)filterFromSmartBeauty;
- (void)setFilterFromSmartBeauty:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;

@end