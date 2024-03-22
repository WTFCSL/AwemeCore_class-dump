//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSArray, NSNumber;

@interface IESECLiveGoodsListEntryItemModel : MTLModel <MTLJSONSerializing> {
    BOOL _showSmallLiveWindow;
    BOOL _showDisclaimer;
    unsigned long long _type;
    NSString *_title;
    NSString *_titleColor;
    NSString *_icon;
    NSNumber *_iconRadius;
    NSString *_url;
    NSString *_trackName;
    NSDictionary *_trackParams;
    NSArray *_subEntries;
    NSArray *_status;
    NSDictionary *_businessParams;
    NSString *_schemaParamsType;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) NSNumber *iconRadius;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *trackName;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL showSmallLiveWindow;
@property (nonatomic) BOOL showDisclaimer;
@property (retain, nonatomic) NSArray *subEntries;
@property (retain, nonatomic) NSArray *status;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (retain, nonatomic) NSString *schemaParamsType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subEntriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)businessParams;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setBusinessParams:(id)arg0;
- (id)iconRadius;
- (void)setIconRadius:(id)arg0;
- (id)subEntries;
- (id)schemaParamsType;
- (BOOL)showSmallLiveWindow;
- (void)setShowSmallLiveWindow:(BOOL)arg0;
- (void)setSubEntries:(id)arg0;
- (void)setSchemaParamsType:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)status;
- (unsigned long long)type;
- (void)setUrl:(id)arg0;
- (id)titleColor;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (void)setStatus:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)setTitleColor:(id)arg0;
- (id)url;
- (void)setTitle:(id)arg0;
- (BOOL)showDisclaimer;
- (void)setShowDisclaimer:(BOOL)arg0;
- (id)trackName;
- (void)setTrackName:(id)arg0;

@end