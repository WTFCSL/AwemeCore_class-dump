//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOWorkSyncModel : MTLModel <MTLJSONSerializing> {
    BOOL _isSyncToUlike;
}

@property (nonatomic) BOOL isSyncToUlike;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSyncToUlike;
- (void)setIsSyncToUlike:(BOOL)arg0;

@end