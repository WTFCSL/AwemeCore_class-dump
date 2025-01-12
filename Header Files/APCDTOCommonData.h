//
//     Generated by private class-dump
//

@class NSString;

@interface APCDTOCommonData : MTLModel <MTLJSONSerializing> {
    BOOL _animated;
    long long _initialScene;
    long long _type;
}

@property (nonatomic) long long initialScene;
@property (nonatomic) long long type;
@property (nonatomic) BOOL animated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setInitialScene:(long long)arg0;
- (long long)initialScene;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg0;
- (id)init;
- (long long)type;
- (void)setType:(long long)arg0;

@end
