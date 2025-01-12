//
//     Generated by private class-dump
//

@class AWEURLModel, NSString, NSArray, NSMutableDictionary, AWEOriginalAdPreloadModel, NSNumber;
@protocol AWEAdPreloadComponentContext;

@interface AWEAdLinkModel : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing, AWEAdPreloadComponentProtocol> {
    BOOL _isPreview;
    BOOL _showCloseButton;
    BOOL _reportEnabled;
    BOOL _disliked;
    id<AWEAdPreloadComponentContext> _componentContext;
    NSMutableDictionary *_componentStages;
    unsigned long long _preloadType;
    AWEOriginalAdPreloadModel *_preloadData;
    NSNumber *_creativeID;
    NSString *_type;
    NSString *_webTitle;
    NSString *_webURL;
    NSString *_openURL;
    NSString *_ironManURL;
    AWEURLModel *_avatarIcon;
    NSString *_logExtra;
    long long _showType;
    NSString *_title;
    NSString *_commentTitle;
    NSString *_featureDesc;
    AWEURLModel *_commentAvatarIcon;
    NSString *_label;
    AWEURLModel *_trackURLList;
    AWEURLModel *_clickTrackURLList;
    NSArray *_backgroundURLArray;
    long long _showStyle;
    NSString *_appID;
    long long _linkType;
    NSNumber *_companySubType;
    NSString *_companyLinkName;
    NSArray *_linkIconsLight;
    NSArray *_linkIconsDark;
    NSNumber *_reportShowType;
    NSNumber *_componentID;
    NSString *_buttonText;
    NSString *_source;
    NSString *_tipsText;
    NSString *_SKANParamsString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long preloadType;
@property (retain, nonatomic) AWEOriginalAdPreloadModel *preloadData;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *ironManURL;
@property (retain, nonatomic) AWEURLModel *avatarIcon;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) long long showType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *commentTitle;
@property (copy, nonatomic) NSString *featureDesc;
@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) AWEURLModel *commentAvatarIcon;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (retain, nonatomic) NSArray *backgroundURLArray;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long linkType;
@property (retain, nonatomic) NSNumber *companySubType;
@property (copy, nonatomic) NSString *companyLinkName;
@property (copy, nonatomic) NSArray *linkIconsLight;
@property (copy, nonatomic) NSArray *linkIconsDark;
@property (retain, nonatomic) NSNumber *reportShowType;
@property (retain, nonatomic) NSNumber *componentID;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) BOOL reportEnabled;
@property (copy, nonatomic) NSString *tipsText;
@property (nonatomic) BOOL disliked;
@property (copy, nonatomic) NSString *SKANParamsString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *componentStages;
@property (weak, nonatomic) id<AWEAdPreloadComponentContext> componentContext;

+ (id)avatarIconJSONTransformer;
+ (id)commentAvatarIconJSONTransformer;
+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)showStyleJSONTransformer;
+ (id)backgroundURLArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg0;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)setWebTitle:(id)arg0;
- (void)setOpenURL:(id)arg0;
- (id)clickTrackURLList;
- (void)setCreativeID:(id)arg0;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)arg0;
- (long long)showStyle;
- (id)trackURLList;
- (id)linkIconsDark;
- (id)companySubType;
- (void)setCompanySubType:(id)arg0;
- (id)linkIconsLight;
- (id)commentTitle;
- (id)companyLinkName;
- (id)SKANParamsString;
- (void)setPreloadType:(unsigned long long)arg0;
- (id)webTitle;
- (id)ironManURL;
- (void)setSKANParamsString:(id)arg0;
- (void)setTrackURLList:(id)arg0;
- (id)avatarIcon;
- (void)setAvatarIcon:(id)arg0;
- (void)setClickTrackURLList:(id)arg0;
- (void)setIronManURL:(id)arg0;
- (void)setTipsText:(id)arg0;
- (void)setShowStyle:(long long)arg0;
- (id)commentAvatarIcon;
- (id)featureDesc;
- (id)preloadData;
- (id)reportShowType;
- (id)componentRefer;
- (id)componentCreativeID;
- (id)componentLogExtra;
- (id)componentGroupID;
- (id)componentExtraID;
- (id)componentStages;
- (void)setComponentStages:(id)arg0;
- (void)setPreloadData:(id)arg0;
- (void)setCommentTitle:(id)arg0;
- (void)setFeatureDesc:(id)arg0;
- (void)setCommentAvatarIcon:(id)arg0;
- (id)backgroundURLArray;
- (void)setBackgroundURLArray:(id)arg0;
- (void)setCompanyLinkName:(id)arg0;
- (void)setLinkIconsLight:(id)arg0;
- (void)setLinkIconsDark:(id)arg0;
- (void)setReportShowType:(id)arg0;
- (id)tipsText;
- (BOOL)disliked;
- (void)setDisliked:(BOOL)arg0;
- (void)setLinkType:(long long)arg0;
- (long long)linkType;
- (id)init;
- (void)setAppID:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (id)type;
- (void)setLabel:(id)arg0;
- (id)iconImageName;
- (id)title;
- (void)setType:(id)arg0;
- (id)appID;
- (BOOL)isPreview;
- (id)buttonText;
- (id)componentType;
- (void)setSource:(id)arg0;
- (id)label;
- (void)setTitle:(id)arg0;
- (id)componentSeparator;
- (void)setButtonText:(id)arg0;
- (id)componentID;
- (void)setComponentID:(id)arg0;
- (id)openURL;
- (void)setShowCloseButton:(BOOL)arg0;
- (BOOL)showCloseButton;
- (long long)showType;
- (void)setShowType:(long long)arg0;
- (void)setIsPreview:(BOOL)arg0;
- (id)creativeID;
- (BOOL)reportEnabled;
- (void)setReportEnabled:(BOOL)arg0;
- (unsigned long long)preloadType;

@end
