//
//     Generated by private class-dump
//

@class UIFont, NSString, UIImage, AWEDanmakuPendantMaterial, NSDictionary, AWEDanmakuExtraModel, NSMutableAttributedString, NSRegularExpression, AWEDanmakuEggMaterial;

@interface AWEVideoPlayDanmakuModel : NSObject <XIGDanmakuDataProtocol, AWEVideoPlayDanmakuModelProtocol> {
    BOOL contentSizeInvalidated;
    BOOL adjustSpeedToImproveShowRate;
    BOOL _showDigg;
    BOOL _needShowBackGroundColor;
    BOOL _isFromMessage;
    BOOL _needUseFakeAlpha;
    BOOL _isLocal;
    BOOL _commercialImageShouldHide;
    BOOL _shouldHidden;
    BOOL _isFromMVChannel;
    BOOL _shouldHidePreImage;
    BOOL _didCalculateScore;
    BOOL _hasEmoji;
    NSString *_danmakuEngineID;
    double _timeTolerance;
    double _score;
    NSString *_trackType;
    NSString *_trackLayerType;
    NSString *_itemViewType;
    UIFont *_danmakuFont;
    NSMutableAttributedString *_attributedString;
    NSString *_danmakuID;
    long long _danmakuScene;
    NSString *_itemID;
    NSString *_userID;
    NSString *_text;
    long long _digged;
    long long _diggCount;
    NSString *_diggCountText;
    UIImage *_digImage;
    unsigned long long _danmakuTypeBits;
    AWEDanmakuExtraModel *_extra;
    NSDictionary *_logExtraDict;
    NSString *_prefixImagePath;
    double _prefixImageWidth;
    NSString *_prefixImageURL;
    AWEDanmakuEggMaterial *_eggMaterial;
    AWEDanmakuPendantMaterial *_pendantMaterial;
    double _timeOffset;
    double _prefixImageRatio;
    NSRegularExpression *_emoticonRegex;
    struct CGSize { double width; double height; } _danmakuContentSize;
    struct CGSize { double width; double height; } _digImageSize;
    struct CGSize { double width; double height; } _digNumViewSize;
    struct CGSize { double width; double height; } _contentSize;
}

@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) double timeOffset;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double prefixImageRatio;
@property (retain, nonatomic) NSRegularExpression *emoticonRegex;
@property (nonatomic) BOOL didCalculateScore;
@property (nonatomic) BOOL hasEmoji;
@property (copy, nonatomic) NSString *danmakuID;
@property (nonatomic) long long danmakuScene;
@property (retain, nonatomic) UIFont *danmakuFont;
@property (nonatomic) long long digged;
@property (nonatomic) long long diggCount;
@property (nonatomic) BOOL showDigg;
@property (nonatomic) BOOL needShowBackGroundColor;
@property (nonatomic) BOOL isFromMessage;
@property (nonatomic) BOOL needUseFakeAlpha;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL commercialImageShouldHide;
@property (nonatomic) struct CGSize { double width; double height; } danmakuContentSize;
@property (nonatomic) struct CGSize { double width; double height; } digImageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } authorIdentityLabelSize;
@property (nonatomic) struct CGSize { double width; double height; } digNumViewSize;
@property (copy, nonatomic) NSString *diggCountText;
@property (retain, nonatomic) UIImage *digImage;
@property (readonly, nonatomic) double alpha;
@property (nonatomic) unsigned long long danmakuTypeBits;
@property (retain, nonatomic) AWEDanmakuExtraModel *extra;
@property (readonly, nonatomic) NSMutableAttributedString *attributedString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) BOOL shouldHidden;
@property (nonatomic) BOOL isFromMVChannel;
@property (copy, nonatomic) NSString *prefixImagePath;
@property (nonatomic) double prefixImageWidth;
@property (copy, nonatomic) NSString *prefixImageURL;
@property (nonatomic) BOOL shouldHidePreImage;
@property (retain, nonatomic) AWEDanmakuEggMaterial *eggMaterial;
@property (retain, nonatomic) AWEDanmakuPendantMaterial *pendantMaterial;
@property (readonly, nonatomic) BOOL adjustSpeedToImproveShowRate;
@property (readonly, copy, nonatomic) NSString *danmakuEngineID;
@property (readonly, nonatomic) double timeTolerance;
@property (readonly, nonatomic) double score;
@property (readonly, copy, nonatomic) NSString *trackType;
@property (readonly, copy, nonatomic) NSString *trackLayerType;
@property (readonly, copy, nonatomic) NSString *itemViewType;
@property (nonatomic) BOOL contentSizeInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtra:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (long long)diggCount;
- (void)setDiggCount:(long long)arg0;
- (id)itemViewType;
- (id)danmakuEngineID;
- (BOOL)contentSizeInvalidated;
- (void)setContentSizeInvalidated:(BOOL)arg0;
- (BOOL)adjustSpeedToImproveShowRate;
- (id)trackLayerType;
- (id)emoticonRegex;
- (void)setEmoticonRegex:(id)arg0;
- (BOOL)isFromMVChannel;
- (id)danmakuID;
- (BOOL)showDigg;
- (BOOL)isFromMessage;
- (void)setIsFromMessage:(BOOL)arg0;
- (BOOL)shouldHidden;
- (void)setShouldHidden:(BOOL)arg0;
- (id)pendantMaterial;
- (void)setPendantMaterial:(id)arg0;
- (id)eggMaterial;
- (void)setEggMaterial:(id)arg0;
- (id)danmakuFont;
- (void)setNeedUseFakeAlpha:(BOOL)arg0;
- (id)prefixImagePath;
- (id)prefixImageURL;
- (unsigned long long)danmakuTypeBits;
- (BOOL)isOfficialDanmaku;
- (BOOL)isCommercialDanmaku;
- (void)setDanmakuScene:(long long)arg0;
- (void)setDanmakuFont:(id)arg0;
- (long long)digged;
- (id)diggCountText;
- (void)setDigged:(long long)arg0;
- (BOOL)isAuthorDanmaku;
- (void)updateDanmakuId:(id)arg0;
- (void)updateDanmakuTimeOffset:(double)arg0;
- (void)setIsFromMVChannel:(BOOL)arg0;
- (void)setNeedShowBackGroundColor:(BOOL)arg0;
- (id)initWithDanmakuModel:(id)arg0 calculateSize:(BOOL)arg1;
- (long long)danmakuScene;
- (struct CGSize { double x0; double x1; })digImageSize;
- (BOOL)commercialImageShouldHide;
- (struct CGSize { double x0; double x1; })authorIdentityLabelSize;
- (double)prefixImageWidth;
- (struct CGSize { double x0; double x1; })danmakuContentSize;
- (BOOL)shouldShowPrefixLabel;
- (BOOL)needShowBackGroundColor;
- (void)setPrefixImagePath:(id)arg0;
- (void)setShouldHidePreImage:(BOOL)arg0;
- (void)setCommercialImageShouldHide:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })digNumViewSize;
- (void)setDanmakuTypeBits:(unsigned long long)arg0;
- (void)setDanmakuID:(id)arg0;
- (void)setShowDigg:(BOOL)arg0;
- (BOOL)didCalculateScore;
- (void)setDidCalculateScore:(BOOL)arg0;
- (BOOL)isBottomDanmaku;
- (BOOL)isDefaultDanmaku;
- (BOOL)needUseFakeAlpha;
- (id)optimizedDanmakuContent;
- (BOOL)shouldHidePreImage;
- (void)setPrefixImageURL:(id)arg0;
- (id)loadDanmakuFontFromSettingManager;
- (void)configEmojiWithContent:(id)arg0;
- (void)setDanmakuContentSize:(struct CGSize { double x0; double x1; })arg0;
- (double)prefixImageRatio;
- (struct CGSize { double x0; double x1; })updateContentSizeInDigNumSceneIfNeedWith:(struct CGSize { double x0; double x1; })arg0;
- (void)setDigImageSize:(struct CGSize { double x0; double x1; })arg0;
- (id)digImage;
- (void)setDigImage:(id)arg0;
- (BOOL)isSelfDanmaku;
- (void)setDigNumViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setDiggCountText:(id)arg0;
- (void)setPrefixImageWidth:(double)arg0;
- (void)setPrefixImageRatio:(double)arg0;
- (void)setIsLocal:(BOOL)arg0;
- (id)userID;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setTimeOffset:(double)arg0;
- (BOOL)isLocal;
- (double)timeOffset;
- (double)score;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)initWithDictionary:(id)arg0;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setUserID:(id)arg0;
- (id)itemID;
- (id)extra;
- (void)setItemID:(id)arg0;
- (id)text;
- (id)trackType;
- (double)alpha;
- (id)attributedString;
- (void)setHasEmoji:(BOOL)arg0;
- (BOOL)hasEmoji;
- (double)timeTolerance;
- (void)calculateContentSize;
- (void)invalidateContentSize;

@end
