//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveOpenLiveEffectPanelParamModel : IESLiveBridgeModel {
    BOOL _shouldScrollToEffect;
    BOOL _shouldSelectEffect;
    NSString *_categoryKey;
    NSString *_effectID;
}

@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) BOOL shouldScrollToEffect;
@property (nonatomic) BOOL shouldSelectEffect;

+ (id)modelCustomPropertyMapper;

- (void)setCategoryKey:(id)arg0;
- (void)setEffectID:(id)arg0;
- (BOOL)shouldScrollToEffect;
- (void)setShouldScrollToEffect:(BOOL)arg0;
- (BOOL)shouldSelectEffect;
- (void)setShouldSelectEffect:(BOOL)arg0;
- (void).cxx_destruct;
- (id)effectID;
- (id)categoryKey;

@end
