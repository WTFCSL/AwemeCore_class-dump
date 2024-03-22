//
//     Generated by private class-dump
//

@class NSDictionary, NSSet;

@interface DVETypeConversionRuleGroup : NSObject <NSCopying> {
    NSDictionary *_customPropertyMapper;
    NSSet *_deletePrefixSet;
    NSSet *_ignorePropertyNameSet;
    NSSet *_needPropertyNameSet;
    NSSet *_tilesClassNameSet;
}

@property (retain, nonatomic) NSDictionary *customPropertyMapper;
@property (retain, nonatomic) NSSet *deletePrefixSet;
@property (retain, nonatomic) NSSet *ignorePropertyNameSet;
@property (retain, nonatomic) NSSet *needPropertyNameSet;
@property (retain, nonatomic) NSSet *tilesClassNameSet;

+ (id)dve_awemeRuleGroup;

- (id)ignorePropertyNameSet;
- (id)applyCustomPropertyMapperRuleForString:(id)arg0;
- (id)deletePrefixSet;
- (id)customPropertyMapper;
- (void)setCustomPropertyMapper:(id)arg0;
- (void)setDeletePrefixSet:(id)arg0;
- (void)setIgnorePropertyNameSet:(id)arg0;
- (id)tilesClassNameSet;
- (void)setTilesClassNameSet:(id)arg0;
- (id)applyForString:(id)arg0;
- (id)needPropertyNameSet;
- (void)setNeedPropertyNameSet:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;

@end