//
//     Generated by private class-dump
//

@class NSString, AWEPOICommonEntryModel;

@interface AWEPOISearchAddLocationBannerModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_subtitle;
    NSString *_tipsSchema;
    AWEPOICommonEntryModel *_entryModel;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *tipsSchema;
@property (retain, nonatomic) AWEPOICommonEntryModel *entryModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)entryModel;
- (void)setEntryModel:(id)arg0;
- (id)tipsSchema;
- (void)setTipsSchema:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;

@end
