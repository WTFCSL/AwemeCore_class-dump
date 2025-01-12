//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEStudioVideoAnchorModel : AWEBaseApiModel <NSCopying> {
    BOOL _passiveAnchor;
    BOOL _disableDraft;
    long long _anchorBusinessType;
    NSString *_anchorID;
    NSString *_anchorTag;
    NSString *_anchorContent;
    long long _passiveOptions;
    NSArray *_anchorIconList;
    NSString *_anchorTitle;
    long long _source;
    NSDictionary *_anchorPublishParam;
    NSDictionary *_lifePublishFinishParams;
}

@property (nonatomic) long long anchorBusinessType;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *anchorTag;
@property (copy, nonatomic) NSString *anchorContent;
@property (nonatomic) BOOL passiveAnchor;
@property (nonatomic) long long passiveOptions;
@property (copy, nonatomic) NSArray *anchorIconList;
@property (copy, nonatomic) NSString *anchorTitle;
@property (nonatomic) BOOL disableDraft;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSDictionary *anchorPublishParam;
@property (copy, nonatomic) NSDictionary *lifePublishFinishParams;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasAnchorInfo;
- (id)anchorID;
- (BOOL)passiveAnchor;
- (void)setPassiveAnchor:(BOOL)arg0;
- (long long)passiveOptions;
- (void)setPassiveOptions:(long long)arg0;
- (id)lifePublishFinishParams;
- (void)setLifePublishFinishParams:(id)arg0;
- (void)setAnchorID:(id)arg0;
- (id)anchorContent;
- (void)setAnchorContent:(id)arg0;
- (id)anchorTag;
- (id)anchorTitle;
- (long long)anchorBusinessType;
- (id)anchorIconList;
- (id)anchorPublishParam;
- (void)setAnchorTag:(id)arg0;
- (void)setAnchorTitle:(id)arg0;
- (void)setAnchorBusinessType:(long long)arg0;
- (void)setAnchorIconList:(id)arg0;
- (void)setAnchorPublishParam:(id)arg0;
- (BOOL)disableDraft;
- (void)setDisableDraft:(BOOL)arg0;
- (id)numberOfAnchorBusinessType;
- (BOOL)addTextAnchor;
- (BOOL)addImageAnchor;
- (id)anchor;
- (long long)source;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setSource:(long long)arg0;
- (id)initWithAnchor:(id)arg0;

@end
