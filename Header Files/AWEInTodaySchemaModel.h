//
//     Generated by private class-dump
//

@class NSString, AWEInTodaySchemaData;

@interface AWEInTodaySchemaModel : MTLModel <MTLJSONSerializing> {
    BOOL _fromFlashMob;
    NSString *_hasAweme;
    NSString *_verifyAuthorization;
    NSString *_type;
    AWEInTodaySchemaData *_data;
    NSString *_dataString;
    NSString *_enterFrom;
    NSString *_shootWay;
    NSString *_isOwnPhoto;
    NSString *_useCache;
    NSString *_enterPage;
}

@property (copy, nonatomic) NSString *hasAweme;
@property (copy, nonatomic) NSString *verifyAuthorization;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) AWEInTodaySchemaData *data;
@property (copy, nonatomic) NSString *dataString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *isOwnPhoto;
@property (copy, nonatomic) NSString *useCache;
@property (copy, nonatomic) NSString *enterPage;
@property (nonatomic) BOOL fromFlashMob;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setShootWay:(id)arg0;
- (id)shootWay;
- (id)hasAweme;
- (id)verifyAuthorization;
- (id)isOwnPhoto;
- (BOOL)fromFlashMob;
- (id)enterPage;
- (void)setIsOwnPhoto:(id)arg0;
- (void)setFromFlashMob:(BOOL)arg0;
- (void)setEnterPage:(id)arg0;
- (void)setHasAweme:(id)arg0;
- (void)setVerifyAuthorization:(id)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (id)type;
- (void)setType:(id)arg0;
- (id)useCache;
- (void)setUseCache:(id)arg0;
- (id)dataString;
- (void)setDataString:(id)arg0;

@end