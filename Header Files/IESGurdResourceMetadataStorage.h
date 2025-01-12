//
//     Generated by private class-dump
//

@class IESGurdResourceMetadataCache;

@interface IESGurdResourceMetadataStorage : NSObject

@property (class, retain, nonatomic) IESGurdResourceMetadataCache *activeMetadataCache;

+ (id)activeMetaForAccessKey:(id)arg0 channel:(id)arg1;
+ (id)copyActiveMetadataDictionary;
+ (void)saveActiveMeta:(id)arg0;
+ (void)deleteActiveMetaForAccessKey:(id)arg0 channel:(id)arg1;
+ (void)clearAllMetadata;
+ (id)activeMetadataCache;
+ (id)metadataCacheWithPath:(id)arg0 metadataCapacity:(int)arg1 metadataClass:(Class)arg2 enableIndexLog:(BOOL)arg3;
+ (void)setActiveMetadataCache:(id)arg0;
+ (BOOL)migrateMetadataIfNeeded;
+ (void)initialize;
+ (void)setupMetadata;

@end
