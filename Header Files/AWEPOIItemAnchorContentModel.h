//
//     Generated by private class-dump
//

@class AWEPOIServiceSpuEntryModel, NSArray, NSString, NSDictionary;

@interface AWEPOIItemAnchorContentModel : MTLModel <MTLJSONSerializing> {
    NSArray *_primaryTags;
    NSArray *_minorTags;
    AWEPOIServiceSpuEntryModel *_entry;
    unsigned long long _anchorType;
    NSString *_logExtra;
    NSDictionary *_anchorSuffix;
    unsigned long long _anchorExplorationStyle;
    NSArray *_explorationIconURLs;
    NSArray *_primaryExplorationTags;
    NSString *_explorationButtonText;
}

@property (retain, nonatomic) NSArray *primaryTags;
@property (retain, nonatomic) NSArray *minorTags;
@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *entry;
@property (nonatomic) unsigned long long anchorType;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSDictionary *anchorSuffix;
@property (nonatomic) unsigned long long anchorExplorationStyle;
@property (retain, nonatomic) NSArray *explorationIconURLs;
@property (retain, nonatomic) NSArray *primaryExplorationTags;
@property (copy, nonatomic) NSString *explorationButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)minorTagsJSONTransformer;
+ (id)primaryTagsJSONTransformer;
+ (id)entryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)anchorSuffix;
- (id)minorTags;
- (id)primaryTags;
- (void)setPrimaryTags:(id)arg0;
- (void)setMinorTags:(id)arg0;
- (unsigned long long)anchorExplorationStyle;
- (void)setAnchorExplorationStyle:(unsigned long long)arg0;
- (void)setAnchorSuffix:(id)arg0;
- (id)explorationIconURLs;
- (void)setExplorationIconURLs:(id)arg0;
- (id)primaryExplorationTags;
- (void)setPrimaryExplorationTags:(id)arg0;
- (id)explorationButtonText;
- (void)setExplorationButtonText:(id)arg0;
- (unsigned long long)anchorType;
- (void).cxx_destruct;
- (void)setEntry:(id)arg0;
- (id)entry;
- (void)setAnchorType:(unsigned long long)arg0;

@end