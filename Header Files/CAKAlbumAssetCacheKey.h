//
//     Generated by private class-dump
//

@class NSString;

@interface CAKAlbumAssetCacheKey : NSObject <NSCopying> {
    BOOL _ascending;
    unsigned long long _resourceType;
    NSString *_collectionLocalizedTitle;
}

@property (nonatomic) BOOL ascending;
@property (nonatomic) unsigned long long resourceType;
@property (copy, nonatomic) NSString *collectionLocalizedTitle;

+ (id)keyWithAscending:(BOOL)arg0 type:(unsigned long long)arg1 localizedTitle:(id)arg2;

- (void)setCollectionLocalizedTitle:(id)arg0;
- (id)collectionLocalizedTitle;
- (BOOL)ascending;
- (unsigned long long)resourceType;
- (void)setAscending:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setResourceType:(unsigned long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;

@end
