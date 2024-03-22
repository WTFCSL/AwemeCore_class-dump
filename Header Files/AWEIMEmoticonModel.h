//
//     Generated by private class-dump
//

@class NSString, AWEIMEmoticonModelAudioEmojiContext, NSArray, NSURL, NSMutableDictionary, NSDictionary, AWEURLModel, AWEIMEmojiAuthor, AWEIMDisplayNameModel, NSNumber;

@interface AWEIMEmoticonModel : MTLModel <MTLJSONSerializing, AWEIMEmoticonModelProtocol> {
    BOOL _hide;
    BOOL _isPlaceHolderXmoji;
    BOOL _canShowInActionBar;
    BOOL _showNotice;
    BOOL _isFromSearching;
    NSString *_emoticonIcon;
    NSString *_emoticonTitle;
    NSString *_showName;
    NSNumber *_identifier;
    NSNumber *_width;
    NSNumber *_height;
    NSString *_display_name;
    NSString *_animate_url;
    NSString *_static_url;
    NSString *_animate_uri;
    NSString *_static_uri;
    NSString *_static_type;
    NSString *_animate_type;
    NSDictionary *_display_name_lang;
    AWEIMDisplayNameModel *_displayNameModel;
    NSString *_localPath;
    unsigned long long _stickerType;
    NSNumber *_packedSpecialID;
    NSNumber *_version;
    long long _resourceType;
    long long _originThemeStyle;
    NSString *_originUniqueId;
    NSString *_imageType;
    NSNumber *_originPackageID;
    AWEURLModel *_animateURLModel;
    NSString *_searchLogID;
    NSString *_hashString;
    NSMutableDictionary *_context;
    NSArray *_randomInteractiveEmojiResultInfos;
    NSNumber *_searchPackageID;
    NSString *_searchKeyword;
    AWEIMEmojiAuthor *_author;
    NSString *_source;
    NSNumber *_heycanIdentifier;
    NSDictionary *_extra;
    NSString *_lightInteractionName;
    NSString *_stickerID;
    AWEURLModel *_thumbnailURLModel;
    NSURL *_requestedURL;
    NSArray *_randomInteractiveEmojiResultResponses;
}

@property (retain, nonatomic) AWEIMEmoticonModelAudioEmojiContext *ae_context;
@property (copy, nonatomic) NSString *pe_effectId;
@property (copy, nonatomic) NSArray *randomInteractiveEmojiResultResponses;
@property (copy, nonatomic) NSString *emoticonIcon;
@property (copy, nonatomic) NSString *emoticonTitle;
@property (nonatomic) BOOL hide;
@property (copy, nonatomic) NSString *showName;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *display_name;
@property (copy, nonatomic) NSString *animate_url;
@property (copy, nonatomic) NSString *static_url;
@property (copy, nonatomic) NSString *animate_uri;
@property (copy, nonatomic) NSString *static_uri;
@property (retain, nonatomic) NSString *static_type;
@property (retain, nonatomic) NSString *animate_type;
@property (copy, nonatomic) NSDictionary *display_name_lang;
@property (retain, nonatomic) AWEIMDisplayNameModel *displayNameModel;
@property (copy, nonatomic) NSString *localPath;
@property (nonatomic) unsigned long long stickerType;
@property (nonatomic) BOOL isPlaceHolderXmoji;
@property (retain, nonatomic) NSNumber *packedSpecialID;
@property (nonatomic) BOOL canShowInActionBar;
@property (retain, nonatomic) NSNumber *version;
@property (nonatomic) long long resourceType;
@property (nonatomic) long long originThemeStyle;
@property (copy, nonatomic) NSString *originUniqueId;
@property (retain, nonatomic) NSString *imageType;
@property (nonatomic) BOOL showNotice;
@property (retain, nonatomic) NSNumber *originPackageID;
@property (retain, nonatomic) AWEURLModel *animateURLModel;
@property (copy, nonatomic) NSString *searchLogID;
@property (nonatomic) BOOL isFromSearching;
@property (retain, nonatomic) NSString *hashString;
@property (retain, nonatomic) NSMutableDictionary *context;
@property (copy, nonatomic) NSArray *randomInteractiveEmojiResultInfos;
@property (retain, nonatomic) NSNumber *searchPackageID;
@property (copy, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) AWEIMEmojiAuthor *author;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSNumber *heycanIdentifier;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *lightInteractionName;
@property (copy, nonatomic) NSString *stickerID;
@property (retain, nonatomic) AWEURLModel *thumbnailURLModel;
@property (retain, nonatomic) NSURL *requestedURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emoticonModelWithSearchResultObject:(id)arg0;
+ (id)displayNameLangJSONTransformer;
+ (id)randomInteractiveEmojiResultResponsesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)ae_context;
- (void)setAe_context:(id)arg0;
- (id)searchResultObject;
- (void)setExtra:(id)arg0;
- (void)setHide:(BOOL)arg0;
- (id)animateURLModel;
- (void)setAnimateURLModel:(id)arg0;
- (void)setStickerType:(unsigned long long)arg0;
- (id)stickerID;
- (id)originPackageID;
- (id)emoticonIcon;
- (id)emoticonTitle;
- (void)setStickerID:(id)arg0;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg0;
- (id)display_name;
- (void)setDisplay_name:(id)arg0;
- (void)setEmoticonIcon:(id)arg0;
- (void)setEmoticonTitle:(id)arg0;
- (void)setRequestedURL:(id)arg0;
- (id)searchLogID;
- (void)setSearchLogID:(id)arg0;
- (id)thumbnailURLModel;
- (void)setThumbnailURLModel:(id)arg0;
- (void)setOriginPackageID:(id)arg0;
- (id)heycanIdentifier;
- (void)setHeycanIdentifier:(id)arg0;
- (long long)originThemeStyle;
- (id)animate_type;
- (id)animate_url;
- (id)animate_uri;
- (id)static_url;
- (id)static_uri;
- (BOOL)isFromSearching;
- (void)setOriginUniqueId:(id)arg0;
- (void)setOriginThemeStyle:(long long)arg0;
- (id)static_type;
- (void)setAnimate_url:(id)arg0;
- (void)setStatic_url:(id)arg0;
- (void)setStatic_type:(id)arg0;
- (void)setAnimate_type:(id)arg0;
- (id)display_name_lang;
- (void)setDisplay_name_lang:(id)arg0;
- (void)setAnimate_uri:(id)arg0;
- (void)setStatic_uri:(id)arg0;
- (id)originUniqueId;
- (id)pe_effectId;
- (void)setPe_effectId:(id)arg0;
- (id)randomInteractiveEmojiResultResponses;
- (id)displayNameModel;
- (void)setDisplayNameModel:(id)arg0;
- (void)setPackedSpecialID:(id)arg0;
- (void)setCanShowInActionBar:(BOOL)arg0;
- (void)setRandomInteractiveEmojiResultResponses:(id)arg0;
- (id)randomInteractiveEmojiResultInfos;
- (id)getCurrentDisplayName;
- (BOOL)isSpecialEffectEmoji;
- (id)lightInteractionName;
- (BOOL)isPlaceHolderXmoji;
- (void)setIsPlaceHolderXmoji:(BOOL)arg0;
- (id)packedSpecialID;
- (BOOL)canShowInActionBar;
- (BOOL)showNotice;
- (void)setShowNotice:(BOOL)arg0;
- (void)setIsFromSearching:(BOOL)arg0;
- (void)setRandomInteractiveEmojiResultInfos:(id)arg0;
- (id)searchPackageID;
- (void)setSearchPackageID:(id)arg0;
- (void)setLightInteractionName:(id)arg0;
- (id)init;
- (long long)resourceType;
- (void)setVersion:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (void)setResourceType:(long long)arg0;
- (id)height;
- (void)setContext:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)imageType;
- (id)identifier;
- (id)extra;
- (id)author;
- (id)version;
- (void)setAuthor:(id)arg0;
- (id)context;
- (BOOL)hide;
- (void)setImageType:(id)arg0;
- (void)setWidth:(id)arg0;
- (id)hashString;
- (BOOL)isEqual:(id)arg0;
- (void)setSource:(id)arg0;
- (void)setHeight:(id)arg0;
- (id)width;
- (void)setHashString:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (id)localPath;
- (id)showName;
- (void)setShowName:(id)arg0;
- (unsigned long long)stickerType;
- (void)setLocalPath:(id)arg0;
- (id)requestedURL;

@end
