//
//     Generated by private class-dump
//

@interface ACCStickerDisplayContainerConfig : NSObject <ACCStickerContainerConfigProtocol> {
    BOOL _ignoreMaskRadiusForXScreen;
    id _contextId;
    id /* block */ _stickerHierarchyComparator;
}

@property (retain, nonatomic) id contextId;
@property (copy, nonatomic) id /* block */ stickerHierarchyComparator;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;

- (id /* block */)stickerHierarchyComparator;
- (void)setStickerHierarchyComparator:(id /* block */)arg0;
- (BOOL)ignoreMaskRadiusForXScreen;
- (void)setIgnoreMaskRadiusForXScreen:(BOOL)arg0;
- (id)stickerPlugins;
- (Class)stickerFactoryClass;
- (Class)stickerPluginConfigClass;
- (void)setContextId:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)contextId;

@end