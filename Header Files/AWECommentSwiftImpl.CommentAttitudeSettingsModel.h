//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWECommentSwiftImpl.CommentAttitudeSettingsModel : AWEBaseApiModel {
    void /* unknown type, empty encoding */ configs;
    void /* unknown type, empty encoding */ longPanelDesc;
    void /* unknown type, empty encoding */ longDiggDesc;
}

@property (nonatomic, copy) NSArray *configs;
@property (nonatomic, copy) NSString *longPanelDesc;
@property (nonatomic, copy) NSString *longDiggDesc;

+ (id)configsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setConfigs:(id)arg0;
- (id)longPanelDesc;
- (void)setLongPanelDesc:(id)arg0;
- (id)longDiggDesc;
- (void)setLongDiggDesc:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (id)configs;

@end
