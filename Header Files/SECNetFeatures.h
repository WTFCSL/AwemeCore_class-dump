//
//     Generated by private class-dump
//

@class NSString;
@protocol SECNetFeatureProtocol;

@interface SECNetFeatures : NSObject <SECNetFeatureProtocol> {
    id<SECNetFeatureProtocol> _customFeature;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)purifiedURL:(id)arg0 andPath:(id)arg1;
+ (id)dataTagsFor:(id)arg0;
+ (id)tagsFor:(id)arg0 with:(id)arg1;
+ (id)disassembleHost:(id)arg0;
+ (id)sharedFeatures;

- (BOOL)is3rdPartyHost:(id)arg0;
- (BOOL)isZijieAPI:(id)arg0 withPath:(id)arg1;
- (BOOL)_isZijieAPI:(id)arg0 withPath:(id)arg1;
- (void)setupWithFeatures:(id)arg0;
- (void).cxx_destruct;

@end