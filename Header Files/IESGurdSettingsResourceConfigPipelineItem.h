//
//     Generated by private class-dump
//

@interface IESGurdSettingsResourceConfigPipelineItem : NSObject {
    BOOL _disableCache;
    long long _type;
    long long _updatePolicy;
}

@property (nonatomic) long long type;
@property (nonatomic) long long updatePolicy;
@property (nonatomic) BOOL disableCache;

+ (id)configWithDictionary:(id)arg0;

- (long long)updatePolicy;
- (long long)type;
- (void)setDisableCache:(BOOL)arg0;
- (void)setType:(long long)arg0;
- (BOOL)disableCache;
- (void)setUpdatePolicy:(long long)arg0;

@end
