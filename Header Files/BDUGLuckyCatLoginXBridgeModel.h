//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDUGLuckyCatLoginXBridgeModel : BDXBridgeModel {
    NSString *_platform;
    NSString *_titleType;
    NSString *_loginSource;
    NSDictionary *_extraData;
}

@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *titleType;
@property (copy, nonatomic) NSString *loginSource;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)loginSource;
- (void)setLoginSource:(id)arg0;
- (void).cxx_destruct;
- (id)titleType;
- (void)setPlatform:(id)arg0;
- (id)platform;
- (void)setTitleType:(id)arg0;
- (id)dictionaryValue;
- (void)setExtraData:(id)arg0;
- (id)extraData;

@end
