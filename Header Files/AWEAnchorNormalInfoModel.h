//
//     Generated by private class-dump
//

@class AWEAnchorStatusModel, NSString, AWEAnchorUIInfo, AWEAnchorPoiUIInfo, AWEAnchorTrackModel, AWEURLModel;

@interface AWEAnchorNormalInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _hasDeliveryProduct;
    NSString *_anchorCardName;
    unsigned long long _anchorType;
    AWEURLModel *_icon;
    NSString *_title;
    NSString *_titleTag;
    NSString *_openURL;
    AWEAnchorStatusModel *_anchorStatus;
    AWEAnchorUIInfo *_anchorUIInfo;
    AWEAnchorTrackModel *_trackModel;
    AWEAnchorPoiUIInfo *_anchorPoiUIInfo;
    NSString *_poiId;
}

@property (copy, nonatomic) NSString *anchorCardName;
@property (nonatomic) unsigned long long anchorType;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *openURL;
@property (retain, nonatomic) AWEAnchorStatusModel *anchorStatus;
@property (retain, nonatomic) AWEAnchorUIInfo *anchorUIInfo;
@property (retain, nonatomic) AWEAnchorTrackModel *trackModel;
@property (retain, nonatomic) AWEAnchorPoiUIInfo *anchorPoiUIInfo;
@property (copy, nonatomic) NSString *poiId;
@property (nonatomic) BOOL hasDeliveryProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)anchorStatusJSONTransformer;
+ (id)trackModelJSONTransformer;
+ (id)anchorUIInfoJSONTransformer;
+ (id)anchorPoiUIInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setOpenURL:(id)arg0;
- (id)titleTag;
- (void)setTrackModel:(id)arg0;
- (id)trackModel;
- (id)anchorCardName;
- (void)setAnchorCardName:(id)arg0;
- (void)setTitleTag:(id)arg0;
- (id)anchorStatus;
- (void)setAnchorStatus:(id)arg0;
- (id)anchorUIInfo;
- (void)setAnchorUIInfo:(id)arg0;
- (id)anchorPoiUIInfo;
- (void)setAnchorPoiUIInfo:(id)arg0;
- (BOOL)hasDeliveryProduct;
- (void)setHasDeliveryProduct:(BOOL)arg0;
- (id)icon;
- (unsigned long long)anchorType;
- (void).cxx_destruct;
- (id)title;
- (void)setIcon:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)poiId;
- (void)setPoiId:(id)arg0;
- (id)openURL;
- (void)setAnchorType:(unsigned long long)arg0;

@end