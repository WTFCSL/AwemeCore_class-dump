//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface GPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary *mutableClassMap_;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)addExtension:(id)arg0;
- (id)extensionForDescriptor:(id)arg0 fieldNumber:(long long)arg1;
- (void)dealloc;
- (void)addExtensions:(id)arg0;

@end
