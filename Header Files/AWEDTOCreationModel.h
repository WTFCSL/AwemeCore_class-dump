//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEDTOCreationModel : MTLModel <MTLJSONSerializing> {
    BOOL _disableResourceAdd;
    BOOL _disableResourceRemove;
    BOOL _disableAddVideo;
    BOOL _hasSetEditorEffect;
    long long _creationMode;
    NSDictionary *_createAwemeParams;
    NSString *_passthoughEffectId;
    NSString *_passthoughOriginalEffectId;
    NSDictionary *_exchangeRedPacket;
}

@property (nonatomic) long long creationMode;
@property (copy, nonatomic) NSDictionary *createAwemeParams;
@property (nonatomic) BOOL disableResourceAdd;
@property (nonatomic) BOOL disableResourceRemove;
@property (copy, nonatomic) NSString *passthoughEffectId;
@property (copy, nonatomic) NSString *passthoughOriginalEffectId;
@property (nonatomic) BOOL disableAddVideo;
@property (copy, nonatomic) NSDictionary *exchangeRedPacket;
@property (nonatomic) BOOL hasSetEditorEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)creationMode;
- (void)setCreationMode:(long long)arg0;
- (id)createAwemeParams;
- (void)setCreateAwemeParams:(id)arg0;
- (BOOL)disableResourceAdd;
- (void)setDisableResourceAdd:(BOOL)arg0;
- (BOOL)disableResourceRemove;
- (void)setDisableResourceRemove:(BOOL)arg0;
- (id)passthoughEffectId;
- (void)setPassthoughEffectId:(id)arg0;
- (id)passthoughOriginalEffectId;
- (void)setPassthoughOriginalEffectId:(id)arg0;
- (BOOL)disableAddVideo;
- (void)setDisableAddVideo:(BOOL)arg0;
- (id)exchangeRedPacket;
- (void)setExchangeRedPacket:(id)arg0;
- (BOOL)hasSetEditorEffect;
- (void)setHasSetEditorEffect:(BOOL)arg0;
- (void).cxx_destruct;

@end