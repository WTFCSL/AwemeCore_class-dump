//
//     Generated by private class-dump
//

@class NSString;

@interface ACCRepoStickerInstanceGetterImpl : NSObject <ACCRepoStickerInstanceGetter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionStickerIdsWithProjectIndex:(long long)arg0;
- (id)interactionStickerTypesWithProjectIndex:(long long)arg0;
- (id)p_interactionStickerSubInfosWithProjectIndex:(long long)arg0 map:(id /* block */)arg1;

@end
