//
//     Generated by private class-dump
//

@interface AWEAwemeDistributeCircleModel : AWEBaseApiModel {
    BOOL _shouldBlockInteraction;
    BOOL _newSchoolStyleEnable;
    unsigned long long _distributeType;
}

@property (nonatomic) unsigned long long distributeType;
@property (nonatomic) BOOL shouldBlockInteraction;
@property (nonatomic) BOOL newSchoolStyleEnable;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)distributeType;
- (void)setDistributeType:(unsigned long long)arg0;
- (BOOL)shouldBlockInteraction;
- (void)setShouldBlockInteraction:(BOOL)arg0;
- (BOOL)newSchoolStyleEnable;
- (void)setNewSchoolStyleEnable:(BOOL)arg0;

@end
